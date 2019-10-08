/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * NAME_LEN         int16_t          ATTR_NAME_LEN   
 * name             char_t*          VAR_name        
 * name2            char_t*          VAR_name2       
 *
 * 呼び口関数 #_TCPF_#
 * call port: cAccessor signature: nTECSInfo_sAccessor context:task
 *   ER             cAccessor_selectNamespaceInfoByName( const char_t* namespacePath );
 *   ER             cAccessor_selectCelltypeInfoByName( const char_t* namespacePath );
 *   ER             cAccessor_selectSignatureInfoByName( const char_t* namespacePath );
 *   ER             cAccessor_selectRegionInfoByName( const char_t* regionPath );
 *   ER             cAccessor_selectCellInfoByName( const char_t* cellPath );
 *   ER             cAccessor_getSelectedNamespaceInfo( char_t* name, int_t max_len, int_t* num_namespace, int_t* num_celltype, int_t* num_signature );
 *   ER             cAccessor_selectCelltypeInfo( int_t ith );
 *   ER             cAccessor_selectSignatureInfo( int_t ith );
 *   ER             cAccessor_getSelectedCelltypeInfo( char_t* name, int_t max_len, int_t* num_attr, int_t* num_var, int_t* num_call, int_t* num_entry );
 *   ER             cAccessor_selectCallInfo( int_t ith );
 *   ER             cAccessor_selectEntryInfo( int_t ith );
 *   ER             cAccessor_selectAttrInfo( int_t ith );
 *   ER             cAccessor_selectVarInfo( int_t ith );
 *   ER             cAccessor_getSelectedAttrInfo( char_t* name, int_t max_len );
 *   ER             cAccessor_getSizeIsExprOfAttr( char_t* expr_str, int32_t max_len );
 *   ER             cAccessor_selectTypeInfoOfAttr( );
 *   ER             cAccessor_getSelectedVarInfo( char_t* name, int_t max_len );
 *   ER             cAccessor_getSizeIsExprOfVar( char_t* expr_str, int32_t max_len );
 *   ER             cAccessor_selectTypeInfoOfVar( );
 *   ER             cAccessor_getSelectedCallInfo( char_t* name, int_t max_len, int_t* array_size );
 *   ER             cAccessor_selectSignatureOfCall( );
 *   ER             cAccessor_getSelectedCallSpecifierInfo( bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit );
 *   ER             cAccessor_getSelectedCallInternalInfo( bool_t* b_allocator_port, bool_t* b_require_port );
 *   ER             cAccessor_getSelectedCallLocationInfo( uint32_t* offset, int8_t* place );
 *   ER             cAccessor_getSelectedCallOptimizeInfo( bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique );
 *   ER             cAccessor_getSelectedEntryInfo( char_t* name, int_t max_len, int_t* array_size );
 *   ER             cAccessor_selectSignatureOfEntry( );
 *   ER             cAccessor_getSelectedEntryInlineInfo( bool_t* b_inline );
 *   ER             cAccessor_getSelectedSignatureInfo( char_t* name, int_t max_len, int_t* num_function );
 *   ER             cAccessor_selectFunctionInfoByIndex( int_t ith );
 *   ER             cAccessor_getSelectedFunctionInfo( char_t* name, int_t max_len, int_t* num_args );
 *   ER             cAccessor_selectTypeInfoOfReturn( );
 *   ER             cAccessor_getSelectedParamInfo( char_t* name, int_t max_len, int8_t* dir );
 *   ER             cAccessor_selectParamInfo( int_t ith );
 *   ER             cAccessor_selectTypeInfoOfParam( );
 *   ER             cAccessor_getSelectedTypeInfo( char_t* name, int_t max_len, int8_t* kind );
 *   ER             cAccessor_selectTypeInfoOfType( );
 *   ER             cAccessor_getSelectedRegionInfo( char_t* name, int_t max_len, int_t* num_cell );
 *   ER             cAccessor_selectCellInfo( int_t ith );
 *   ER             cAccessor_getSelectedCellInfo( char_t* name, int_t max_len );
 *   ER             cAccessor_selectCelltypeInfoOfCell( );
 *   ER             cAccessor_getAttrValueInStr( char_t* buf, int_t max_len );
 *   ER             cAccessor_getAttrSizeIsValue( );
 *   ER             cAccessor_getVarValueInStr( char_t* buf, int_t max_len );
 *   ER             cAccessor_getVarSizeIsValue( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTaskMain_tecsgen.h"
#ifndef TECSGEN
#include <stdio.h>
#endif

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

static void
traverse_namespace( CELLCB	*p_cellcb, char_t *path, int level );
static void
traverse_region( CELLCB	*p_cellcb, char_t *path, int level );

static void
print_indent( int level );
static void
print_cell_by_path( CELLCB *p_cellcb, char_t *path );
static void
print_cell( CELLCB *p_cellcb, int level );
static void
print_signature_by_path( CELLCB *p_cellcb, char_t *path );
static void
print_signature( CELLCB *p_cellcb, int level );
static void
print_celltype( CELLCB	*p_cellcb, int level );
static void
print_var_val( CELLCB	*p_cellcb, int level, void *base_or_inibp, void *cbp, Descriptor( nTECSInfo_sVarDeclInfo ) Vdesc );
static void
call_sTask( CELLCB *p_cellcb, char_t *entry_path );
static void
call_sPutString( CELLCB *p_cellcb, char_t *entry_path, char_t *message );

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tTaskMain_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main(CELLIDX idx)
{
    CELLCB	*p_cellcb;
    ER      ercd;
    uint32_t  n;

    if (VALID_IDX(idx)) {
        p_cellcb = GET_CELLCB(idx);
    }
    else {
        /* エラー処理コードをここに記述します */
    } /* end if VALID_IDX(idx) */

    /* ここに処理本体を記述します #_TEFB_# */
    printf( "started\n" );

    printf( "--- namespace traverse test ---\n" );
    if( cAccessor_selectNamespaceInfoByName( "::" ) != E_OK ){
        printf( "Cannot find :: (root) namespace\n" );
        exit(1);
    }
    traverse_namespace( p_cellcb, "::", 0 );

    printf( "--- region traverse test ---\n" );
    if( cAccessor_selectRegionInfoByName( "::" ) != E_OK ){
        printf( "Cannot find :: (root) region\n" );
        exit(1);
    }
    traverse_region( p_cellcb, "::", 0 );
    printf( "---------\n" );

    printf( "--- cell by path test ---\n" );
    print_cell_by_path( p_cellcb, "Task" );
    print_cell_by_path( p_cellcb, "::Task" );
    print_cell_by_path( p_cellcb, "::rTEMP::TaskMain" );
    print_cell_by_path( p_cellcb, "::rTEMP::TECSInfo" );

    printf( "--- signatuer by path test ---\n" );
    print_signature_by_path( p_cellcb, "::sTask" );

    printf( "--- rawEntryDescriptor test ---\n" );
    call_sTask( p_cellcb, "HelloWorld.eMain" );
    call_sPutString( p_cellcb, "PutStringStdio.ePutString", "Hello World!\n" );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/

static void
print_signature_by_path( CELLCB *p_cellcb, char_t *path )
{
    ER    ercd;

    printf( "print_signature_by_path( path=\"%s\" )\n", path );
    ercd = cAccessor_selectSignatureInfoByName( path );
    if( ercd == E_OK ){
        print_signature( p_cellcb, 1 );
    }
    else{
        printf( "signature %s not found\n", path );
    }
}

static void
print_cell_by_path( CELLCB *p_cellcb, char_t *cellPath )
{
    ER    ercd;

    printf( "print_cell_by_path( path=\"%s\" )\n", cellPath );
    ercd = cAccessor_selectCellInfoByName( cellPath );
    if( ercd == E_OK ){
        print_cell( p_cellcb, 1 );
    }
    else{
        printf( "cell %s not found\n", cellPath );
    }
}

static void
traverse_namespace( CELLCB	*p_cellcb, char_t *path, int level )
{
    char  buf[ ATTR_NAME_LEN ];
    char  new_path[ ATTR_NAME_LEN ];
    int   i, n;
    int_t num_namespace, num_celltype, num_signature;

    cAccessor_getSelectedNamespaceInfo( buf, ATTR_NAME_LEN, &num_namespace, &num_celltype, &num_signature );
    print_indent( level );
    printf( "namespce '%s' num_namespace=%d num_celltype=%d num_signature=%d\n",
            buf, num_namespace, num_celltype, num_signature );

    for( i = 0; i < num_celltype; i++ ){
        cAccessor_selectCelltypeInfo( i );
        print_celltype( p_cellcb, level + 1 );
    }

    for( i = 0; i < num_namespace; i++ ){
        cAccessor_selectNamespaceInfo( i );
        strncpy( new_path, path, ATTR_NAME_LEN );
        if( strcmp( new_path, "::" ) != 0 )
            strncat( new_path, "::", ATTR_NAME_LEN );
        strncat( new_path, buf, ATTR_NAME_LEN );
        traverse_namespace( p_cellcb, new_path, level + 1 );
        cAccessor_selectNamespaceInfoByName( path );
    }
}

static void
traverse_region( CELLCB	*p_cellcb, char_t *path, int level )
{
    char  buf[ ATTR_NAME_LEN ];
    char  new_path[ ATTR_NAME_LEN ];
    int   i, num_cell, num_region;

    cAccessor_getSelectedRegionInfo( buf, sizeof( buf ), &num_cell, &num_region );
    print_indent( level );
    printf( "region '%s'\n", buf );

    print_indent( level + 1 );
    printf( "# of cell = %d\n", num_cell );
    for( i = 0; i < num_cell; i++ ){
        cAccessor_selectCellInfo( i );
        print_cell( p_cellcb, level + 1 );
    }

    for( i = 0; i < num_region; i++ ){
        cAccessor_selectRegionInfo( i );
        strncpy( new_path, path, ATTR_NAME_LEN );
        if( strcmp( new_path, "::" ) != 0 )
            strncat( new_path, "::", ATTR_NAME_LEN );
        strncat( new_path, buf, ATTR_NAME_LEN );
        traverse_region( p_cellcb, new_path, level + 1 );
        cAccessor_selectRegionInfoByName( path );
    }
}

static void
print_cell_attr( CELLCB	*p_cellcb, int level )
{
#if 0
    int  i, n;

    n = co_getNAttr();
    for( i = 0; i < n; i++ ){
        cCelltypeInfo_getAttrInfo( i, &Vdesc );
        print_var_val( p_cellcb, level, inibp, cbp, Vdesc );
    }
#endif
}

static void
print_cell_var( CELLCB	*p_cellcb, int level, void *inibp, void *cbp )
{
#if 0
    Descriptor( nTECSInfo_sVarDeclInfo ) Vdesc;
    int  i, n;

    n = cCelltypeInfo_getNVar();
    for( i = 0; i < n; i++ ){
        cCelltypeInfo_getVarInfo( i, &Vdesc );
        print_var_val( p_cellcb, level, inibp, cbp, Vdesc );
    }
#endif
}

static void
print_cell( CELLCB	*p_cellcb, int level )
{
    int_t i, num_attr, num_var, num_call, num_entry;
    cAccessor_getSelectedCellInfo( VAR_name, ATTR_NAME_LEN );
    cAccessor_selectCelltypeInfoOfCell();
    cAccessor_getSelectedCelltypeInfo( VAR_name2, ATTR_NAME_LEN,
                                       &num_attr, &num_var,
                                       &num_call, &num_entry );

    print_indent( level );
    printf( "cell = %s celltype = %s\n", VAR_name, VAR_name2 );

    for( i = 0; i < num_attr; i++ ){
        cAccessor_selectAttrInfo( i );
        cAccessor_getSelectedAttrInfo( VAR_name, ATTR_NAME_LEN );
        // 事前に、セル、セルタイプ、属性を選択しておくこと．cTypeInfo が変更される
        cAccessor_getAttrValueInStr(VAR_name2, ATTR_NAME_LEN);
        print_indent( level + 1 );
        printf( "%s = %s\n", VAR_name, VAR_name2 );
    }
#if 0
    cCellInfo_getCBP( &cbp );
    cCellInfo_getINIBP( &inibp );
    print_indent( level + 1 );
    printf( "cbp = 0x%08x, inibp = 0x%08x\n", cbp, inibp );
    print_cell_attr( p_cellcb, level + 1);
    print_cell_var( p_cellcb, level + 1);

    /* celltype info */
    //print_celltype( p_cellcb, level + 1 );
#endif
}

static void
print_signature( CELLCB *p_cellcb, int level )
{
    int_t   num_function;

    cAccessor_getSelectedSignatureInfo( VAR_name, ATTR_NAME_LEN, &num_function );
    print_indent( level );
    printf( "signature name = %s\n", VAR_name );
}

static void
print_celltype( CELLCB	*p_cellcb, int level )
{
    int_t  num_attr, num_var, num_call, num_entry;

    cAccessor_getSelectedCelltypeInfo( VAR_name, ATTR_NAME_LEN,
                                       &num_attr, &num_var, &num_call, &num_entry );
    print_indent( level );
    printf( "celltype name = %s\n", VAR_name );
}

void
print_indent( int level )
{
    int i;
    for( i = 0; i < level; i++ ){
        fputs( "  ", stdout );
    }
}

ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, char_t *expected_signature )
{
    ER     ercd = E_OK;
#if 0
    Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) rawEntryDescDesc;
    Descriptor( nTECSInfo_sEntryInfo )              entryDesc;
    void   *rawDesc;

    ercd = cAccessor_findRawEntryDescriptor( entry_path, 0, &rawEntryDescDesc, &entryDesc );
    if( ercd != E_OK ){
        printf( "call_sTask: error cAccessor_findRawEntryDescriptor( entry_path=%s ) = %d\n", entry_path, ercd );
    }
    else {
#define NAME_LEN  (256)
        Descriptor( nTECSInfo_sSignatureInfo )  signatureDesc;
        char_t  name[ NAME_LEN ];

        cREDInfo_set_descriptor( rawEntryDescDesc );
        cEntryInfo_set_descriptor( entryDesc );
        cEntryInfo_getSignatureInfo( &signatureDesc );
        cSignatureInfo_set_descriptor( signatureDesc );
        ercd = cSignatureInfo_getName( name, NAME_LEN );
        if( ercd != E_OK ){
            printf( "getRawEntryDescriptor: error cannot get signature name. expectd: '%s'\n", expected_signature );
        }
        if( strcmp( name, expected_signature ) != 0 ){
            printf( "getRawEntryDescriptor: error signature name '%s' mismatch expecting '%s'\n", name, expected_signature );
            ercd = E_NOEXS;
        }
        cREDInfo_getRawDescriptor( 0, rawEntryDesc );
    }
#endif
    return ercd;
}

