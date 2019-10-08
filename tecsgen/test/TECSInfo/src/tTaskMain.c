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
 * call port: cTECSInfo signature: nTECSInfo_sTECSInfo context:task
 *   ER             cTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc );
 *   ER             cTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc );
 *   ER             cTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc );
 *   ER             cTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc );
 *   ER             cTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc );
 *   ER             cTECSInfo_findRawEntryDescriptor( const char_t* namespace_path, int_t ith, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc );
 *   ER             cTECSInfo_findRawEntryDescriptor_unsafe( const char_t* namespace_path, void** rawDesc );
 * call port: cNSInfo signature: nTECSInfo_sNamespaceInfo context:task optional:true
 *   bool_t     is_cNSInfo_joined()                     check if joined
 *   ER             cNSInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cNSInfo_getNameLength( );
 *   uint32_t       cNSInfo_getNNamespace( );
 *   ER             cNSInfo_getNamespaceInfo( uint32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des );
 *   uint32_t       cNSInfo_getNSignature( );
 *   ER             cNSInfo_getSignatureInfo( uint32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des );
 *   uint32_t       cNSInfo_getNCelltype( );
 *   ER             cNSInfo_getCelltypeInfo( uint32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des );
 *   [dynamic, optional]
 *      void           cNSInfo_set_descriptor( Descriptor( nTECSInfo_sNamespaceInfo ) desc );
 *      void           cNSInfo_unjoin(  );
 * call port: cRegionInfo signature: nTECSInfo_sRegionInfo context:task optional:true
 *   bool_t     is_cRegionInfo_joined()                     check if joined
 *   ER             cRegionInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cRegionInfo_getNameLength( );
 *   uint32_t       cRegionInfo_getNCell( );
 *   ER             cRegionInfo_getCellInfo( uint32_t ith, Descriptor( nTECSInfo_sCellInfo )* des );
 *   uint32_t       cRegionInfo_getNRegion( );
 *   ER             cRegionInfo_getRegionInfo( uint32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des );
 *   [dynamic, optional]
 *      void           cRegionInfo_set_descriptor( Descriptor( nTECSInfo_sRegionInfo ) desc );
 *      void           cRegionInfo_unjoin(  );
 * call port: cCellInfo signature: nTECSInfo_sCellInfo context:task optional:true
 *   bool_t     is_cCellInfo_joined()                     check if joined
 *   ER             cCellInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cCellInfo_getNameLength( );
 *   uint32_t       cCellInfo_getNRawEntryDescriptorInfo( );
 *   ER             cCellInfo_getRawEntryDescriptorInfo( int_t index, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* desc );
 *   void           cCellInfo_getCelltypeInfo( Descriptor( nTECSInfo_sCelltypeInfo )* desc );
 *   void           cCellInfo_getCBP( void** cbp );
 *   void           cCellInfo_getINIBP( void** inibp );
 *   [dynamic, optional]
 *      void           cCellInfo_set_descriptor( Descriptor( nTECSInfo_sCellInfo ) desc );
 *      void           cCellInfo_unjoin(  );
 * call port: cSignatureInfo signature: nTECSInfo_sSignatureInfo context:task optional:true
 *   bool_t     is_cSignatureInfo_joined()                     check if joined
 *   ER             cSignatureInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cSignatureInfo_getNameLength( );
 *   uint32_t       cSignatureInfo_getNFunction( );
 *   ER             cSignatureInfo_getFunctionInfo( uint32_t ith, Descriptor( nTECSInfo_sFunctionInfo )* desc );
 *   [dynamic, optional]
 *      void           cSignatureInfo_set_descriptor( Descriptor( nTECSInfo_sSignatureInfo ) desc );
 *      void           cSignatureInfo_unjoin(  );
 * call port: cCelltypeInfo signature: nTECSInfo_sCelltypeInfo context:task optional:true
 *   bool_t     is_cCelltypeInfo_joined()                     check if joined
 *   ER             cCelltypeInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cCelltypeInfo_getNameLength( );
 *   uint32_t       cCelltypeInfo_getNAttr( );
 *   ER             cCelltypeInfo_getAttrInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNVar( );
 *   ER             cCelltypeInfo_getVarInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNCall( );
 *   ER             cCelltypeInfo_getCallInfo( uint32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc );
 *   uint32_t       cCelltypeInfo_getNEntry( );
 *   ER             cCelltypeInfo_getEntryInfo( uint32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc );
 *   bool_t         cCelltypeInfo_isSingleton( );
 *   bool_t         cCelltypeInfo_isIDX_is_ID( );
 *   uint32_t       cCelltypeInfo_sizeOfCB( );
 *   uint32_t       cCelltypeInfo_sizeOfINIB( );
 *   [dynamic, optional]
 *      void           cCelltypeInfo_set_descriptor( Descriptor( nTECSInfo_sCelltypeInfo ) desc );
 *      void           cCelltypeInfo_unjoin(  );
 * call port: cVarDeclInfo signature: nTECSInfo_sVarDeclInfo context:task optional:true
 *   bool_t     is_cVarDeclInfo_joined()                     check if joined
 *   ER             cVarDeclInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cVarDeclInfo_getNameLength( );
 *   void           cVarDeclInfo_getLocationInfo( uint32_t* offset, int8_t* place );
 *   void           cVarDeclInfo_getTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   void           cVarDeclInfo_getSizeIsExpr( char_t* expr_str, int32_t max_len );
 *   ER             cVarDeclInfo_getSizeIs( uint32_t* size, const void* p_cb );
 *   [dynamic, optional]
 *      void           cVarDeclInfo_set_descriptor( Descriptor( nTECSInfo_sVarDeclInfo ) desc );
 *      void           cVarDeclInfo_unjoin(  );
 * call port: cTypeInfo signature: nTECSInfo_sTypeInfo context:task optional:true
 *   bool_t     is_cTypeInfo_joined()                     check if joined
 *   ER             cTypeInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cTypeInfo_getNameLength( );
 *   uint32_t       cTypeInfo_getSize( );
 *   int8_t         cTypeInfo_getKind( );
 *   uint32_t       cTypeInfo_getNType( );
 *   ER             cTypeInfo_getTypeInfo( Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   uint32_t       cTypeInfo_getNMember( );
 *   ER             cTypeInfo_getMemberInfo( uint32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
 *   [dynamic, optional]
 *      void           cTypeInfo_set_descriptor( Descriptor( nTECSInfo_sTypeInfo ) desc );
 *      void           cTypeInfo_unjoin(  );
 * call port: cPutString signature: sPutString context:task optional:true
 *   bool_t     is_cPutString_joined()                     check if joined
 *   void           cPutString_putString( const char_t* string );
 *   [dynamic, optional]
 *      void           cPutString_set_descriptor( Descriptor( sPutString ) desc );
 *      void           cPutString_unjoin(  );
 * call port: cTaskBody signature: sTaskBody context:task optional:true
 *   bool_t     is_cTaskBody_joined()                     check if joined
 *   void           cTaskBody_main( );
 *   [dynamic, optional]
 *      void           cTaskBody_set_descriptor( Descriptor( sTaskBody ) desc );
 *      void           cTaskBody_unjoin(  );
 * call port: cREDInfo signature: nTECSInfo_sRawEntryDescriptorInfo context:task optional:true
 *   bool_t     is_cREDInfo_joined()                     check if joined
 *   uint16_t       cREDInfo_getNRawEntryDescriptorInfo( );
 *   ER             cREDInfo_getRawDescriptor( int_t ith, void** rawDesc );
 *   [dynamic, optional]
 *      void           cREDInfo_set_descriptor( Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) desc );
 *      void           cREDInfo_unjoin(  );
 * call port: cEntryInfo signature: nTECSInfo_sEntryInfo context:task optional:true
 *   bool_t     is_cEntryInfo_joined()                     check if joined
 *   ER             cEntryInfo_getName( char_t* name, int_t max_len );
 *   uint16_t       cEntryInfo_getNameLength( );
 *   void           cEntryInfo_getSignatureInfo( Descriptor( nTECSInfo_sSignatureInfo )* desc );
 *   uint32_t       cEntryInfo_getArraySize( );
 *   bool_t         cEntryInfo_isInline( );
 *   [dynamic, optional]
 *      void           cEntryInfo_set_descriptor( Descriptor( nTECSInfo_sEntryInfo ) desc );
 *      void           cEntryInfo_unjoin(  );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTaskMain_tecsgen.h"
#include <stdio.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

static void
traverse_namespace( CELLCB	*p_cellcb, Descriptor( nTECSInfo_sNamespaceInfo ) NSdesc, int level );
static void
traverse_region( CELLCB	*p_cellcb, Descriptor( nTECSInfo_sRegionInfo ) RGNdesc, int level );

static void
print_indent( int level );
static void
print_cell_by_path( CELLCB *p_cellcb, char_t *path );
static void
print_cell( CELLCB *p_cellcb, Descriptor( nTECSInfo_sCellInfo )  CELLdesc, int level );
static void
print_signature_by_path( CELLCB *p_cellcb, char_t *path );
static void
print_signature( CELLCB *p_cellcb, Descriptor( nTECSInfo_sSignatureInfo )  signatureDesc, int level );
static void
print_celltype( CELLCB	*p_cellcb, Descriptor( nTECSInfo_sCelltypeInfo )  CTdesc, int level );
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
    Descriptor( nTECSInfo_sNamespaceInfo ) NSdesc;
    Descriptor( nTECSInfo_sRegionInfo )    RGNdesc;

    if (VALID_IDX(idx)) {
        p_cellcb = GET_CELLCB(idx);
    }
    else {
        /* エラー処理コードをここに記述します */
    } /* end if VALID_IDX(idx) */

    /* ここに処理本体を記述します #_TEFB_# */
    printf( "started\n" );

    printf( "--- namespace traverse test ---\n" );
    if( cTECSInfo_findNamespace( "::", &NSdesc ) != E_OK ){
        printf( "Cannot find :: (root) namespace\n" );
        exit(1);
    }
    traverse_namespace( p_cellcb, NSdesc, 0 );

    printf( "--- region traverse test ---\n" );
    if( cTECSInfo_findRegion( "::", &RGNdesc ) != E_OK ){
        printf( "Cannot find :: (root) region\n" );
        exit(1);
    }
    traverse_region( p_cellcb, RGNdesc, 0 );
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
    Descriptor( nTECSInfo_sSignatureInfo )  desc;
    ER    ercd;

    printf( "print_signature_by_path( path=\"%s\" )\n", path );
    ercd = cTECSInfo_findSignature( path, &desc );
    if( ercd == E_OK ){
        print_signature( p_cellcb, desc, 1 );
    }
    else{
        printf( "signature %s not found\n", path );
    }
}

