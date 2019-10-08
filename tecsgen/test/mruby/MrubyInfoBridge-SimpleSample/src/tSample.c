/* #[<PREAMBLE>]#
 *
 * #[</PREAMBLE>]# */

#include <stdio.h>
#include <string.h>
#include "tSample_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* 正常終了 */
#define	E_ID	(-18)	/* 不正ID番号 */
#endif


/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sSample
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_sayHello
 * name:         eEnt_sayHello
 * global_name:  tSample_eEnt_sayHello
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_sayHello(CELLIDX idx, int32_t times)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します */
	printf( "Sample: " );
	while( times-- > 0 )
		printf( "hello " );
	printf( "\n" );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_howAreYou
 * name:         eEnt_howAreYou
 * global_name:  tSample_eEnt_howAreYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_howAreYou(CELLIDX idx, char_t* buf, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します */
	strncpy( buf, "Sample: I'm fine!", len );

	return(ercd);
}


/* #[<ENTRY_PORT>]# eEntArray
 * entry port: eEntArray
 * signature:  sSample
 * context:    task
 * entry port array size:  NEP_eEntArray
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEntArray_sayHello
 * name:         eEntArray_sayHello
 * global_name:  tSample_eEntArray_sayHello
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEntArray_sayHello(CELLIDX idx, int_t subscript, int32_t times)
{
    ER		ercd = E_OK;
    CELLCB	*p_cellcb;
    if (VALID_IDX(idx)) {
        p_cellcb = GET_CELLCB(idx);
    }
    else {
        return(E_ID);
    } /* end if VALID_IDX(idx) */

    /* */
    printf( "Sample: eEntArray[%d]: ", subscript );
    while( times-- > 0 )
        printf( "hello " );
    printf( "\n" );

    return(ercd);
}

/* #[<ENTRY_FUNC>]# eEntArray_howAreYou
 * name:         eEntArray_howAreYou
 * global_name:  tSample_eEntArray_howAreYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEntArray_howAreYou(CELLIDX idx, int_t subscript, char_t* buf, int32_t len)
{
    ER		ercd = E_OK;
    CELLCB	*p_cellcb;
    if (VALID_IDX(idx)) {
        p_cellcb = GET_CELLCB(idx);
    }
    else {
        return(E_ID);
    } /* end if VALID_IDX(idx) */

    /* */
    snprintf( buf, len, "Sample: eEntArray[%d]: I'm fine!", subscript );

    return(ercd);
}

/* #[<POSTAMBLE>]#
 *  
 * #[</POSTAMBLE>]#*/