static void
call_sTask( CELLCB *p_cellcb, char_t *entry_path )
{
#if 0
    ER     ercd;
    void   *rawEntryDesc;
    Descriptor( sTaskBody )      taskBodyDesc;

    ercd = getRawEntryDescriptor( p_cellcb, entry_path, &rawEntryDesc, "sTaskBody" );
    if( ercd == E_OK ){
        setRawEntryDescriptor( taskBodyDesc, sTaskBody, rawEntryDesc );
        cTaskBody_set_descriptor( taskBodyDesc );
        cTaskBody_main();
    }
    else {
        printf( "call_sTask: errro: cTaskBody_main() not called\n" );
    }
#endif
}


static void
call_sPutString( CELLCB *p_cellcb, char_t *entry_path, char_t *message )
{
#if 0
    ER     ercd;
    void   *rawEntryDesc;
    Descriptor( sPutString )      putStringDesc;

    ercd = getRawEntryDescriptor( p_cellcb, entry_path, &rawEntryDesc, "sPutString" );
    if( ercd == E_OK ){
        setRawEntryDescriptor( putStringDesc, sPutString, rawEntryDesc );
        cPutString_set_descriptor( putStringDesc );
        cPutString_putString( message );
    }
    else {
        printf( "call_sPutString: errro: cPutString_putString() not called\n" );
    }
#endif
}