static void
print_cell_by_path( CELLCB *p_cellcb, char_t *path )
{
    Descriptor( nTECSInfo_sCellInfo )  desc;
    ER    ercd;

    printf( "print_cell_by_path( path=\"%s\" )\n", path );
    ercd = cTECSInfo_findCell( path, &desc );
    if( ercd == E_OK ){
        print_cell( p_cellcb, desc, 1 );
    }
    else{
        printf( "cell %s not found\n", path );
    }
}

static void
traverse_namespace( CELLCB	*p_cellcb, Descriptor( nTECSInfo_sNamespaceInfo ) NSdesc, int level )
{
    Descriptor( nTECSInfo_sNamespaceInfo ) NSdescChild;
    Descriptor( nTECSInfo_sCelltypeInfo )  CTdescChild;
    char  buf[ ATTR_NAME_LEN ];
    int   i, n;

    cNSInfo_set_descriptor( NSdesc );
    cNSInfo_getName( buf, sizeof( buf ) );
    print_indent( level );
    printf( "namespce '%s'\n", buf );

    n = cNSInfo_getNCelltype( );
    for( i = 0; i < n; i++ ){
        cNSInfo_getCelltypeInfo( i, &CTdescChild );
        print_celltype( p_cellcb, CTdescChild, level + 1 );
    }

    n = cNSInfo_getNNamespace( );
    for( i = 0; i < n; i++ ){
        cNSInfo_getNamespaceInfo( i, &NSdescChild );
        traverse_namespace( p_cellcb, NSdescChild, level + 1 );
        cNSInfo_set_descriptor( NSdesc );    // reset dynamic call port each time
    }
}

