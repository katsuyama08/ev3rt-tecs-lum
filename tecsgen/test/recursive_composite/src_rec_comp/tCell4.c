#include "tCell4_tecsgen.h"

/* 呼び口関数 */
/*
 * call port : cCall4  signature: sSig5
 *   int32_t cCall4_func1( THIS, int32_t a );
 *   int32_t cCall4_func2( THIS, int32_t a );
 */

/* 受け口関数 */
/*
 * entry port: eEntry4
 * signature:  sSig4
 */
/*
 * name:         eEntry4_func1
 * global_name:  tCell4_eEntry4_func1
 */
int32_t eEntry4_func1( tCell4_IDX idx, int32_t a)
{
  CELLCB      *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tCell4_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  printf( "tCell4: eEntry4_func1( a=%d )\n", a );
  printf( "tCell4: eEntry4_func1: calling cCall4_func1( this, a=104 )\n" );
  cCall4_func1( 104 );
}

/*
 * name:         eEntry4_func2
 * global_name:  tCell4_eEntry4_func2
 */
int32_t eEntry4_func2( tCell4_IDX idx, int32_t a)
{
  CELLCB      *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tCell4_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  printf( "tCell4: eEntry4_func2( a=%d )\n", a );
  printf( "tCell4: eEntry4_func2: calling cCall4_func2( this, a=204 )\n" );
  cCall4_func2( 204 );
}

