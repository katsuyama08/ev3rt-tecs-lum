class Accessor
  INDENT_UNIT = "  "
  def initialize
    # @accessor = TECS::TsAccessor.new( 'TECSInfoAccessoreSelectorBridge' )
    @accessor = TECS::TnTECSInfo_sAccessor.new( 'TECSInfoAccessoreSelectorBridge' )
    @cp = TECS::CharPointer.new( 256 );
  end
# 

  def printRootNamespaceInfo
    @cp.from_s "::"
    # 
    @accessor.selectNamespaceInfoByName(@cp)
    indent = ""
    printSelectedNamespaceInfo indent
  end

  def printSelectedNamespaceInfo indent
    nsp  = TECS::IntPointer.new( 1 );
    ctp  = TECS::IntPointer.new( 1 );
    sigp = TECS::IntPointer.new( 1 );
    @accessor.getSelectedNamespaceInfo( @cp, @cp.length, nsp, ctp, sigp )
    print indent + "namespace=" + @cp.to_s +
          ", # of namespace=" + nsp.value.to_s +
          ", # of celltype=" + ctp.value.to_s +
          ", # of signature=" + sigp.value.to_s + "\n"

    (0..(sigp.value-1)).each{ |i|
      @accessor.selectSignatureInfo(i)
      printSelectedSignatureInfo(indent + INDENT_UNIT)
    }
    (0..(ctp.value-1)).each{ |i|
      @accessor.selectCelltypeInfo(i)
      printSelectedCelltypeInfo(indent + INDENT_UNIT)
    }
  end
  def printSelectedSignatureInfo indent
    funcp = TECS::IntPointer.new( 1 );
    @accessor.getSelectedSignatureInfo(@cp, @cp.length, funcp )
    print indent + "signature=" + @cp.to_s +
          ", # of function=" + funcp.value.to_s + "\n"
    (0..(funcp.value-1)).each{ |i|
      @accessor.selectFunctionInfoByIndex( i )
      printFunctionInfo( indent+INDENT_UNIT )
    }
  end
  def printFunctionInfo indent
    paramp  = TECS::IntPointer.new( 1 );
    @accessor.getSelectedFunctionInfo( @cp, @cp.length, paramp )
    print indent + "function=" + @cp.to_s +
          ", # of param=" + paramp.value.to_s + "\n"
    (0..(paramp.value-1)).each{ |i|
      @accessor.selectParamInfo( i )
      printParamInfo( indent+INDENT_UNIT )
    }
  end
  def printParamInfo indent
    dirp = TECS::Int8Pointer.new( 1 );
    @accessor.getSelectedParamInfo(@cp, @cp.length, dirp )
    print indent + "param=" + @cp.to_s +
          ", dir=" + dirp.value.to_s + "\n"
    @accessor.selectTypeInfoOfParam
    printSelectedTypeInfo( indent+INDENT_UNIT )
  end
  def printSelectedCelltypeInfo indent
    attrp  = TECS::IntPointer.new( 1 );
    varp   = TECS::IntPointer.new( 1 );
    callp  = TECS::IntPointer.new( 1 );
    entryp = TECS::IntPointer.new( 1 );
    @accessor.getSelectedCelltypeInfo(@cp, @cp.length,
                                      attrp, varp, callp, entryp)
    print indent + "celltype=" + @cp.to_s +
          ", # of attr=" + attrp.value.to_s +   ", # of var=" + varp.value.to_s +
          ", # of call=" + callp.value.to_s + ", # of entry=" + entryp.value.to_s +
          "\n"

    indent2 = indent + INDENT_UNIT
    (0..(attrp.value-1)).each{|i|
      @accessor.selectCallInfo(i)
      printSelectedAttrInfo indent2
    }
    (0..(varp.value-1)).each{|i|
      @accessor.selectVarInfo(i)
      printSelectedVarInfo indent2
    }
    (0..(callp.value-1)).each{|i|
      @accessor.selectCallInfo(i)
      printSelectedCallInfo indent2
    }
    (0..(entryp.value-1)).each{|i|
      @accessor.selectEntryInfo(i)
      printSelectedEntryInfo indent2
    }
  end
  def printSelectedAttrInfo indent
    @accessor.getSelectedAttrInfo( @cp, @cp.length )
    print indent + "attr=" + @cp.to_s + "\n"
    @accessor.selectTypeInfoOfAttr
    printSelectedTypeInfo( indent+INDENT_UNIT )
  end
  def printSelectedVarInfo indent
    @accessor.getSelectedVarInfo( @cp, @cp.length )
    print indent +  "var=" + @cp.to_s + "\n"
    @accessor.selectTypeInfoOfVar
    printSelectedTypeInfo( indent+INDENT_UNIT )
  end
  def printSelectedCallInfo indent
    sizep  = TECS::IntPointer.new( 1 );
    @accessor.getSelectedCallInfo( @cp, @cp.length, sizep )
    print indent +  "call=" + @cp.to_s + ", size=" + sizep.value.to_s + "\n"
    @accessor.selectSignatureOfCall
    printSelectedSignatureName( indent+INDENT_UNIT )
  end
  def printSelectedEntryInfo indent
    sizep  = TECS::IntPointer.new( 1 );
    @accessor.getSelectedEntryInfo( @cp, @cp.length, sizep )
    print indent +  "entry=" + @cp.to_s + ", size=" + sizep.value.to_s + "\n"
    @accessor.selectSignatureOfEntry
    printSelectedSignatureName( indent+INDENT_UNIT )
  end
  def printSelectedTypeInfo indent
    kindp  = TECS::Int8Pointer.new( 1 );
    @accessor.getSelectedTypeInfo @cp, @cp.length, kindp
    print indent + "type=" + @cp.to_s + "\n"
  end
  def printSelectedSignatureName indent
    funcp  = TECS::IntPointer.new( 1 );
    @accessor.getSelectedSignatureInfo @cp, @cp.length, funcp
    print indent + "signature=" + @cp.to_s + "\n"
  end
end

ac = Accessor.new
ac.printRootNamespaceInfo

