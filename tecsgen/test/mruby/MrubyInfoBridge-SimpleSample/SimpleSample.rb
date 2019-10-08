# coding: utf-8
#
# $Id: SimpleSample.rb 1887 2012-09-14 07:26:36Z okuma-top $
#

module TECS
  module Bridge
    @@accessor = TECS::TnTECSInfo_sAccessor.new( 'TECSInfoeAccessorBridge' )
    @@cp = TECS::CharPointer.new( 256 );
    def self.join( cell_ent_name )                   # このメソッドでは、ネームスペース下のシグニチャに対応しない
      cell_ent_chararray = TECS::CharPointer.new( cell_ent_name.length + 1);
      cell_ent_chararray.from_s cell_ent_name
      if( @@accessor.getSignatureNameOfCellEntry( cell_ent_chararray, @@cp, @@cp.length) != 0 )
        raise "'#{cell_ent_name}' not found"
      end
      signature_name = @@cp.to_s
      self.join2( cell_ent_name, signature_name )
    end
    def self.join2( cell_ent_name, signature_global_name ) # このメソッドでは、ネームスペース下のシグニチャに対応する
      bridgeClass = Object.const_get( 'TECS::Info' + signature_global_name )   # this causes Ruby exception for non-existing signature name
      bridgeClass.new( cell_ent_name )
    end
  end
end

# mruby SimpleSapmle
#  Sample mruby

# ブリッジセルの作成
p "creating bridge"
#bridge = TECS::TsSample.new( "SimpleBridge" )
#bridge = TECS::TsSample.new( "Simple" )
#bridge = TECS::InfosSample.new( "Sample.eEnt" )
bridge = TECS::Bridge.join( "Sample.eEnt" )
p bridge.class.name

# (1) sayHello を呼びだす
#	 ER  sayHello( [in]int32_t times );

times = 5
p "TEST sayHello #{times} times"
bridge.sayHello( times )

# (2) howAreYou の呼出し
#	 ER  howAreYou( [out,string(len)]char_t *buf, [in]int32_t len );

# howoAreYou の引数準備
len = 32
buf = TECS::CharPointer.new( len )

# howAreYou を呼びだす
p "TEST howAreYou"
bridge.howAreYou( buf, len )
print buf.to_s, "\n"

##############
print "****  bridge2  ****\n"
bridge2 = TECS::Bridge.join( "Sample.eEntArray[2]" )
times = 3
p "TEST sayHello #{times} times"
bridge2.sayHello( times )

# (2) howAreYou の呼出し
#	 ER  howAreYou( [out,string(len)]char_t *buf, [in]int32_t len );

# howoAreYou の引数準備
len = 32
buf = TECS::CharPointer.new( len )

# howAreYou を呼びだす
p "TEST howAreYou"
bridge2.howAreYou( buf, len )
print buf.to_s, "\n"


=begin
  module Bridge
    @@accessor = TECS::TnTECSInfo_sAccessor.new( 'TECSInfoeAccessorBridge' )
    @@cp = TECS::CharPointer.new( 256 );
    # mikan: entry array not supported
    def self.join( cell_ent_name )

      sp = cell_ent_name.split '.'
      cell_name = sp[0]
      sp2 = sp[1].split '['
      ent_name = sp2[0]
      if sp2[1] != nil then
        subsc = '[' + sp2[1]
      else
        subsc = ''
      end
      @@cp.from_s cell_name
      if @@accessor.selectCellInfoByName( @@cp ) != 0 then
        raise "cell '#{cell_name}' not found"
      end
      @@accessor.selectCelltypeInfoOfCell

      num_attr  = TECS::IntPointer.new( 1 );
      num_var   = TECS::IntPointer.new( 1 );
      num_call  = TECS::IntPointer.new( 1 );
      num_entry = TECS::IntPointer.new( 1 );
      @@accessor.getSelectedCelltypeInfo( @@cp, @@cp.length,
                                          num_attr, num_var, num_call, num_entry )
      array_size = TECS::IntPointer.new( 1 );
      b_found = false
      (0..num_entry[0]).each{ |i|
        @@accessor.selectEntryInfo( i );
        @@accessor.getSelectedEntryInfo @@cp, @@cp.length, array_size
        if @@cp.to_s == ent_name then
          b_found = true
          break
        end
      }
      if b_found == false then
        raise "entry '#{ent_name}' not found for cell '#{cell_name}'"
      end
      @@accessor.selectSignatureOfEntry
      num_function = TECS::IntPointer.new( 1 );
      @@accessor.getSelectedSignatureInfo( @@cp, @@cp.length, num_function );
      signature_name = @@cp.to_s
      bridgeClass = Object.const_get( 'TECS::Info' + signature_name )   # this causes Ruby exception for non-existing signature name
      bridgeClass.new( cell_name + "." + ent_name + subsc )
    end

end

=end
