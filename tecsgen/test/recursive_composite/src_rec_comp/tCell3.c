#include "tCell3_tecsgen.h"

/* 呼び口関数 */
/*
 * call port : cCall3  signature: sSig4
 *   int32_t cCall3_func1( THIS, int32_t a );
 *   int32_t cCall3_func2( THIS, int32_t a );
 */

/* 受け口関数 */
/*
 * entry port: eEntry3
 * signature:  sSig3
 */
/*
 * name:         eEntry3_func1
 * global_name:  tCell3_eEntry3_func1
 */
int32_t eEntry3_func1( tCell3_IDX idx, int32_t a)
{
  CELLCB      *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tCell3_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  printf( "tCell3: eEntry3_func1( a=%d )\n", a );
  printf( "tCell3: eEntry3_func1: calling cCall3_func1( this, a=103 )\n" );
  cCall3_func1( 103 );
}

/*
 * name:         eEntry3_func2
 * global_name:  tCell3_eEntry3_func2
 */
int32_t eEntry3_func2( tCell3_IDX idx, int32_t a)
{
  CELLCB      *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tCell3_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  printf( "tCell3: eEntry3_func2( a=%d )\n", a );
  printf( "tCell3: eEntry3_func2: calling cCall3_func2( this, a=203 )\n" );
  cCall3_func2( 203 );
}