static void
traverse_region( CELLCB	*p_cellcb, Descriptor( nTECSInfo_sRegionInfo ) RGNdesc, int level )
{
    Descriptor( nTECSInfo_sRegionInfo ) RGNdescChild;
    Descriptor( nTECSInfo_sCellInfo )  CELLdesc;
    char  buf[ ATTR_NAME_LEN ];
    int   i, n;

    cRegionInfo_set_descriptor( RGNdesc );
    cRegionInfo_getName( buf, sizeof( buf ) );
    print_indent( level );
    printf( "region '%s'\n", buf );

    n = cRegionInfo_getNCell();
    print_indent( level + 1 );
    printf( "# of cell = %d\n", n );
    for( i = 0; i < n; i++ ){
        cRegionInfo_getCellInfo( i, &CELLdesc );
        print_cell( p_cellcb, CELLdesc, level + 1 );
    }

    n = cRegionInfo_getNRegion( );
    for( i = 0; i < n; i++ ){
        cRegionInfo_getRegionInfo( i, &RGNdescChild );
        traverse_region( p_cellcb, RGNdescChild, level + 1 );
        cRegionInfo_set_descriptor( RGNdesc );    // reset dynamic call port each time
    }
}

static void
print_type_val( CELLCB	*p_cellcb, int level, void *ptr, Descriptor( nTECSInfo_sTypeInfo ) Tdesc )
{
    int8_t    kind;
    uint32_t  size;
    Descriptor( nTECSInfo_sTypeInfo ) Tdesc_sub;

    cTypeInfo_set_descriptor( Tdesc );
    kind = cTypeInfo_getKind();
    size = cTypeInfo_getSize();

    switch( kind ){
    case TECSTypeKind_BoolType:
        printf( "%s", *(bool_t*)ptr ? "true" : "false" );
        break;
    case TECSTypeKind_IntType:
        switch( size ){
        case 1:
            printf( "%d", *(int8_t *)(ptr) );
            break;
        case 2:
            printf( "%d", *(int16_t *)(ptr) );
            break;
        case 4:
            printf( "%d", *(int32_t *)(ptr) );
            break;
        case 8:
            printf( "%ld", *(int64_t *)(ptr) );
            break;
        default:
            printf( "! unknown int type size(%d)", size );
        }
        break;
    case TECSTypeKind_FloatType:
        switch( size ){
        case 4:
            printf( "%g", (double)*(float32_t *)(ptr) );
            break;
        case 8:
            printf( "%g", (double)*(double64_t *)(ptr) );
            break;
        default:
            printf( "! unknown float type size(%d)", size );
        }
        break;
    case TECSTypeKind_PtrType:
    {
        cTypeInfo_getTypeInfo( &Tdesc_sub );
        cTypeInfo_getName( VAR_name, ATTR_NAME_LEN );
        /* char*, char_t* の場合、文字列と決め打ち */
        if( strcmp( VAR_name, "char*" ) == 0 || strcmp( VAR_name, "char_t*" ) == 0 ){
            // printf( "%08X, %08X, %08X  ", **(char_t **)(ptr), *(char_t **)(ptr), (char_t *)(ptr) );
            // printf( "VAR_name=%08X, %08X  ", VAR_name, &VAR_name );
            printf( "%s", *(char_t **)(ptr) );
        }
        else
            print_type_val( p_cellcb, level, *(void **)ptr, Tdesc_sub );
    }
        break;
    case TECSTypeKind_ArrayType:
        break;
    case TECSTypeKind_DefinedType:
        cTypeInfo_getTypeInfo( &Tdesc_sub );
        print_type_val( p_cellcb, level, ptr, Tdesc_sub );
        cTypeInfo_set_descriptor( Tdesc );
        break;
    case TECSTypeKind_StructType:
    {
        int  i, n;
        Descriptor(nTECSInfo_sVarDeclInfo)  MemberDesc;
        printf( "{\n" );
        n = cTypeInfo_getNMember();
        for( i = 0; i < n; i++ ){
            cTypeInfo_getMemberInfo( i, &MemberDesc );
            print_var_val( p_cellcb, level + 1, ptr, 0, MemberDesc );
            cTypeInfo_set_descriptor( Tdesc );
        }
        print_indent( level );
        printf( "};" );
        cTypeInfo_set_descriptor( Tdesc );
    }
        break;
    case TECSTypeKind_EnumType:
        break;
    case TECSTypeKind_VoidType:
        break;
    case TECSTypeKind_DescriptorType:
        break;
    default:
        ;
    }
}

