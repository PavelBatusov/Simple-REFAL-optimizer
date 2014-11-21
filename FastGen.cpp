// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult FastGen_Terms(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FastGen_MeN(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FastGen_M(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Check(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

//$LABEL Alt
template <typename T>
struct AltL_ {
  static const char *name() {
    return "Alt";
  }
};

extern refalrts::FnResult EraseBr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult FastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
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
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
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
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter t1_1;
    refalrts::use( t1_1 );
    static refalrts::Iter t2_1;
    refalrts::use( t2_1 );
    // (~1 t.1 )~1 (~2 t.2 )~2 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::tvar_left( t1_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! refalrts::tvar_left( t2_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastGen, (void*) "FastGen"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastGen_Terms, (void*) "FastGen_Terms"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & t1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & t2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
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
    if( ! refalrts::alloc_name( n1, & FastGen, "FastGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & FastGen_Terms, "FastGen_Terms" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, t2_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, t1_1 );
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
    static refalrts::Iter eleft1_b_1;
    refalrts::use( eleft1_b_1 );
    static refalrts::Iter eleft1_e_1;
    refalrts::use( eleft1_e_1 );
    static refalrts::Iter eright1_b_1;
    refalrts::use( eright1_b_1 );
    static refalrts::Iter eright1_e_1;
    refalrts::use( eright1_e_1 );
    static refalrts::Iter eleft2_b_1;
    refalrts::use( eleft2_b_1 );
    static refalrts::Iter eleft2_e_1;
    refalrts::use( eleft2_e_1 );
    static refalrts::Iter eright2_b_1;
    refalrts::use( eright2_b_1 );
    static refalrts::Iter eright2_e_1;
    refalrts::use( eright2_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter e1_b_1;
    refalrts::use( e1_b_1 );
    static refalrts::Iter e1_e_1;
    refalrts::use( e1_e_1 );
    static refalrts::Iter ename1_b_1;
    refalrts::use( ename1_b_1 );
    static refalrts::Iter ename1_e_1;
    refalrts::use( ename1_e_1 );
    static refalrts::Iter epattern1_b_1;
    refalrts::use( epattern1_b_1 );
    static refalrts::Iter epattern1_e_1;
    refalrts::use( epattern1_e_1 );
    static refalrts::Iter e2_b_1;
    refalrts::use( e2_b_1 );
    static refalrts::Iter e2_e_1;
    refalrts::use( e2_e_1 );
    static refalrts::Iter e3_b_1;
    refalrts::use( e3_b_1 );
    static refalrts::Iter e3_e_1;
    refalrts::use( e3_e_1 );
    static refalrts::Iter ename2_b_1;
    refalrts::use( ename2_b_1 );
    static refalrts::Iter ename2_e_1;
    refalrts::use( ename2_e_1 );
    static refalrts::Iter epattern2_b_1;
    refalrts::use( epattern2_b_1 );
    static refalrts::Iter epattern2_e_1;
    refalrts::use( epattern2_e_1 );
    static refalrts::Iter e4_b_1;
    refalrts::use( e4_b_1 );
    static refalrts::Iter e4_e_1;
    refalrts::use( e4_e_1 );
    // (~1 (~2 # Brackets e.left1 )~2 e.1 (~3 # E (~4 e.name1 )~4 (~5 e.pattern1 )~5 )~3 e.2 (~6 # Brackets e.right1 )~6 )~1 (~7 (~8 # Brackets e.left2 )~8 e.3 (~9 # E (~10 e.name2 )~10 (~11 e.pattern2 )~11 )~9 e.4 (~12 # Brackets e.right2 )~12 )~7 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_7 = 0;
    refalrts::Iter be_7 = 0;
    if( ! refalrts::brackets_left( bb_7, be_7, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_8 = 0;
    refalrts::Iter be_8 = 0;
    if( ! refalrts::brackets_left( bb_8, be_8, bb_7, be_7 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_8, be_8 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_right( bb_6, be_6, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_6, be_6 ) ) 
      break;
    refalrts::Iter bb_12 = 0;
    refalrts::Iter be_12 = 0;
    if( ! refalrts::brackets_right( bb_12, be_12, bb_7, be_7 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_12, be_12 ) ) 
      break;
    eleft1_b_1 = bb_2;
    refalrts::use( eleft1_b_1 );
    eleft1_e_1 = be_2;
    refalrts::use( eleft1_e_1 );
    eright1_b_1 = bb_6;
    refalrts::use( eright1_b_1 );
    eright1_e_1 = be_6;
    refalrts::use( eright1_e_1 );
    eleft2_b_1 = bb_8;
    refalrts::use( eleft2_b_1 );
    eleft2_e_1 = be_8;
    refalrts::use( eleft2_e_1 );
    eright2_b_1 = bb_12;
    refalrts::use( eright2_b_1 );
    eright2_e_1 = be_12;
    refalrts::use( eright2_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_7_stk = bb_7;
    refalrts::Iter be_7_stk = be_7;
    for( 
      refalrts::Iter
        e1_b_1 = bb_1_stk,
        e1_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( e1_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_7 = bb_7_stk,
      be_7 = be_7_stk,
      refalrts::next_term( e1_oe_1, be_1 )
    ) {
      bb_1 = e1_oe_1;
      e1_b_1 = bb_1_stk;
      e1_e_1 = e1_oe_1;
      refalrts::move_right( e1_b_1, e1_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::ident_left(  & EL_<int>::name, bb_3, be_3 ) ) 
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
        continue;
      refalrts::Iter bb_5 = 0;
      refalrts::Iter be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
      ename1_b_1 = bb_4;
      refalrts::use( ename1_b_1 );
      ename1_e_1 = be_4;
      refalrts::use( ename1_e_1 );
      epattern1_b_1 = bb_5;
      refalrts::use( epattern1_b_1 );
      epattern1_e_1 = be_5;
      refalrts::use( epattern1_e_1 );
      e2_b_1 = bb_1;
      refalrts::use( e2_b_1 );
      e2_e_1 = be_1;
      refalrts::use( e2_e_1 );
      refalrts::Iter bb_7_stk = bb_7;
      refalrts::Iter be_7_stk = be_7;
      for( 
        refalrts::Iter
          e3_b_1 = bb_7_stk,
          e3_oe_1 = bb_7_stk,
          bb_7 = bb_7_stk,
          be_7 = be_7_stk;
        ! empty_seq( e3_oe_1, be_7 );
        bb_7 = bb_7_stk,
        be_7 = be_7_stk,
        refalrts::next_term( e3_oe_1, be_7 )
      ) {
        bb_7 = e3_oe_1;
        e3_b_1 = bb_7_stk;
        e3_e_1 = e3_oe_1;
        refalrts::move_right( e3_b_1, e3_e_1 );
        refalrts::Iter bb_9 = 0;
        refalrts::Iter be_9 = 0;
        if( ! refalrts::brackets_left( bb_9, be_9, bb_7, be_7 ) ) 
          continue;
        if( ! refalrts::ident_left(  & EL_<int>::name, bb_9, be_9 ) ) 
          continue;
        refalrts::Iter bb_10 = 0;
        refalrts::Iter be_10 = 0;
        if( ! refalrts::brackets_left( bb_10, be_10, bb_9, be_9 ) ) 
          continue;
        refalrts::Iter bb_11 = 0;
        refalrts::Iter be_11 = 0;
        if( ! refalrts::brackets_left( bb_11, be_11, bb_9, be_9 ) ) 
          continue;
        if( ! empty_seq( bb_9, be_9 ) )
          continue;
        ename2_b_1 = bb_10;
        refalrts::use( ename2_b_1 );
        ename2_e_1 = be_10;
        refalrts::use( ename2_e_1 );
        epattern2_b_1 = bb_11;
        refalrts::use( epattern2_b_1 );
        epattern2_e_1 = be_11;
        refalrts::use( epattern2_e_1 );
        e4_b_1 = bb_7;
        refalrts::use( e4_b_1 );
        e4_e_1 = be_7;
        refalrts::use( e4_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & FastGen, (void*) "FastGen"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & FastGen_MeN, (void*) "FastGen_MeN"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & BracketsL_<int>::name},
          {refalrts::icSpliceEVar, & eleft1_b_1, & eleft1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & EL_<int>::name},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & ename1_b_1, & ename1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & epattern1_b_1, & epattern1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & e2_b_1, & e2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & BracketsL_<int>::name},
          {refalrts::icSpliceEVar, & eright1_b_1, & eright1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & BracketsL_<int>::name},
          {refalrts::icSpliceEVar, & eleft2_b_1, & eleft2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & e3_b_1, & e3_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & EL_<int>::name},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & ename2_b_1, & ename2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & epattern2_b_1, & epattern2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & e4_b_1, & e4_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & BracketsL_<int>::name},
          {refalrts::icSpliceEVar, & eright2_b_1, & eright2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
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
        if( ! refalrts::alloc_name( n1, & FastGen, "FastGen" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_open_call( n3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_name( n4, & FastGen_MeN, "FastGen_MeN" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_open_bracket( n6 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_ident( n7, & BracketsL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_close_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_open_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_ident( n10, & EL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_bracket( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_open_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_close_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_close_bracket( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_open_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_ident( n17, & BracketsL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_open_bracket( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_bracket( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_ident( n22, & BracketsL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_close_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_open_bracket( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_ident( n25, & EL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_open_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_close_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_ident( n32, & BracketsL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_close_bracket( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_call( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_call( n37 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n37 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
        refalrts::link_brackets( n2, n36 );
        res = refalrts::splice_elem( res, n36 );
        refalrts::push_stack( n35 );
        refalrts::push_stack( n3 );
        res = refalrts::splice_elem( res, n35 );
        refalrts::link_brackets( n20, n34 );
        res = refalrts::splice_elem( res, n34 );
        refalrts::link_brackets( n31, n33 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_evar( res, eright2_b_1, eright2_e_1 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_evar( res, e4_b_1, e4_e_1 );
        refalrts::link_brackets( n24, n30 );
        res = refalrts::splice_elem( res, n30 );
        refalrts::link_brackets( n28, n29 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_evar( res, epattern2_b_1, epattern2_e_1 );
        res = refalrts::splice_elem( res, n28 );
        refalrts::link_brackets( n26, n27 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_evar( res, ename2_b_1, ename2_e_1 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_evar( res, e3_b_1, e3_e_1 );
        refalrts::link_brackets( n21, n23 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_evar( res, eleft2_b_1, eleft2_e_1 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::link_brackets( n5, n19 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n16, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, eright1_b_1, eright1_e_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_evar( res, e2_b_1, e2_e_1 );
        refalrts::link_brackets( n9, n15 );
        res = refalrts::splice_elem( res, n15 );
        refalrts::link_brackets( n13, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, epattern1_b_1, epattern1_e_1 );
        res = refalrts::splice_elem( res, n13 );
        refalrts::link_brackets( n11, n12 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, ename1_b_1, ename1_e_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
        refalrts::link_brackets( n6, n8 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, eleft1_b_1, eleft1_e_1 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eleft1_b_1;
    refalrts::use( eleft1_b_1 );
    static refalrts::Iter eleft1_e_1;
    refalrts::use( eleft1_e_1 );
    static refalrts::Iter e1_b_1;
    refalrts::use( e1_b_1 );
    static refalrts::Iter e1_e_1;
    refalrts::use( e1_e_1 );
    static refalrts::Iter eleft2_b_1;
    refalrts::use( eleft2_b_1 );
    static refalrts::Iter eleft2_e_1;
    refalrts::use( eleft2_e_1 );
    static refalrts::Iter e2_b_1;
    refalrts::use( e2_b_1 );
    static refalrts::Iter e2_e_1;
    refalrts::use( e2_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter eleft1_b_2;
    refalrts::use( eleft1_b_2 );
    static refalrts::Iter eleft1_e_2;
    refalrts::use( eleft1_e_2 );
    static refalrts::Iter e1_b_2;
    refalrts::use( e1_b_2 );
    static refalrts::Iter e1_e_2;
    refalrts::use( e1_e_2 );
    static refalrts::Iter eleft2_b_2;
    refalrts::use( eleft2_b_2 );
    static refalrts::Iter eleft2_e_2;
    refalrts::use( eleft2_e_2 );
    static refalrts::Iter e2_b_2;
    refalrts::use( e2_b_2 );
    static refalrts::Iter e2_e_2;
    refalrts::use( e2_e_2 );
    // (~1 (~2 # Brackets e.left1 )~2 e.1 )~1 (~3 (~4 # Brackets e.left2 )~4 e.2 )~3 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_4, be_4 ) ) 
      break;
    eleft1_b_1 = bb_2;
    refalrts::use( eleft1_b_1 );
    eleft1_e_1 = be_2;
    refalrts::use( eleft1_e_1 );
    e1_b_1 = bb_1;
    refalrts::use( e1_b_1 );
    e1_e_1 = be_1;
    refalrts::use( e1_e_1 );
    eleft2_b_1 = bb_4;
    refalrts::use( eleft2_b_1 );
    eleft2_e_1 = be_4;
    refalrts::use( eleft2_e_1 );
    e2_b_1 = bb_3;
    refalrts::use( e2_b_1 );
    e2_e_1 = be_3;
    refalrts::use( e2_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastGen, (void*) "FastGen"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastGen_M, (void*) "FastGen_M"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Check, (void*) "Check"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icSpliceEVar, & eleft1_b_1, & eleft1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icSpliceEVar, & eleft2_b_1, & eleft2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & e2_b_1, & e2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icCopyEVar, & eleft1_b_1, & eleft1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & e1_b_1, & e1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icCopyEVar, & eleft2_b_1, & eleft2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & e2_b_1, & e2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eleft1_b_2, eleft1_e_2, eleft1_b_1, eleft1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( e1_b_2, e1_e_2, e1_b_1, e1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eleft2_b_2, eleft2_e_2, eleft2_b_1, eleft2_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( e2_b_2, e2_e_2, e2_b_1, e2_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & FastGen, "FastGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & FastGen_M, "FastGen_M" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Check, "Check" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_ident( n9, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_ident( n14, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_ident( n20, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_ident( n25, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n30 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n2, n29 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n23, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, e2_b_2, e2_e_2 );
    refalrts::link_brackets( n24, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eleft2_b_2, eleft2_e_2 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n18, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, e1_b_2, e1_e_2 );
    refalrts::link_brackets( n19, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eleft1_b_2, eleft1_e_2 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n12, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, e2_b_1, e2_e_1 );
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eleft2_b_1, eleft2_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eleft1_b_1, eleft1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter e1_b_1;
    refalrts::use( e1_b_1 );
    static refalrts::Iter e1_e_1;
    refalrts::use( e1_e_1 );
    static refalrts::Iter e2_b_1;
    refalrts::use( e2_b_1 );
    static refalrts::Iter e2_e_1;
    refalrts::use( e2_e_1 );
    // (~1 e.1 )~1 (~2 e.2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    e1_b_1 = bb_1;
    refalrts::use( e1_b_1 );
    e1_e_1 = be_1;
    refalrts::use( e1_e_1 );
    e2_b_1 = bb_2;
    refalrts::use( e2_b_1 );
    e2_e_1 = be_2;
    refalrts::use( e2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & EL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e2_b_1, & e2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_ident( n2, & EL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_ident( n11, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n1, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n10, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, e2_b_1, e2_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n3, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
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

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult FastGen_Terms(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter e2_b_1;
    refalrts::use( e2_b_1 );
    static refalrts::Iter e2_e_1;
    refalrts::use( e2_e_1 );
    // (~1 (~2 # Brackets e.1 )~2 )~1 (~3 (~4 # Brackets e.2 )~4 )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    e1_b_1 = bb_2;
    refalrts::use( e1_b_1 );
    e1_e_1 = be_2;
    refalrts::use( e1_e_1 );
    e2_b_1 = bb_4;
    refalrts::use( e2_b_1 );
    e2_e_1 = be_4;
    refalrts::use( e2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EraseBr, (void*) "EraseBr"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastGen, (void*) "FastGen"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e2_b_1, & e2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_name( n3, & EraseBr, "EraseBr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & FastGen, "FastGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, e2_b_1, e2_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
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
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter stype_1;
    refalrts::use( stype_1 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    // (~1 (~2 # E (~3 e.name )~3 (~4 e.pattern )~4 )~2 )~1 (~5 (~6 s.type e.body )~6 )~5
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & EL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_5, be_5 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_5, be_5 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ename_b_1 = bb_3;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_3;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_4;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_4;
    refalrts::use( epattern_e_1 );
    if( ! refalrts::svar_left( stype_1, bb_6, be_6 ) ) 
      break;
    ebody_b_1 = bb_6;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_6;
    refalrts::use( ebody_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & EL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epattern_b_1, & epattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & stype_1},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_ident( n13, & EL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n9, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n20, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_stvar( res, stype_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n11, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n12, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, epattern_b_1, epattern_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter stype_1;
    refalrts::use( stype_1 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    // (~1 (~2 s.type e.body )~2 )~1 (~3 (~4 # E (~5 e.name )~5 (~6 e.pattern )~6 )~4 )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & EL_<int>::name, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ename_b_1 = bb_5;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_5;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_6;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_6;
    refalrts::use( epattern_e_1 );
    if( ! refalrts::svar_left( stype_1, bb_2, be_2 ) ) 
      break;
    ebody_b_1 = bb_2;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_2;
    refalrts::use( ebody_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & stype_1},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & EL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epattern_b_1, & epattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_ident( n17, & EL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n9, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n15, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n16, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, epattern_b_1, epattern_e_1 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n11, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_stvar( res, stype_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter stype_1;
    refalrts::use( stype_1 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    // (~1 (~2 # T (~3 e.name )~3 (~4 e.pattern )~4 )~2 )~1 (~5 (~6 s.type e.body )~6 )~5
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & TL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_5, be_5 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_5, be_5 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ename_b_1 = bb_3;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_3;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_4;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_4;
    refalrts::use( epattern_e_1 );
    if( ! refalrts::svar_left( stype_1, bb_6, be_6 ) ) 
      break;
    ebody_b_1 = bb_6;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_6;
    refalrts::use( ebody_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & TL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epattern_b_1, & epattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & stype_1},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_ident( n13, & TL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n9, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n20, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_stvar( res, stype_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n11, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n12, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, epattern_b_1, epattern_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter stype_1;
    refalrts::use( stype_1 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    // (~1 (~2 s.type e.body )~2 )~1 (~3 (~4 # T (~5 e.name )~5 (~6 e.pattern )~6 )~4 )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & TL_<int>::name, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ename_b_1 = bb_5;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_5;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_6;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_6;
    refalrts::use( epattern_e_1 );
    if( ! refalrts::svar_left( stype_1, bb_2, be_2 ) ) 
      break;
    ebody_b_1 = bb_2;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_2;
    refalrts::use( ebody_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & stype_1},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & TL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epattern_b_1, & epattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_ident( n17, & TL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n9, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n15, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n16, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, epattern_b_1, epattern_e_1 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n11, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_stvar( res, stype_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    // (~1 (~2 # S (~3 e.name )~3 (~4 e.pattern )~4 )~2 )~1 (~5 (~6 # Brackets e.body )~6 )~5
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & SL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_5, be_5 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_6, be_6 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_5, be_5 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ename_b_1 = bb_3;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_3;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_4;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_4;
    refalrts::use( epattern_e_1 );
    ebody_b_1 = bb_6;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_6;
    refalrts::use( ebody_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & SL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epattern_b_1, & epattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_ident( n13, & SL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_ident( n22, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n26 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n9, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n20, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n11, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n12, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, epattern_b_1, epattern_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    static refalrts::Iter ename_b_1;
    refalrts::use( ename_b_1 );
    static refalrts::Iter ename_e_1;
    refalrts::use( ename_e_1 );
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    // (~1 (~2 # Brackets e.body )~2 )~1 (~3 (~4 # S (~5 e.name )~5 (~6 e.pattern )~6 )~4 )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & SL_<int>::name, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ebody_b_1 = bb_2;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_2;
    refalrts::use( ebody_e_1 );
    ename_b_1 = bb_5;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_5;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_6;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_6;
    refalrts::use( epattern_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & SL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epattern_b_1, & epattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_ident( n13, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_ident( n18, & SL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n26 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n9, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n16, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n17, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, epattern_b_1, epattern_e_1 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter stype_1;
    refalrts::use( stype_1 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    // (~1 (~2 # S (~3 e.name )~3 (~4 e.pattern )~4 )~2 )~1 (~5 (~6 s.type e.body )~6 )~5
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & SL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_5, be_5 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_5, be_5 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ename_b_1 = bb_3;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_3;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_4;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_4;
    refalrts::use( epattern_e_1 );
    if( ! refalrts::svar_left( stype_1, bb_6, be_6 ) ) 
      break;
    ebody_b_1 = bb_6;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_6;
    refalrts::use( ebody_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & SL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epattern_b_1, & epattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & stype_1},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_ident( n13, & SL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n9, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n20, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_stvar( res, stype_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n11, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n12, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, epattern_b_1, epattern_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter epattern_b_1;
    refalrts::use( epattern_b_1 );
    static refalrts::Iter epattern_e_1;
    refalrts::use( epattern_e_1 );
    static refalrts::Iter stype_1;
    refalrts::use( stype_1 );
    static refalrts::Iter ebody_b_1;
    refalrts::use( ebody_b_1 );
    static refalrts::Iter ebody_e_1;
    refalrts::use( ebody_e_1 );
    // (~1 (~2 s.type e.body )~2 )~1 (~3 (~4 # S (~5 e.name )~5 (~6 e.pattern )~6 )~4 )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & SL_<int>::name, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ename_b_1 = bb_5;
    refalrts::use( ename_b_1 );
    ename_e_1 = be_5;
    refalrts::use( ename_e_1 );
    epattern_b_1 = bb_6;
    refalrts::use( epattern_b_1 );
    epattern_e_1 = be_6;
    refalrts::use( epattern_e_1 );
    if( ! refalrts::svar_left( stype_1, bb_2, be_2 ) ) 
      break;
    ebody_b_1 = bb_2;
    refalrts::use( ebody_b_1 );
    ebody_e_1 = be_2;
    refalrts::use( ebody_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & stype_1},
      {refalrts::icSpliceEVar, & ebody_b_1, & ebody_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & SL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ename_b_1, & ename_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & epattern_b_1, & epattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_ident( n17, & SL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n9, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n15, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n16, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, epattern_b_1, epattern_e_1 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, ename_b_1, ename_e_1 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n11, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ebody_b_1, ebody_e_1 );
    res = refalrts::splice_stvar( res, stype_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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
    static refalrts::Iter sval_1;
    refalrts::use( sval_1 );
    static refalrts::Iter sval_2;
    refalrts::use( sval_2 );
    // (~1 (~2 # Atom s.val )~2 )~1 (~3 (~4 # Atom s.val )~4 )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & AtomL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & AtomL_<int>::name, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sval_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::repeated_stvar_left( sval_2, sval_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AtomL_<int>::name},
      {refalrts::icSpliceSTVar, & sval_1},
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
    if( ! refalrts::alloc_ident( n1, & AtomL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sval_1 );
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
    static refalrts::Iter sval1_1;
    refalrts::use( sval1_1 );
    static refalrts::Iter sval2_1;
    refalrts::use( sval2_1 );
    // (~1 (~2 # Atom s.val1 )~2 )~1 (~3 (~4 # Atom s.val2 )~4 )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & AtomL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & AtomL_<int>::name, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sval1_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sval2_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AtomL_<int>::name},
      {refalrts::icSpliceSTVar, & sval1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AtomL_<int>::name},
      {refalrts::icSpliceSTVar, & sval2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_ident( n13, & AtomL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_ident( n18, & AtomL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n9, n21 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n16, n20 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n17, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, sval2_1 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sval1_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult FastGen_MeN(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eleft1_b_1;
    refalrts::use( eleft1_b_1 );
    static refalrts::Iter eleft1_e_1;
    refalrts::use( eleft1_e_1 );
    static refalrts::Iter eright1_b_1;
    refalrts::use( eright1_b_1 );
    static refalrts::Iter eright1_e_1;
    refalrts::use( eright1_e_1 );
    static refalrts::Iter eleft2_b_1;
    refalrts::use( eleft2_b_1 );
    static refalrts::Iter eleft2_e_1;
    refalrts::use( eleft2_e_1 );
    static refalrts::Iter eright2_b_1;
    refalrts::use( eright2_b_1 );
    static refalrts::Iter eright2_e_1;
    refalrts::use( eright2_e_1 );
    static refalrts::Iter e1_b_1;
    refalrts::use( e1_b_1 );
    static refalrts::Iter e1_e_1;
    refalrts::use( e1_e_1 );
    static refalrts::Iter epattern1_b_1;
    refalrts::use( epattern1_b_1 );
    static refalrts::Iter epattern1_e_1;
    refalrts::use( epattern1_e_1 );
    static refalrts::Iter e2_b_1;
    refalrts::use( e2_b_1 );
    static refalrts::Iter e2_e_1;
    refalrts::use( e2_e_1 );
    static refalrts::Iter e3_b_1;
    refalrts::use( e3_b_1 );
    static refalrts::Iter e3_e_1;
    refalrts::use( e3_e_1 );
    static refalrts::Iter epattern2_b_1;
    refalrts::use( epattern2_b_1 );
    static refalrts::Iter epattern2_e_1;
    refalrts::use( epattern2_e_1 );
    static refalrts::Iter e4_b_1;
    refalrts::use( e4_b_1 );
    static refalrts::Iter e4_e_1;
    refalrts::use( e4_e_1 );
    static refalrts::Iter ename1_b_1;
    refalrts::use( ename1_b_1 );
    static refalrts::Iter ename1_e_1;
    refalrts::use( ename1_e_1 );
    static refalrts::Iter ename2_b_1;
    refalrts::use( ename2_b_1 );
    static refalrts::Iter ename2_e_1;
    refalrts::use( ename2_e_1 );
    // (~1 (~2 # Brackets e.left1 )~2 e.1 (~3 # E (~4 e.name1 )~4 (~5 e.pattern1 )~5 )~3 e.2 (~6 # Brackets e.right1 )~6 )~1 (~7 (~8 # Brackets e.left2 )~8 e.3 (~9 # E (~10 e.name2 )~10 (~11 e.pattern2 )~11 )~9 e.4 (~12 # Brackets e.right2 )~12 )~7
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_7 = 0;
    refalrts::Iter be_7 = 0;
    if( ! refalrts::brackets_left( bb_7, be_7, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_8 = 0;
    refalrts::Iter be_8 = 0;
    if( ! refalrts::brackets_left( bb_8, be_8, bb_7, be_7 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_8, be_8 ) ) 
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_right( bb_6, be_6, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_6, be_6 ) ) 
      break;
    refalrts::Iter bb_12 = 0;
    refalrts::Iter be_12 = 0;
    if( ! refalrts::brackets_right( bb_12, be_12, bb_7, be_7 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_12, be_12 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eleft1_b_1 = bb_2;
    refalrts::use( eleft1_b_1 );
    eleft1_e_1 = be_2;
    refalrts::use( eleft1_e_1 );
    eright1_b_1 = bb_6;
    refalrts::use( eright1_b_1 );
    eright1_e_1 = be_6;
    refalrts::use( eright1_e_1 );
    eleft2_b_1 = bb_8;
    refalrts::use( eleft2_b_1 );
    eleft2_e_1 = be_8;
    refalrts::use( eleft2_e_1 );
    eright2_b_1 = bb_12;
    refalrts::use( eright2_b_1 );
    eright2_e_1 = be_12;
    refalrts::use( eright2_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_7_stk = bb_7;
    refalrts::Iter be_7_stk = be_7;
    for( 
      refalrts::Iter
        e1_b_1 = bb_1_stk,
        e1_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( e1_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_7 = bb_7_stk,
      be_7 = be_7_stk,
      refalrts::next_term( e1_oe_1, be_1 )
    ) {
      bb_1 = e1_oe_1;
      e1_b_1 = bb_1_stk;
      e1_e_1 = e1_oe_1;
      refalrts::move_right( e1_b_1, e1_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::ident_left(  & EL_<int>::name, bb_3, be_3 ) ) 
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
        continue;
      refalrts::Iter bb_5 = 0;
      refalrts::Iter be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
      ename1_b_1 = bb_4;
      refalrts::use( ename1_b_1 );
      ename1_e_1 = be_4;
      refalrts::use( ename1_e_1 );
      epattern1_b_1 = bb_5;
      refalrts::use( epattern1_b_1 );
      epattern1_e_1 = be_5;
      refalrts::use( epattern1_e_1 );
      e2_b_1 = bb_1;
      refalrts::use( e2_b_1 );
      e2_e_1 = be_1;
      refalrts::use( e2_e_1 );
      refalrts::Iter bb_7_stk = bb_7;
      refalrts::Iter be_7_stk = be_7;
      for( 
        refalrts::Iter
          e3_b_1 = bb_7_stk,
          e3_oe_1 = bb_7_stk,
          bb_7 = bb_7_stk,
          be_7 = be_7_stk;
        ! empty_seq( e3_oe_1, be_7 );
        bb_7 = bb_7_stk,
        be_7 = be_7_stk,
        refalrts::next_term( e3_oe_1, be_7 )
      ) {
        bb_7 = e3_oe_1;
        e3_b_1 = bb_7_stk;
        e3_e_1 = e3_oe_1;
        refalrts::move_right( e3_b_1, e3_e_1 );
        refalrts::Iter bb_9 = 0;
        refalrts::Iter be_9 = 0;
        if( ! refalrts::brackets_left( bb_9, be_9, bb_7, be_7 ) ) 
          continue;
        if( ! refalrts::ident_left(  & EL_<int>::name, bb_9, be_9 ) ) 
          continue;
        refalrts::Iter bb_10 = 0;
        refalrts::Iter be_10 = 0;
        if( ! refalrts::brackets_left( bb_10, be_10, bb_9, be_9 ) ) 
          continue;
        refalrts::Iter bb_11 = 0;
        refalrts::Iter be_11 = 0;
        if( ! refalrts::brackets_left( bb_11, be_11, bb_9, be_9 ) ) 
          continue;
        if( ! empty_seq( bb_9, be_9 ) )
          continue;
        ename2_b_1 = bb_10;
        refalrts::use( ename2_b_1 );
        ename2_e_1 = be_10;
        refalrts::use( ename2_e_1 );
        epattern2_b_1 = bb_11;
        refalrts::use( epattern2_b_1 );
        epattern2_e_1 = be_11;
        refalrts::use( epattern2_e_1 );
        e4_b_1 = bb_7;
        refalrts::use( e4_b_1 );
        e4_e_1 = be_7;
        refalrts::use( e4_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & EraseBr, (void*) "EraseBr"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & FastGen, (void*) "FastGen"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & BracketsL_<int>::name},
          {refalrts::icSpliceEVar, & eleft1_b_1, & eleft1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & BracketsL_<int>::name},
          {refalrts::icSpliceEVar, & eleft2_b_1, & eleft2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & FastGen_MeN, (void*) "FastGen_MeN"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & EL_<int>::name},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icChar, 0, 0, 'I'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'x'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & epattern1_b_1, & epattern1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & e2_b_1, & e2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & e3_b_1, & e3_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & EL_<int>::name},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icChar, 0, 0, 'I'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'x'},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & epattern2_b_1, & epattern2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & e4_b_1, & e4_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & EraseBr, (void*) "EraseBr"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & FastGen, (void*) "FastGen"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & BracketsL_<int>::name},
          {refalrts::icSpliceEVar, & eright1_b_1, & eright1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icIdent, (void*) & BracketsL_<int>::name},
          {refalrts::icSpliceEVar, & eright2_b_1, & eright2_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
        if( ! refalrts::alloc_name( n1, & EraseBr, "EraseBr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & FastGen, "FastGen" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_ident( n6, & BracketsL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_close_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_open_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_ident( n11, & BracketsL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_bracket( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_close_call( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_close_call( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_open_call( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_name( n17, & FastGen_MeN, "FastGen_MeN" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_open_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_ident( n20, & EL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_bracket( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_char( n22, 'I' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_char( n23, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_char( n24, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_char( n25, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_char( n26, 'x' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_close_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_close_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_open_bracket( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_ident( n34, & EL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_open_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_char( n36, 'I' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_char( n37, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_char( n38, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_char( n39, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_char( n40, 'x' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_close_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_open_bracket( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_close_bracket( n43 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_bracket( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_call( n46 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_open_call( n47 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_name( n48, & EraseBr, "EraseBr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_open_call( n49 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_name( n50, & FastGen, "FastGen" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_open_bracket( n51 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_open_bracket( n52 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_ident( n53, & BracketsL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n54 = 0;
        if( ! refalrts::alloc_close_bracket( n54 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n55 = 0;
        if( ! refalrts::alloc_close_bracket( n55 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n56 = 0;
        if( ! refalrts::alloc_open_bracket( n56 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n57 = 0;
        if( ! refalrts::alloc_open_bracket( n57 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n58 = 0;
        if( ! refalrts::alloc_ident( n58, & BracketsL_<int>::name ) )
          return refalrts::cNoMemory;
        refalrts::Iter n59 = 0;
        if( ! refalrts::alloc_close_bracket( n59 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n60 = 0;
        if( ! refalrts::alloc_close_bracket( n60 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n61 = 0;
        if( ! refalrts::alloc_close_call( n61 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n62 = 0;
        if( ! refalrts::alloc_close_call( n62 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n62 );
        refalrts::push_stack( n47 );
        res = refalrts::splice_elem( res, n62 );
        refalrts::push_stack( n61 );
        refalrts::push_stack( n49 );
        res = refalrts::splice_elem( res, n61 );
        refalrts::link_brackets( n56, n60 );
        res = refalrts::splice_elem( res, n60 );
        refalrts::link_brackets( n57, n59 );
        res = refalrts::splice_elem( res, n59 );
        res = refalrts::splice_evar( res, eright2_b_1, eright2_e_1 );
        res = refalrts::splice_elem( res, n58 );
        res = refalrts::splice_elem( res, n57 );
        res = refalrts::splice_elem( res, n56 );
        refalrts::link_brackets( n51, n55 );
        res = refalrts::splice_elem( res, n55 );
        refalrts::link_brackets( n52, n54 );
        res = refalrts::splice_elem( res, n54 );
        res = refalrts::splice_evar( res, eright1_b_1, eright1_e_1 );
        res = refalrts::splice_elem( res, n53 );
        res = refalrts::splice_elem( res, n52 );
        res = refalrts::splice_elem( res, n51 );
        res = refalrts::splice_elem( res, n50 );
        res = refalrts::splice_elem( res, n49 );
        res = refalrts::splice_elem( res, n48 );
        res = refalrts::splice_elem( res, n47 );
        refalrts::push_stack( n46 );
        refalrts::push_stack( n16 );
        res = refalrts::splice_elem( res, n46 );
        refalrts::link_brackets( n32, n45 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_evar( res, e4_b_1, e4_e_1 );
        refalrts::link_brackets( n33, n44 );
        res = refalrts::splice_elem( res, n44 );
        refalrts::link_brackets( n42, n43 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_evar( res, epattern2_b_1, epattern2_e_1 );
        res = refalrts::splice_elem( res, n42 );
        refalrts::link_brackets( n35, n41 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_evar( res, e3_b_1, e3_e_1 );
        res = refalrts::splice_elem( res, n32 );
        refalrts::link_brackets( n18, n31 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_evar( res, e2_b_1, e2_e_1 );
        refalrts::link_brackets( n19, n30 );
        res = refalrts::splice_elem( res, n30 );
        refalrts::link_brackets( n28, n29 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_evar( res, epattern1_b_1, epattern1_e_1 );
        res = refalrts::splice_elem( res, n28 );
        refalrts::link_brackets( n21, n27 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_elem( res, n16 );
        refalrts::push_stack( n15 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n15 );
        refalrts::push_stack( n14 );
        refalrts::push_stack( n2 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n9, n13 );
        res = refalrts::splice_elem( res, n13 );
        refalrts::link_brackets( n10, n12 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, eleft2_b_1, eleft2_e_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        refalrts::link_brackets( n4, n8 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, eleft1_b_1, eleft1_e_1 );
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
      }
    }
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
    static refalrts::Iter e2_b_1;
    refalrts::use( e2_b_1 );
    static refalrts::Iter e2_e_1;
    refalrts::use( e2_e_1 );
    // (~1 e.1 )~1 (~2 e.2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    e1_b_1 = bb_1;
    refalrts::use( e1_b_1 );
    e1_e_1 = be_1;
    refalrts::use( e1_e_1 );
    e2_b_1 = bb_2;
    refalrts::use( e2_b_1 );
    e2_e_1 = be_2;
    refalrts::use( e2_e_1 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e2_b_1, & e2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n9, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, e2_b_1, e2_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Check(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter e2_b_1;
    refalrts::use( e2_b_1 );
    static refalrts::Iter e2_e_1;
    refalrts::use( e2_e_1 );
    static refalrts::Iter eleft1_b_1;
    refalrts::use( eleft1_b_1 );
    static refalrts::Iter eleft1_e_1;
    refalrts::use( eleft1_e_1 );
    static refalrts::Iter eleft2_b_1;
    refalrts::use( eleft2_b_1 );
    static refalrts::Iter eleft2_e_1;
    refalrts::use( eleft2_e_1 );
    // (~1 (~2 # Brackets e.left1 )~2 e.1 )~1 (~3 (~4 # Brackets e.left2 )~4 e.2 )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eleft1_b_1 = bb_2;
    refalrts::use( eleft1_b_1 );
    eleft1_e_1 = be_2;
    refalrts::use( eleft1_e_1 );
    e1_b_1 = bb_1;
    refalrts::use( e1_b_1 );
    e1_e_1 = be_1;
    refalrts::use( e1_e_1 );
    eleft2_b_1 = bb_4;
    refalrts::use( eleft2_b_1 );
    eleft2_e_1 = be_4;
    refalrts::use( eleft2_e_1 );
    e2_b_1 = bb_3;
    refalrts::use( e2_b_1 );
    e2_e_1 = be_3;
    refalrts::use( e2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Check, (void*) "Check"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e2_b_1, & e2_e_1},
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Check, "Check" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
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
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, e2_b_1, e2_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
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
    // (~1 )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, 1UL ) )
      return refalrts::cNoMemory;
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
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, 0UL ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult FastGen_M(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eleft1_b_1;
    refalrts::use( eleft1_b_1 );
    static refalrts::Iter eleft1_e_1;
    refalrts::use( eleft1_e_1 );
    static refalrts::Iter e1_b_1;
    refalrts::use( e1_b_1 );
    static refalrts::Iter e1_e_1;
    refalrts::use( e1_e_1 );
    static refalrts::Iter eleft2_b_1;
    refalrts::use( eleft2_b_1 );
    static refalrts::Iter eleft2_e_1;
    refalrts::use( eleft2_e_1 );
    static refalrts::Iter e2_b_1;
    refalrts::use( e2_b_1 );
    static refalrts::Iter e2_e_1;
    refalrts::use( e2_e_1 );
    // 1 (~1 (~2 # Brackets e.left1 )~2 e.1 )~1 (~3 (~4 # Brackets e.left2 )~4 e.2 )~3
    if( ! refalrts::number_left( 1UL, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
      break;
    if( ! refalrts::ident_left(  & BracketsL_<int>::name, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eleft1_b_1 = bb_2;
    refalrts::use( eleft1_b_1 );
    eleft1_e_1 = be_2;
    refalrts::use( eleft1_e_1 );
    e1_b_1 = bb_1;
    refalrts::use( e1_b_1 );
    e1_e_1 = be_1;
    refalrts::use( e1_e_1 );
    eleft2_b_1 = bb_4;
    refalrts::use( eleft2_b_1 );
    eleft2_e_1 = be_4;
    refalrts::use( eleft2_e_1 );
    e2_b_1 = bb_3;
    refalrts::use( e2_b_1 );
    e2_e_1 = be_3;
    refalrts::use( e2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastGen_Terms, (void*) "FastGen_Terms"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icSpliceEVar, & eleft1_b_1, & eleft1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & BracketsL_<int>::name},
      {refalrts::icSpliceEVar, & eleft2_b_1, & eleft2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastGen_M, (void*) "FastGen_M"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e2_b_1, & e2_e_1},
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & FastGen_Terms, "FastGen_Terms" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_ident( n4, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_ident( n9, & BracketsL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & FastGen_M, "FastGen_M" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_number( n15, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, e2_b_1, e2_e_1 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eleft2_b_1, eleft2_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eleft1_b_1, eleft1_e_1 );
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
    // 1 (~1 )~1 (~2 )~2
    if( ! refalrts::number_left( 1UL, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
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
    // 0 (~1 e.1 )~1
    if( ! refalrts::number_left( 0UL, bb_0, be_0 ) ) 
      break;
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & EL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & AltL_<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & e1_b_1, & e1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_ident( n10, & AltL_<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, e1_b_1, e1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
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

  return refalrts::cRecognitionImpossible;
}


//End of file
