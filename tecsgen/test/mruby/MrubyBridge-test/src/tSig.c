/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSig_template.c => src/tSig.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSig_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sSig
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_func
 * name:         eEnt_func
 * global_name:  tSig_eEnt_func
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func(CELLIDX idx, int32_t a)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func a=%d\n", a );
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func2
 * name:         eEnt_func2
 * global_name:  tSig_eEnt_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func2(CELLIDX idx, const int32_t* buf, int32_t len)
{
	CELLCB	*p_cellcb;
	int		i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func2 len=%d\n", len );
	for( i = 0; i < len; i++ )
		printf( "    buf[%d]=%d\n", i, buf[i] );
}

/* #[<ENTRY_FUNC>]# eEnt_func3
 * name:         eEnt_func3
 * global_name:  tSig_eEnt_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func3(CELLIDX idx, UINT32 a)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func3 a=%u\n", a );

}

/* #[<ENTRY_FUNC>]# eEnt_func4
 * name:         eEnt_func4
 * global_name:  tSig_eEnt_func4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func4(CELLIDX idx, struct tag  a)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEnt_func5
 * name:         eEnt_func5
 * global_name:  tSig_eEnt_func5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func5(CELLIDX idx, TAG* a)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	a->a = 125;
	a->b = 7963;
}

/* #[<ENTRY_FUNC>]# eEnt_func6
 * name:         eEnt_func6
 * global_name:  tSig_eEnt_func6
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func6(CELLIDX idx, const char_t* a, int32_t len)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	puts( a );
}

/* #[<ENTRY_FUNC>]# eEnt_func7
 * name:         eEnt_func7
 * global_name:  tSig_eEnt_func7
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func7(CELLIDX idx, bool_t boo)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func7: boo=%s \n", boo ? "true" : "false" );
}

/* #[<ENTRY_FUNC>]# eEnt_func11
 * name:         eEnt_func11
 * global_name:  tSig_eEnt_func11
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func11(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func11: \n" );
}

/* #[<ENTRY_FUNC>]# eEnt_func12
 * name:         eEnt_func12
 * global_name:  tSig_eEnt_func12
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eEnt_func12(CELLIDX idx, bool_t bi, bool_t* bo, bool_t* bio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func12: bi=%s bio=%s\n", bi ? "true" : "false", *bio ? "true" : "false" );
	*bo = false;
	*bio = ! *bio;

	return false;
}

/* #[<ENTRY_FUNC>]# eEnt_func13
 * name:         eEnt_func13
 * global_name:  tSig_eEnt_func13
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int
eEnt_func13(CELLIDX idx, int ii, int* io, int* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func13: ii=%d iio=%d\n", ii, *iio );
	*io = 99;
	*iio = 101;

	return 102;
}

/* #[<ENTRY_FUNC>]# eEnt_func14
 * name:         eEnt_func14
 * global_name:  tSig_eEnt_func14
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
char
eEnt_func14(CELLIDX idx, char ii, char* io, char* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func14: ii=%d iio=%d\n", ii, *iio );
	*io = 88;
	*iio = 77;

	return 14;
}

/* #[<ENTRY_FUNC>]# eEnt_func15
 * name:         eEnt_func15
 * global_name:  tSig_eEnt_func15
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
short
eEnt_func15(CELLIDX idx, short ii, short* io, short* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func15: ii=%d iio=%d\n", ii, *iio );
	*io = 950;
	*iio = 951;

	return 11015;
}

/* #[<ENTRY_FUNC>]# eEnt_func16
 * name:         eEnt_func16
 * global_name:  tSig_eEnt_func16
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
long
eEnt_func16(CELLIDX idx, long ii, long* io, long* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func16: ii=%d iio=%d\n", ii, *iio );
	*io = 99950;
	*iio = 99951;

	return 11016;
}

/* #[<ENTRY_FUNC>]# eEnt_func23
 * name:         eEnt_func23
 * global_name:  tSig_eEnt_func23
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
unsigned int
eEnt_func23(CELLIDX idx, unsigned int ii, unsigned int* io, unsigned int* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func23: ii=%u iio=%u\n", ii, *iio );
	*io = 99950;
	*iio = 99951;

	return 99023;
}

/* #[<ENTRY_FUNC>]# eEnt_func24
 * name:         eEnt_func24
 * global_name:  tSig_eEnt_func24
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
unsigned char
eEnt_func24(CELLIDX idx, unsigned char ii, unsigned char* io, unsigned char* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func24: ii=%u iio=%u\n", ii, *iio );
	*io = 99;
	*iio = 98;

	return 24;
}

/* #[<ENTRY_FUNC>]# eEnt_func25
 * name:         eEnt_func25
 * global_name:  tSig_eEnt_func25
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
unsigned short
eEnt_func25(CELLIDX idx, unsigned short ii, unsigned short* io, unsigned short* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func25: ii=%u iio=%u\n", ii, *iio );
	*io = 9999;
	*iio = 9998;

	return 9025;
}

/* #[<ENTRY_FUNC>]# eEnt_func26
 * name:         eEnt_func26
 * global_name:  tSig_eEnt_func26
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
unsigned long
eEnt_func26(CELLIDX idx, unsigned long ii, unsigned long* io, unsigned long* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func26: ii=%lu iio=%lu\n", ii, *iio );
	*io = 999999;
	*iio = 999998;

	return 999026;
}

/* #[<ENTRY_FUNC>]# eEnt_func31
 * name:         eEnt_func31
 * global_name:  tSig_eEnt_func31
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
char_t
eEnt_func31(CELLIDX idx, char_t ii, char_t* io, char_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEnt_func32
 * name:         eEnt_func32
 * global_name:  tSig_eEnt_func32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
schar_t
eEnt_func32(CELLIDX idx, schar_t ii, schar_t* io, schar_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEnt_func33
 * name:         eEnt_func33
 * global_name:  tSig_eEnt_func33
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int8_t
eEnt_func33(CELLIDX idx, int8_t ii, int8_t* io, int8_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func33: ii=%d iio=%d\n", ii, *iio );
	*io = 99;
	*iio = 98;

	return 33;
}

/* #[<ENTRY_FUNC>]# eEnt_func34
 * name:         eEnt_func34
 * global_name:  tSig_eEnt_func34
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int16_t
eEnt_func34(CELLIDX idx, int16_t ii, int16_t* io, int16_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func34: ii=%d iio=%d\n", ii, *iio );
	*io = 9999;
	*iio = 9998;

	return 9034;
}

/* #[<ENTRY_FUNC>]# eEnt_func35
 * name:         eEnt_func35
 * global_name:  tSig_eEnt_func35
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEnt_func35(CELLIDX idx, int32_t ii, int32_t* io, int32_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func35: ii=%d iio=%d\n", ii, *iio );
	*io = 999999;
	*iio = 999998;

	return 999035;
}

/* #[<ENTRY_FUNC>]# eEnt_func36
 * name:         eEnt_func36
 * global_name:  tSig_eEnt_func36
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int64_t
eEnt_func36(CELLIDX idx, int64_t ii, int64_t* io, int64_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func36: ii=%lld iio=%lld\n", ii, *iio );
	*io = 99999999;
	*iio = 99999998;

	return 99999036;
}

/* #[<ENTRY_FUNC>]# eEnt_func42
 * name:         eEnt_func42
 * global_name:  tSig_eEnt_func42
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uchar_t
eEnt_func42(CELLIDX idx, uchar_t ii, uchar_t* io, uchar_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEnt_func43
 * name:         eEnt_func43
 * global_name:  tSig_eEnt_func43
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint8_t
eEnt_func43(CELLIDX idx, uint8_t ii, uint8_t* io, uint8_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func43: ii=%u iio=%u\n", ii, *iio );
	*io = 99;
	*iio = 98;

	return 43;
}

/* #[<ENTRY_FUNC>]# eEnt_func44
 * name:         eEnt_func44
 * global_name:  tSig_eEnt_func44
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint16_t
eEnt_func44(CELLIDX idx, uint16_t ii, uint16_t* io, uint16_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func44: ii=%u iio=%u\n", ii, *iio );
	*io = 9999;
	*iio = 9998;

	return 9044;
}

/* #[<ENTRY_FUNC>]# eEnt_func45
 * name:         eEnt_func45
 * global_name:  tSig_eEnt_func45
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint32_t
eEnt_func45(CELLIDX idx, uint32_t ii, uint32_t* io, uint32_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func45: ii=%u iio=%u\n", ii, *iio );
	*io = 999999;
	*iio = 999998;

	return 999045;
}

/* #[<ENTRY_FUNC>]# eEnt_func46
 * name:         eEnt_func46
 * global_name:  tSig_eEnt_func46
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
uint64_t
eEnt_func46(CELLIDX idx, uint64_t ii, uint64_t* io, uint64_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func46: ii=%u iio=%u\n", ii, *iio );
	*io = 999999;
	*iio = 999998;

	return 99999046;
}

/* #[<ENTRY_FUNC>]# eEnt_func53
 * name:         eEnt_func53
 * global_name:  tSig_eEnt_func53
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
float32_t
eEnt_func53(CELLIDX idx, float32_t ii, float32_t* io, float32_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func53: ii=%5.3f iio=%5.3f\n", ii, *iio );
	*io = 3.14159;
	*iio = 2.71828;

	return 9900.53;
}

/* #[<ENTRY_FUNC>]# eEnt_func54
 * name:         eEnt_func54
 * global_name:  tSig_eEnt_func54
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
double64_t
eEnt_func54(CELLIDX idx, double64_t ii, double64_t* io, double64_t* iio)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func54: ii=%5.3f iio=%5.3f\n", ii, *iio );
	*io = 3.14159265358979;
	*iio = 2.71828182845904;

	return 9900.54;
}

/* #[<ENTRY_FUNC>]# eEnt_func101
 * name:         eEnt_func101
 * global_name:  tSig_eEnt_func101
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func101(CELLIDX idx, struct tag  a)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func101: a.a=%d, a.b=%d\n", a.a, a.b );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func102
 * name:         eEnt_func102
 * global_name:  tSig_eEnt_func102
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func102(CELLIDX idx, const TAG *a)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func102: a->a=%d, a->b=%d\n", a->a, a->b );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func201
 * name:         eEnt_func201
 * global_name:  tSig_eEnt_func201
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func201(CELLIDX idx, intptr_t a)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func201: a=%08x\n", a );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func202
 * name:         eEnt_func202
 * global_name:  tSig_eEnt_func202
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func202(CELLIDX idx, uintptr_t a)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "func202: a=%08x\n", a );

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