static void
print_var_val( CELLCB	*p_cellcb, int level, void *base_or_inibp, void *cbp, Descriptor( nTECSInfo_sVarDeclInfo ) Vdesc )
{
    uint32_t  offset;
    int8_t    place;
    void      *pval;
    void      *base;
    Descriptor( nTECSInfo_sTypeInfo ) Tdesc;

    cVarDeclInfo_set_descriptor( Vdesc );
    cVarDeclInfo_getName( VAR_name, ATTR_NAME_LEN );
    cVarDeclInfo_getLocationInfo( &offset, &place );
    switch( place ){
    case VARDECL_PLACE_STRUCT:
    case VARDECL_PLACE_INIB:
        base = base_or_inibp;
        break;
    case VARDECL_PLACE_CB:
        base = cbp;
        break;
    case VARDECL_PLACE_NON:
    default:
        base = 0;
    };

    cVarDeclInfo_getTypeInfo( &Tdesc );
    cTypeInfo_set_descriptor( Tdesc );
    cTypeInfo_getName( VAR_name2, ATTR_NAME_LEN );

    print_indent( level );
    printf( "%s %s = ", VAR_name2, VAR_name );
    if( base ){
        pval = base + offset;
        print_type_val( p_cellcb, level, pval, Tdesc );
        putchar( '\n' );
    }
    else {
        printf( "(OMIT)\n" );
    }
    
}

