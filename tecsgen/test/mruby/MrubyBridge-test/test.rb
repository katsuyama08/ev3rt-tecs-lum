# coding: iso-8859-1
#
# $Id: $
#

# mruby ÈÇ SimpleSapmle
#  Sample ¥»¥ë¤ò mruby ¤«¤éÁàºî¤¹¤ë

def test_set( sigBridge )

  print "# testing func #\n"
  val = 5
  er = sigBridge.func( val )
  print( "return value: ER=#{er}\n")

  print "# testing func2 #\n"
  len = 8
  buf = TECS::Int32Pointer.new( len )
  idx = 0
  while idx < len
    buf[idx] = idx * idx
    idx += 1
  end
  sigBridge.func2( buf, len )

  print "# testing func3 #\n"
  sigBridge.func3( len )

  print "# testing func4 #\n"
  p TECS::Structtag
  st = TECS::Structtag.new
  st.a = 55.0
  st.b = 9999
  sigBridge.func4 st

  print "# testing func5 #\n"
  sigBridge.func5 st
  print "return  func5 st.a=#{st.a} st.b=#{st.b}\n"

  print "# testing func6 #\n"
  str = TECS::CharPointer.new 32
  str.from_s "hello world!!"
  sigBridge.func6( str, 32 )

  print "# testing func7(true) #\n"
  sigBridge.func7 true
  print "# testing func7(nil) #\n"
  sigBridge.func7 nil

  #	void	func11( void );
  print "# testing func11 #\n"
  sigBridge.func11

  #	bool_t	func12( [in]bool_t bi, [out]bool_t *bo, [inout]bool_t *bio );
  print "# testing func12 #\n"
  bo  = TECS::BoolPointer.new 1
  bio = TECS::BoolPointer.new 1
  ret = sigBridge.func12( true, bo, bio )
  p "  ret=#{ret} bo=#{bo[0]} bio=#{bio[0]}"

  #	int		func13( [in]int    ii, [out]int    *io, [inout]int    *iio );
  print "# testing func13 #\n"
  io  = TECS::IntPointer.new 1
  iio = TECS::IntPointer.new 1
  iio.value = -100
  ret = sigBridge.func13( 100, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	char	func14( [in]char   ii, [out]char   *io, [inout]char   *iio );
  print "# testing func14 #\n"
  io  = TECS::CharPointer.new 1
  iio = TECS::CharPointer.new 1
  iio.value = 98
  ret = sigBridge.func14( 88, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	short	func15( [in]short  ii, [out]short  *io, [inout]short  *iio );
  print "# testing func15 #\n"
  io  = TECS::ShortPointer.new 1
  iio = TECS::ShortPointer.new 1
  iio.value = 9998
  ret = sigBridge.func15( 9988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	long	func16( [in]long   ii, [out]long   *io, [inout]long   *iio );
  print "# testing func16 #\n"
  io  = TECS::LongPointer.new 1
  iio = TECS::LongPointer.new 1
  iio.value = 99998
  ret = sigBridge.func16( 99988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	unsigned int 	func23( [in]unsigned int    ii, [out]unsigned int    *io, [inout]unsigned int    *iio );
  print "# testing func23 #\n"
  begin
    io  = TECS::UIntPointer.new 1
    iio = TECS::UIntPointer.new 1
    iio.value = -99998
    # iio.value = 99998
  rescue => e
    print "*** EXCEPTION *** ", e, " ***\n"
    begin
      ret = sigBridge.func23( -99988, io, iio )
    rescue => e2
      print "*** EXCEPTION *** ", e2, " ***\n"
    end
  end
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	unsigned char	func24( [in]unsigned char   ii, [out]unsigned char   *io, [inout]unsigned char   *iio );
  print "# testing func24 #\n"
  io  = TECS::UCharPointer.new 1
  iio = TECS::UCharPointer.new 1
  iio.value = 98
  ret = sigBridge.func24( 129, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	unsigned short	func25( [in]unsigned short  ii, [out]unsigned short  *io, [inout]unsigned short  *iio );
  print "# testing func25 #\n"
  io  = TECS::UShortPointer.new 1
  iio = TECS::UShortPointer.new 1
  iio.value = 9998
  ret = sigBridge.func25( 9988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	unsigned long	func26( [in]unsigned long   ii, [out]unsigned long   *io, [inout]unsigned long   *iio );
  print "# testing func26 #\n"
  io  = TECS::ULongPointer.new 1
  iio = TECS::ULongPointer.new 1
  iio.value = 9998
  ret = sigBridge.func26( -9988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	char_t ¿ä¾©¤Î·¿
  print "# testing func31 #\n"
  io  = TECS::CharPointer.new 1
  iio = TECS::CharPointer.new 1
  iio.value = 98
  ret = sigBridge.func31( 188, io, iio )

  #	schar_t ¿ä¾©¤Î·¿
  print "# testing func32 #\n"
  io  = TECS::SCharPointer.new 1
  iio = TECS::SCharPointer.new 1
  iio.value = 98
  ret = sigBridge.func32( -128, io, iio )

  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"
  #	// intN_t ¿ä¾©¤Î·¿
  #	int8_t		func33( [in]int8_t   ii, [out]int8_t    *io, [inout]int8_t  *iio );
  print "# testing func33 #\n"
  io  = TECS::Int8Pointer.new 1
  iio = TECS::Int8Pointer.new 1
  iio.value = 98
  ret = sigBridge.func33( -88, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	int16_t		func34( [in]int16_t  ii, [out]int16_t   *io, [inout]int16_t  *iio );
  print "# testing func34 #\n"
  io  = TECS::Int16Pointer.new 1
  iio = TECS::Int16Pointer.new 1
  iio.value = 9998
  ret = sigBridge.func34( -9988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	int32_t		func35( [in]int32_t  ii, [out]int32_t   *io, [inout]int32_t  *iio );
  print "# testing func35 #\n"
  io  = TECS::Int32Pointer.new 1
  iio = TECS::Int32Pointer.new 1
  iio.value = 9998
  ret = sigBridge.func35( -9988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	int64_t		func36( [in]int64_t  ii, [out]int64_t   *io, [inout]int64_t  *iio );
  print "# testing func36 #\n"
  io  = TECS::Int64Pointer.new 1
  iio = TECS::Int64Pointer.new 1
  iio.value = 9998
  ret = sigBridge.func36( -9988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	uchar_t ¿ä¾©¤Î·¿
  print "# testing func42 #\n"
  io  = TECS::UCharPointer.new 1
  iio = TECS::UCharPointer.new 1
  iio.value = 98
  ret = sigBridge.func42( 188, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	// uintN_t ¿ä¾©¤Î·¿
  #	uint8_t		func43( [in]uint8_t   ii, [out]uint8_t    *io, [inout]uint8_t  *iio );
  print "# testing func43 #\n"
  io  = TECS::UInt8Pointer.new 1
  iio = TECS::UInt8Pointer.new 1
  iio.value = 98
  ret = sigBridge.func43( 188, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	uint16_t	func44( [in]uint16_t  ii, [out]uint16_t   *io, [inout]uint16_t  *iio );
  print "# testing func44 #\n"
  io  = TECS::UInt16Pointer.new 1
  iio = TECS::UInt16Pointer.new 1
  iio.value = 9998
  ret = sigBridge.func44( 19988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	uint32_t	func45( [in]uint32_t  ii, [out]uint32_t   *io, [inout]uint32_t  *iio );
  print "# testing func45 #\n"
  io  = TECS::UInt32Pointer.new 1
  iio = TECS::UInt32Pointer.new 1
  iio.value = 9998
  ret = sigBridge.func45( 999988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  #	uint64_t	func46( [in]uint64_t  ii, [out]uint64_t   *io, [inout]uint64_t  *iio );
  print "# testing func46 #\n"
  io  = TECS::UInt64Pointer.new 1
  iio = TECS::UInt64Pointer.new 1
  iio.value = 9998
  ret = sigBridge.func46( 999999988, io, iio )
  p "  ret=#{ret} io=#{io.value} iio=#{iio.value}"

  sigBridge.func201( 0x2000 )
  sigBridge.func202( 0x7fffffff )
end


#####################
## start from here ##
#####################

# assign bridge cell
p "======  111111 ======"
p "creating bridge"
sigBridge = TECS::TsSig.new( "SigBridge" )
sigBridge2 = TECS::TsSig.new( "SigBridge2" )

test_set sigBridge
test_set sigBridge2

fl = TECS::Int16Pointer.new( 3 )
fl[1.0] = 1.0
p fl[1.0]

begin
sigBridge3 = TECS::TsSig.new( "SigBridge3" )
rescue
  p "fail to create sigBridge3"
  # exception again
  begin
    sigBridge3.func3( 1 )
  rescue
    p "fail to call sigBridge3.func3"
  end
end

