// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Parser(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Error(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult HardGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MakeIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakePatterns(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    // e.Pattern '= e.Result '; e.Tail
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_b_1 = bb_0_stk,
        ePattern_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_oe_1, be_0 )
    ) {
      bb_0 = ePattern_oe_1;
      ePattern_b_1 = bb_0_stk;
      ePattern_e_1 = ePattern_oe_1;
      refalrts::move_right( ePattern_b_1, ePattern_e_1 );
      if( ! refalrts::char_left( '=', bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eResult_b_1 = bb_0_stk,
          eResult_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eResult_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eResult_oe_1, be_0 )
      ) {
        bb_0 = eResult_oe_1;
        eResult_b_1 = bb_0_stk;
        eResult_e_1 = eResult_oe_1;
        refalrts::move_right( eResult_b_1, eResult_e_1 );
        if( ! refalrts::char_left( ';', bb_0, be_0 ) ) 
          continue;
        eTail_b_1 = bb_0;
        refalrts::use( eTail_b_1 );
        eTail_e_1 = be_0;
        refalrts::use( eTail_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Parser, (void*) "Parser"},
          {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & MakePatterns, (void*) "MakePatterns"},
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
        if( ! refalrts::alloc_open_bracket( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_open_call( n1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_name( n2, & Parser, "Parser" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_close_call( n3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_call( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & MakePatterns, "MakePatterns" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_call( n7 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n7 );
        refalrts::push_stack( n5 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n0, n4 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::push_stack( n3 );
        refalrts::push_stack( n1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
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
    // e.smth
    esmth_b_1 = bb_0;
    refalrts::use( esmth_b_1 );
    esmth_e_1 = be_0;
    refalrts::use( esmth_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Error, (void*) "Error"},
      {refalrts::icChar, 0, 0, 'B'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & esmth_b_1, & esmth_e_1},
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
    if( ! refalrts::alloc_name( n1, & Error, "Error" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'B' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, esmth_b_1, esmth_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
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

static refalrts::FnResult Test(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSent_b_1;
    refalrts::use( eSent_b_1 );
    static refalrts::Iter eSent_e_1;
    refalrts::use( eSent_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter eSent_b_2;
    refalrts::use( eSent_b_2 );
    static refalrts::Iter eSent_e_2;
    refalrts::use( eSent_e_2 );
    static refalrts::Iter eSent_b_3;
    refalrts::use( eSent_b_3 );
    static refalrts::Iter eSent_e_3;
    refalrts::use( eSent_e_3 );
    static refalrts::Iter eSent_b_4;
    refalrts::use( eSent_b_4 );
    static refalrts::Iter eSent_e_4;
    refalrts::use( eSent_e_4 );
    // (~1 e.Sent )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eSent_b_1 = bb_1;
    refalrts::use( eSent_b_1 );
    eSent_e_1 = be_1;
    refalrts::use( eSent_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eSent_b_1, & eSent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MakePatterns, (void*) "MakePatterns"},
      {refalrts::icCopyEVar, & eSent_b_1, & eSent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'H'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & HardGen, (void*) "HardGen"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MakePatterns, (void*) "MakePatterns"},
      {refalrts::icCopyEVar, & eSent_b_1, & eSent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastGen, (void*) "FastGen"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & HardGen, (void*) "HardGen"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MakePatterns, (void*) "MakePatterns"},
      {refalrts::icCopyEVar, & eSent_b_1, & eSent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Test, (void*) "Test"},
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
    if( ! refalrts::copy_evar( eSent_b_2, eSent_e_2, eSent_b_1, eSent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eSent_b_3, eSent_e_3, eSent_b_2, eSent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eSent_b_4, eSent_e_4, eSent_b_3, eSent_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, & MakePatterns, "MakePatterns" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_open_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_name( n36, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'H' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_name( n47, & HardGen, "HardGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_open_call( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_name( n49, & MakePatterns, "MakePatterns" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_call( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_call( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_close_call( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_open_call( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_name( n54, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_open_call( n64 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_name( n65, & FastGen, "FastGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_open_call( n66 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_name( n67, & HardGen, "HardGen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_open_call( n68 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_name( n69, & MakePatterns, "MakePatterns" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_close_call( n70 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_close_call( n71 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_close_call( n72 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_close_call( n73 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_open_call( n74 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_name( n75, & Test, "Test" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_close_call( n76 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n76 );
    refalrts::push_stack( n74 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    refalrts::push_stack( n73 );
    refalrts::push_stack( n53 );
    res = refalrts::splice_elem( res, n73 );
    refalrts::push_stack( n72 );
    refalrts::push_stack( n64 );
    res = refalrts::splice_elem( res, n72 );
    refalrts::push_stack( n71 );
    refalrts::push_stack( n66 );
    res = refalrts::splice_elem( res, n71 );
    refalrts::push_stack( n70 );
    refalrts::push_stack( n68 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_evar( res, eSent_b_4, eSent_e_4 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    refalrts::push_stack( n52 );
    refalrts::push_stack( n35 );
    res = refalrts::splice_elem( res, n52 );
    refalrts::push_stack( n51 );
    refalrts::push_stack( n46 );
    res = refalrts::splice_elem( res, n51 );
    refalrts::push_stack( n50 );
    refalrts::push_stack( n48 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_evar( res, eSent_b_3, eSent_e_3 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::push_stack( n34 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::push_stack( n33 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, eSent_b_2, eSent_e_2 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eSent_b_1, eSent_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
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

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Test, (void*) "Test"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & LoadFile, (void*) "LoadFile"},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 't'},
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
    if( ! refalrts::alloc_name( n1, & Test, "Test" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & LoadFile, "LoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
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


//End of file