static void
print_cell_attr( CELLCB	*p_cellcb, int level, void *inibp, void *cbp )
{
    Descriptor( nTECSInfo_sVarDeclInfo ) Vdesc;
    int  i, n;

    n = cCelltypeInfo_getNAttr();
    for( i = 0; i < n; i++ ){
        cCelltypeInfo_getAttrInfo( i, &Vdesc );
        print_var_val( p_cellcb, level, inibp, cbp, Vdesc );
    }
}

static void
print_cell_var( CELLCB	*p_cellcb, int level, void *inibp, void *cbp )
{
    Descriptor( nTECSInfo_sVarDeclInfo ) Vdesc;
    int  i, n;

    n = cCelltypeInfo_getNVar();
    for( i = 0; i < n; i++ ){
        cCelltypeInfo_getVarInfo( i, &Vdesc );
        print_var_val( p_cellcb, level, inibp, cbp, Vdesc );
    }
}

static void
print_cell( CELLCB	*p_cellcb, Descriptor( nTECSInfo_sCellInfo )  CELLdesc, int level )
{
    Descriptor( nTECSInfo_sCelltypeInfo ) CTdesc;
    void  *cbp, *inibp;

    cCellInfo_set_descriptor( CELLdesc );
    cCellInfo_getName( VAR_name, ATTR_NAME_LEN );

    cCellInfo_getCelltypeInfo( &CTdesc );
    cCelltypeInfo_set_descriptor( CTdesc );
    cCelltypeInfo_getName( VAR_name2, ATTR_NAME_LEN );

    print_indent( level );
    printf( "cell = %s celltype = %s\n", VAR_name, VAR_name2 );

    cCellInfo_getCBP( &cbp );
    cCellInfo_getINIBP( &inibp );
    print_indent( level + 1 );
    printf( "cbp = 0x%08x, inibp = 0x%08x\n", cbp, inibp );
    print_cell_attr( p_cellcb, level + 1, inibp, cbp );
    print_cell_var( p_cellcb, level + 1, inibp, cbp );

    /* celltype info */
    //print_celltype( p_cellcb, CTdesc, level + 1 );
}

static void
print_signature( CELLCB *p_cellcb, Descriptor( nTECSInfo_sSignatureInfo )  signatureDesc, int level )
{
    cSignatureInfo_set_descriptor( signatureDesc );
    cSignatureInfo_getName( VAR_name, ATTR_NAME_LEN );
    print_indent( level );
    printf( "signature name = %s\n", VAR_name );
}

static void
print_celltype( CELLCB	*p_cellcb, Descriptor( nTECSInfo_sCelltypeInfo )  CTdesc, int level )
{

    cCelltypeInfo_set_descriptor( CTdesc );
    cCelltypeInfo_getName( VAR_name, ATTR_NAME_LEN );
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
    Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) rawEntryDescDesc;
    Descriptor( nTECSInfo_sEntryInfo )              entryDesc;
    ER     ercd;
    void   *rawDesc;

    ercd = cTECSInfo_findRawEntryDescriptor( entry_path, &rawEntryDescDesc, &entryDesc );
    if( ercd != E_OK ){
        printf( "call_sTask: error cTECSInfo_findRawEntryDescriptor( entry_path=%s ) = %d\n", entry_path, ercd );
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
    return ercd;
}

static void
call_sTask( CELLCB *p_cellcb, char_t *entry_path )
{
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
}


static void
call_sPutString( CELLCB *p_cellcb, char_t *entry_path, char_t *message )
{
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
}
