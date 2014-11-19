// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

//$LABEL S
template <typename T>
struct SL_ {
  static const char *name() {
    return "S";
  }
};

//$LABEL T
template <typename T>
struct TL_ {
  static const char *name() {
    return "T";
  }
};

//$LABEL E
template <typename T>
struct EL_ {
  static const char *name() {
    return "E";
  }
};

//$LABEL Atom
template <typename T>
struct AtomL_ {
  static const char *name() {
    return "Atom";
  }
};

//$LABEL Brackets
template <typename T>
struct BracketsL_ {
  static const char *name() {
    return "Brackets";
  }
};

static refalrts::FnResult CreateHardSent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    static refalrts::Iter etek_index_b_1;
    refalrts::use( etek_index_b_1 );
    static refalrts::Iter etek_index_e_1;
    refalrts::use( etek_index_e_1 );
    // (~1 # Brackets e.body )~1 (~2 e.tek_index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ebody_b_1 = bb_1;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_1;
    refalrts::use( ebody_e_1 );
    etek_index_b_1 = bb_2;
    refalrts::use( etek_index_b_1 );
    etek_index_e_1 = be_2;
    refalrts::use( etek_index_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, etek_index_b_1, etek_index_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    static refalrts::Iter esmth_b_1;
    refalrts::use( esmth_b_1 );
    static refalrts::Iter esmth_e_1;
    refalrts::use( esmth_e_1 );
    static refalrts::Iter etek_index_b_1;
    refalrts::use( etek_index_b_1 );
    static refalrts::Iter etek_index_e_1;
    refalrts::use( etek_index_e_1 );
    static refalrts::Iter etek_index_b_2;
    refalrts::use( etek_index_b_2 );
    static refalrts::Iter etek_index_e_2;
    refalrts::use( etek_index_e_2 );
    // (~1 # Brackets e.body )~1 e.smth (~2 e.tek_index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    ebody_b_1 = bb_1;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_1;
    refalrts::use( ebody_e_1 );
    esmth_b_1 = bb_0;
    refalrts::use( esmth_b_1 );
    esmth_e_1 = be_0;
    refalrts::use( esmth_e_1 );
    etek_index_b_1 = bb_2;
    refalrts::use( etek_index_b_1 );
    etek_index_e_1 = be_2;
    refalrts::use( etek_index_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & esmth_b_1, & esmth_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( etek_index_b_2, etek_index_e_2, etek_index_b_1, etek_index_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, etek_index_b_2, etek_index_e_2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, esmth_b_1, esmth_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, etek_index_b_1, etek_index_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter esmth_b_1;
    refalrts::use( esmth_b_1 );
    static refalrts::Iter esmth_e_1;
    refalrts::use( esmth_e_1 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    static refalrts::Iter etek_index_b_1;
    refalrts::use( etek_index_b_1 );
    static refalrts::Iter etek_index_e_1;
    refalrts::use( etek_index_e_1 );
    static refalrts::Iter etek_index_b_2;
    refalrts::use( etek_index_b_2 );
    static refalrts::Iter etek_index_e_2;
    refalrts::use( etek_index_e_2 );
    // e.smth (~1 # Brackets e.body )~1 (~2 e.tek_index )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_1, be_1 ) ) 
      break;
    esmth_b_1 = bb_0;
    refalrts::use( esmth_b_1 );
    esmth_e_1 = be_0;
    refalrts::use( esmth_e_1 );
    ebody_b_1 = bb_1;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_1;
    refalrts::use( ebody_e_1 );
    etek_index_b_1 = bb_2;
    refalrts::use( etek_index_b_1 );
    etek_index_e_1 = be_2;
    refalrts::use( etek_index_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & esmth_b_1, & esmth_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( etek_index_b_2, etek_index_e_2, etek_index_b_1, etek_index_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_ident( n7, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n6, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, etek_index_b_2, etek_index_e_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, etek_index_b_1, etek_index_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, esmth_b_1, esmth_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ename_b_1;
    refalrts::use( ename_b_1 );
    static refalrts::Iter ename_e_1;
    refalrts::use( ename_e_1 );
    static refalrts::Iter esmth_b_1;
    refalrts::use( esmth_b_1 );
    static refalrts::Iter esmth_e_1;
    refalrts::use( esmth_e_1 );
    static refalrts::Iter etek_index_b_1;
    refalrts::use( etek_index_b_1 );
    static refalrts::Iter etek_index_e_1;
    refalrts::use( etek_index_e_1 );
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter etek_index_b_2;
    refalrts::use( etek_index_b_2 );
    static refalrts::Iter etek_index_e_2;
    refalrts::use( etek_index_e_2 );
    static refalrts::Iter etek_index_b_3;
    refalrts::use( etek_index_b_3 );
    static refalrts::Iter etek_index_e_3;
    refalrts::use( etek_index_e_3 );
    // (~1 # S (~2 e.name )~2 (~3 e.pattern )~3 )~1 e.smth (~4 e.tek_index )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::ident_left(  & SL_<int>::name, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    ename_b_1 = bb_2;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_2;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_3;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_3;
    refalrts::use( epattern_e_1 );
    esmth_b_1 = bb_0;
    refalrts::use( esmth_b_1 );
    esmth_e_1 = be_0;
    refalrts::use( esmth_e_1 );
    etek_index_b_1 = bb_4;
    refalrts::use( etek_index_b_1 );
    etek_index_e_1 = be_4;
    refalrts::use( etek_index_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & SL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icSpliceEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icCopyEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & esmth_b_1, & esmth_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( etek_index_b_2, etek_index_e_2, etek_index_b_1, etek_index_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( etek_index_b_3, etek_index_e_3, etek_index_b_2, etek_index_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & SL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n28 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n25, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, etek_index_b_3, etek_index_e_3 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, esmth_b_1, esmth_e_1 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n0, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n9, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, etek_index_b_2, etek_index_e_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, etek_index_b_1, etek_index_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ename_b_1;
    refalrts::use( ename_b_1 );
    static refalrts::Iter ename_e_1;
    refalrts::use( ename_e_1 );
    static refalrts::Iter esmth_b_1;
    refalrts::use( esmth_b_1 );
    static refalrts::Iter esmth_e_1;
    refalrts::use( esmth_e_1 );
    static refalrts::Iter etek_index_b_1;
    refalrts::use( etek_index_b_1 );
    static refalrts::Iter etek_index_e_1;
    refalrts::use( etek_index_e_1 );
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter etek_index_b_2;
    refalrts::use( etek_index_b_2 );
    static refalrts::Iter etek_index_e_2;
    refalrts::use( etek_index_e_2 );
    static refalrts::Iter etek_index_b_3;
    refalrts::use( etek_index_b_3 );
    static refalrts::Iter etek_index_e_3;
    refalrts::use( etek_index_e_3 );
    // (~1 # T (~2 e.name )~2 (~3 e.pattern )~3 )~1 e.smth (~4 e.tek_index )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::ident_left(  & TL_<int>::name, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    ename_b_1 = bb_2;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_2;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_3;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_3;
    refalrts::use( epattern_e_1 );
    esmth_b_1 = bb_0;
    refalrts::use( esmth_b_1 );
    esmth_e_1 = be_0;
    refalrts::use( esmth_e_1 );
    etek_index_b_1 = bb_4;
    refalrts::use( etek_index_b_1 );
    etek_index_e_1 = be_4;
    refalrts::use( etek_index_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & TL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icSpliceEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icCopyEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & esmth_b_1, & esmth_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( etek_index_b_2, etek_index_e_2, etek_index_b_1, etek_index_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( etek_index_b_3, etek_index_e_3, etek_index_b_2, etek_index_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & TL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n28 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n25, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, etek_index_b_3, etek_index_e_3 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, esmth_b_1, esmth_e_1 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n0, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n9, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, etek_index_b_2, etek_index_e_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, etek_index_b_1, etek_index_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ename_b_1;
    refalrts::use( ename_b_1 );
    static refalrts::Iter ename_e_1;
    refalrts::use( ename_e_1 );
    static refalrts::Iter esmth_b_1;
    refalrts::use( esmth_b_1 );
    static refalrts::Iter esmth_e_1;
    refalrts::use( esmth_e_1 );
    static refalrts::Iter etek_index_b_1;
    refalrts::use( etek_index_b_1 );
    static refalrts::Iter etek_index_e_1;
    refalrts::use( etek_index_e_1 );
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter etek_index_b_2;
    refalrts::use( etek_index_b_2 );
    static refalrts::Iter etek_index_e_2;
    refalrts::use( etek_index_e_2 );
    static refalrts::Iter etek_index_b_3;
    refalrts::use( etek_index_b_3 );
    static refalrts::Iter etek_index_e_3;
    refalrts::use( etek_index_e_3 );
    // (~1 # E (~2 e.name )~2 (~3 e.pattern )~3 )~1 e.smth (~4 e.tek_index )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::ident_left(  & EL_<int>::name, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    ename_b_1 = bb_2;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_2;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_3;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_3;
    refalrts::use( epattern_e_1 );
    esmth_b_1 = bb_0;
    refalrts::use( esmth_b_1 );
    esmth_e_1 = be_0;
    refalrts::use( esmth_e_1 );
    etek_index_b_1 = bb_4;
    refalrts::use( etek_index_b_1 );
    etek_index_e_1 = be_4;
    refalrts::use( etek_index_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & EL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icSpliceEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icCopyEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & esmth_b_1, & esmth_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( etek_index_b_2, etek_index_e_2, etek_index_b_1, etek_index_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( etek_index_b_3, etek_index_e_3, etek_index_b_2, etek_index_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & EL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n28 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n25, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, etek_index_b_3, etek_index_e_3 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, esmth_b_1, esmth_e_1 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n0, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n9, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, etek_index_b_2, etek_index_e_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, etek_index_b_1, etek_index_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eattr_b_1;
    refalrts::use( eattr_b_1 );
    static refalrts::Iter eattr_e_1;
    refalrts::use( eattr_e_1 );
    static refalrts::Iter esmth_b_1;
    refalrts::use( esmth_b_1 );
    static refalrts::Iter esmth_e_1;
    refalrts::use( esmth_e_1 );
    static refalrts::Iter etek_index_b_1;
    refalrts::use( etek_index_b_1 );
    static refalrts::Iter etek_index_e_1;
    refalrts::use( etek_index_e_1 );
    // (~1 # Atom e.attr )~1 e.smth (~2 e.tek_index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::ident_left(  & AtomL_<int>::name, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eattr_b_1 = bb_1;
    refalrts::use( eattr_b_1 );
    eattr_e_1 = be_1;
    refalrts::use( eattr_e_1 );
    esmth_b_1 = bb_0;
    refalrts::use( esmth_b_1 );
    esmth_e_1 = be_0;
    refalrts::use( esmth_e_1 );
    etek_index_b_1 = bb_2;
    refalrts::use( etek_index_b_1 );
    etek_index_e_1 = be_2;
    refalrts::use( etek_index_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AtomL_<int>::name},
      {refalrts::icSpliceEVar, & eattr_b_1, & eattr_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & esmth_b_1, & esmth_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & etek_index_b_1, & etek_index_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_ident( n1, & AtomL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, etek_index_b_1, etek_index_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, esmth_b_1, esmth_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eattr_b_1, eattr_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter etek_index_b_1;
    refalrts::use( etek_index_b_1 );
    static refalrts::Iter etek_index_e_1;
    refalrts::use( etek_index_e_1 );
    // (~1 e.tek_index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    etek_index_b_1 = bb_1;
    refalrts::use( etek_index_b_1 );
    etek_index_e_1 = be_1;
    refalrts::use( etek_index_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult HardGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter esent_b_1;
    refalrts::use( esent_b_1 );
    static refalrts::Iter esent_e_1;
    refalrts::use( esent_e_1 );
    static refalrts::Iter etail_b_1;
    refalrts::use( etail_b_1 );
    static refalrts::Iter etail_e_1;
    refalrts::use( etail_e_1 );
    // (~1 e.sent )~1 e.tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    esent_b_1 = bb_1;
    refalrts::use( esent_b_1 );
    esent_e_1 = be_1;
    refalrts::use( esent_e_1 );
    etail_b_1 = bb_0;
    refalrts::use( etail_b_1 );
    etail_e_1 = be_0;
    refalrts::use( etail_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateHardSent, (void*) "CreateHardSent"},
      {refalrts::icSpliceEVar, & esent_b_1, & esent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & HardGen, (void*) "HardGen"},
      {refalrts::icSpliceEVar, & etail_b_1, & etail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & CreateHardSent, "CreateHardSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & HardGen, "HardGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, etail_b_1, etail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, esent_b_1, esent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}


//End of file
