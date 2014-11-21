// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EraseBr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Error(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eErr_b_1;
    refalrts::use( eErr_b_1 );
    static refalrts::Iter eErr_e_1;
    refalrts::use( eErr_e_1 );
    // e.Err
    eErr_b_1 = bb_0;
    refalrts::use( eErr_b_1 );
    eErr_e_1 = be_0;
    refalrts::use( eErr_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icSpliceEVar, & eErr_b_1, & eErr_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Exit, (void*) "Exit"},
      {refalrts::icInt, 0, 0, 1 },
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Exit, "Exit" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_number( n5, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eErr_b_1, eErr_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult EraseBr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter e1_b_1;
    refalrts::use( e1_b_1 );
    static refalrts::Iter e1_e_1;
    refalrts::use( e1_e_1 );
    // (~1 e.1 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    e1_b_1 = bb_1;
    refalrts::use( e1_b_1 );
    e1_e_1 = be_1;
    refalrts::use( e1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
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
    static refalrts::Iter e1_b_1;
    refalrts::use( e1_b_1 );
    static refalrts::Iter e1_e_1;
    refalrts::use( e1_e_1 );
    // e.1
    e1_b_1 = bb_0;
    refalrts::use( e1_b_1 );
    e1_e_1 = be_0;
    refalrts::use( e1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

//$LABEL Brackets
template <typename T>
struct BracketsL_ {
  static const char *name() {
    return "Brackets";
  }
};

//$LABEL Atom
template <typename T>
struct AtomL_ {
  static const char *name() {
    return "Atom";
  }
};

//$LABEL Alt
template <typename T>
struct AltL_ {
  static const char *name() {
    return "Alt";
  }
};

refalrts::FnResult MakeIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eindex_b_1;
    refalrts::use( eindex_b_1 );
    static refalrts::Iter eindex_e_1;
    refalrts::use( eindex_e_1 );
    static refalrts::Iter eleft_b_1;
    refalrts::use( eleft_b_1 );
    static refalrts::Iter eleft_e_1;
    refalrts::use( eleft_e_1 );
    static refalrts::Iter ecenter_b_1;
    refalrts::use( ecenter_b_1 );
    static refalrts::Iter ecenter_e_1;
    refalrts::use( ecenter_e_1 );
    static refalrts::Iter eright_b_1;
    refalrts::use( eright_b_1 );
    static refalrts::Iter eright_e_1;
    refalrts::use( eright_e_1 );
    static refalrts::Iter eindex_b_2;
    refalrts::use( eindex_b_2 );
    static refalrts::Iter eindex_e_2;
    refalrts::use( eindex_e_2 );
    static refalrts::Iter eindex_b_3;
    refalrts::use( eindex_b_3 );
    static refalrts::Iter eindex_e_3;
    refalrts::use( eindex_e_3 );
    // e.left (~1 # Brackets e.center )~1 e.right (~2 e.index )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eindex_b_1 = bb_2;
    refalrts::use( eindex_b_1 );
    eindex_e_1 = be_2;
    refalrts::use( eindex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eleft_b_1 = bb_0_stk,
        eleft_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eleft_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eleft_oe_1, be_0 )
    ) {
      bb_0 = eleft_oe_1;
      eleft_b_1 = bb_0_stk;
      eleft_e_1 = eleft_oe_1;
      refalrts::move_right( eleft_b_1, eleft_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_1, be_1 ) ) 
        continue;
      ecenter_b_1 = bb_1;
      refalrts::use( ecenter_b_1 );
      ecenter_e_1 = be_1;
      refalrts::use( ecenter_e_1 );
      eright_b_1 = bb_0;
      refalrts::use( eright_b_1 );
      eright_e_1 = be_0;
      refalrts::use( eright_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & MakeIndexes, (void*) "MakeIndexes"},
        {refalrts::icSpliceEVar, & eleft_b_1, & eleft_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eindex_b_1, & eindex_e_1},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icIdent, (void*) & BracketsL_<int>::name},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & MakeIndexes, (void*) "MakeIndexes"},
        {refalrts::icSpliceEVar, & ecenter_b_1, & ecenter_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopyEVar, & eindex_b_1, & eindex_e_1},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & MakeIndexes, (void*) "MakeIndexes"},
        {refalrts::icSpliceEVar, & eright_b_1, & eright_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopyEVar, & eindex_b_1, & eindex_e_1},
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
      if( ! refalrts::copy_evar( eindex_b_2, eindex_e_2, eindex_b_1, eindex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eindex_b_3, eindex_e_3, eindex_b_2, eindex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & MakeIndexes, "MakeIndexes" ) )
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
      if( ! refalrts::alloc_name( n9, & MakeIndexes, "MakeIndexes" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'c' ) )
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
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_call( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_name( n16, & MakeIndexes, "MakeIndexes" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_call( n20 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n20 );
      refalrts::push_stack( n15 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n17, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eindex_b_3, eindex_e_3 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eright_b_1, eright_e_1 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n6, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::push_stack( n13 );
      refalrts::push_stack( n8 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n10, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eindex_b_2, eindex_e_2 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ecenter_b_1, ecenter_e_1 );
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
      res = refalrts::splice_evar( res, eindex_b_1, eindex_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eleft_b_1, eleft_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    }
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
    static refalrts::Iter etail_b_1;
    refalrts::use( etail_b_1 );
    static refalrts::Iter etail_e_1;
    refalrts::use( etail_e_1 );
    static refalrts::Iter eindex_b_1;
    refalrts::use( eindex_b_1 );
    static refalrts::Iter eindex_e_1;
    refalrts::use( eindex_e_1 );
    // (~1 # Atom e.attr )~1 e.tail (~2 e.index )~2
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
    etail_b_1 = bb_0;
    refalrts::use( etail_b_1 );
    etail_e_1 = be_0;
    refalrts::use( etail_e_1 );
    eindex_b_1 = bb_2;
    refalrts::use( eindex_b_1 );
    eindex_e_1 = be_2;
    refalrts::use( eindex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AtomL_<int>::name},
      {refalrts::icSpliceEVar, & eattr_b_1, & eattr_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MakeIndexes, (void*) "MakeIndexes"},
      {refalrts::icSpliceEVar, & etail_b_1, & etail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eindex_b_1, & eindex_e_1},
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
    if( ! refalrts::alloc_name( n4, & MakeIndexes, "MakeIndexes" ) )
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
    res = refalrts::splice_evar( res, eindex_b_1, eindex_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, etail_b_1, etail_e_1 );
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
    static refalrts::Iter ename_b_1;
    refalrts::use( ename_b_1 );
    static refalrts::Iter ename_e_1;
    refalrts::use( ename_e_1 );
    static refalrts::Iter epatt_b_1;
    refalrts::use( epatt_b_1 );
    static refalrts::Iter epatt_e_1;
    refalrts::use( epatt_e_1 );
    static refalrts::Iter etail_b_1;
    refalrts::use( etail_b_1 );
    static refalrts::Iter etail_e_1;
    refalrts::use( etail_e_1 );
    static refalrts::Iter eindex_b_1;
    refalrts::use( eindex_b_1 );
    static refalrts::Iter eindex_e_1;
    refalrts::use( eindex_e_1 );
    static refalrts::Iter sVarType_1;
    refalrts::use( sVarType_1 );
    static refalrts::Iter eindex_b_2;
    refalrts::use( eindex_b_2 );
    static refalrts::Iter eindex_e_2;
    refalrts::use( eindex_e_2 );
    // (~1 s.VarType (~2 e.name )~2 (~3 e.patt )~3 )~1 e.tail (~4 e.index )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    ename_b_1 = bb_2;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_2;
    refalrts::use( ename_e_1 );
    epatt_b_1 = bb_3;
    refalrts::use( epatt_b_1 );
    epatt_e_1 = be_3;
    refalrts::use( epatt_e_1 );
    etail_b_1 = bb_0;
    refalrts::use( etail_b_1 );
    etail_e_1 = be_0;
    refalrts::use( etail_e_1 );
    eindex_b_1 = bb_4;
    refalrts::use( eindex_b_1 );
    eindex_e_1 = be_4;
    refalrts::use( eindex_e_1 );
    if( ! refalrts::svar_left( sVarType_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sVarType_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icSpliceEVar, & eindex_b_1, & eindex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epatt_b_1, & epatt_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MakeIndexes, (void*) "MakeIndexes"},
      {refalrts::icSpliceEVar, & etail_b_1, & etail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eindex_b_1, & eindex_e_1},
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
    if( ! refalrts::copy_evar( eindex_b_2, eindex_e_2, eindex_b_1, eindex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & MakeIndexes, "MakeIndexes" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eindex_b_2, eindex_e_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, etail_b_1, etail_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, epatt_b_1, epatt_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eindex_b_1, eindex_e_1 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, sVarType_1 );
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
    static refalrts::Iter eindex_b_1;
    refalrts::use( eindex_b_1 );
    static refalrts::Iter eindex_e_1;
    refalrts::use( eindex_e_1 );
    // (~1 e.index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eindex_b_1 = bb_1;
    refalrts::use( eindex_b_1 );
    eindex_e_1 = be_1;
    refalrts::use( eindex_e_1 );
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
