// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult LeftPtr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult RightPtr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter ePattern_b_1;
    refalrts::Iter ePattern_e_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    // (~1 e.Pattern )~1 (~2 e.Result )~2
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
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GeneralizeResult, "GeneralizeResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & GenPattern, "GenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_number( n6, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & RightPtr, "RightPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_number( n10, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
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
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_number( n23, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n25 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    refalrts::link_brackets( n4, n7 );
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
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult TkOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult LeftPtr(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult RightPtr(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult AlgLeft(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult AlgRight(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdChar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdNumber(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdName(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdBrackets(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdEmpty(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdRepeated(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdVar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdOpenedE(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdClosedE(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdComment(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sChar_1;
    refalrts::Iter sChar_2;
    refalrts::Iter sNum_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkChar s.Char )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkChar, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sChar_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sChar_2, sChar_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkChar, "TkChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sChar_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sChar_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNumber_1;
    refalrts::Iter sNumber_2;
    refalrts::Iter sNum_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkNumber s.Number )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNumber_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkNumber, "TkNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNumber_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumber_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter eName_b_1;
    refalrts::Iter eName_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter eName_b_2;
    refalrts::Iter eName_e_2;
    refalrts::Iter sNum_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkName e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkName, "TkName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sChar_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter sChar_2;
    // e.Pattern_B (~1 &TkChar s.Char )~1 (~2 &RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sChar_2, sChar_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkChar, "TkChar" ) )
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
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sChar_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sChar_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNumber_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter sNumber_2;
    // e.Pattern_B (~1 &TkNumber s.Number )~1 (~2 &RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkNumber, "TkNumber" ) )
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
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNumber_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNumber_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter eName_b_1;
    refalrts::Iter eName_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter eName_b_2;
    refalrts::Iter eName_e_2;
    // e.Pattern_B (~1 &TkName e.Name )~1 (~2 &RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkName, "TkName" ) )
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
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sInner_1;
    refalrts::Iter sInner_2;
    refalrts::Iter ePattern_M_b_1;
    refalrts::Iter ePattern_M_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sInner_3;
    refalrts::Iter sInner_4;
    refalrts::Iter sInner_5;
    refalrts::Iter sNum_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkOpenBracket s.Inner )~2 e.Pattern_M (~3 &TkCloseBracket s.Inner )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenBracket, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseBracket, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & TkOpenBracket, "TkOpenBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_name( n9, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & TkCloseBracket, "TkCloseBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_close_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_open_bracket( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_name( n21, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_close_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_close_bracket( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n25 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n25 );
        refalrts::link_brackets( n19, n24 );
        res = refalrts::splice_elem( res, n24 );
        refalrts::link_brackets( n20, n23 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n17, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n14, n16 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n11, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter sInner_1;
    refalrts::Iter sInner_2;
    refalrts::Iter ePattern_M_b_1;
    refalrts::Iter ePattern_M_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter sInner_3;
    refalrts::Iter sInner_4;
    refalrts::Iter sInner_5;
    // e.Pattern_B (~1 &TkOpenBracket s.Inner )~1 e.Pattern_M (~2 &TkCloseBracket s.Inner )~2 (~3 &RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenBracket, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseBracket, bb_2, be_2 ) ) 
          continue;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & RightPtr, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & TkOpenBracket, "TkOpenBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_name( n9, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & TkCloseBracket, "TkCloseBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_close_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_open_bracket( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_name( n21, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_close_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_close_bracket( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n25 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n25 );
        refalrts::link_brackets( n19, n24 );
        res = refalrts::splice_elem( res, n24 );
        refalrts::link_brackets( n20, n23 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n17, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n14, n16 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n11, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & CmdEmpty, "CmdEmpty" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_call( n9 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n9 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n4, n8 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sMode_1;
    refalrts::Iter sMode_2;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eVars_B_b_1;
    refalrts::Iter eVars_B_e_1;
    refalrts::Iter eVars_E_b_1;
    refalrts::Iter eVars_E_e_1;
    refalrts::Iter sCount_1;
    refalrts::Iter sMode_3;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    refalrts::Iter sNum_2;
    refalrts::Iter sCount_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkVariable s.Mode e.Index )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_open_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
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
        if( ! refalrts::alloc_name( n17, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_name( n20, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_close_bracket( n22 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_close_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_close_call( n24 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n24 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n24 );
        refalrts::link_brackets( n15, n23 );
        res = refalrts::splice_elem( res, n23 );
        refalrts::link_brackets( n16, n22 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_stvar( res, sMode_3 );
        refalrts::push_stack( n21 );
        refalrts::push_stack( n19 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n15 );
        refalrts::link_brackets( n8, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n9, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        refalrts::push_stack( n12 );
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sMode_1;
    refalrts::Iter sMode_2;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter sNum_1;
    refalrts::Iter eVars_B_b_1;
    refalrts::Iter eVars_B_e_1;
    refalrts::Iter eVars_E_b_1;
    refalrts::Iter eVars_E_e_1;
    refalrts::Iter sCount_1;
    refalrts::Iter sNum_2;
    refalrts::Iter sMode_3;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    refalrts::Iter sCount_2;
    // e.Pattern_B (~1 &TkVariable s.Mode e.Index )~1 (~2 &RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_open_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
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
        if( ! refalrts::alloc_name( n17, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_name( n20, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_close_bracket( n22 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_close_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_close_call( n24 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n24 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n24 );
        refalrts::link_brackets( n15, n23 );
        res = refalrts::splice_elem( res, n23 );
        refalrts::link_brackets( n16, n22 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_stvar( res, sMode_3 );
        refalrts::push_stack( n21 );
        refalrts::push_stack( n19 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n15 );
        refalrts::link_brackets( n8, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n9, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        refalrts::push_stack( n12 );
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkVariable 'e e.Index )~2 (~3 &RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_3, be_3 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_number( n8, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'e' ) )
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
      if( ! refalrts::alloc_name( n14, & CmdClosedE, "CmdClosedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n19 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n19 );
      refalrts::link_brackets( n12, n18 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::link_brackets( n13, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    refalrts::Iter sNum_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkVariable 's e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 's', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 's' ) )
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
      if( ! refalrts::alloc_name( n17, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n6, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    refalrts::Iter sNum_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkVariable 't e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 't', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 't' ) )
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
      if( ! refalrts::alloc_name( n17, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n6, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    // e.Pattern_B (~1 &TkVariable 's e.Index )~1 (~2 &RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::char_left( 's', bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 's' ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 's' ) )
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
      if( ! refalrts::alloc_name( n17, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    // e.Pattern_B (~1 &TkVariable 't e.Index )~1 (~2 &RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::char_left( 't', bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 't' ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 't' ) )
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
      if( ! refalrts::alloc_name( n17, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter ePattern_B_b_1;
    refalrts::Iter ePattern_B_e_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter ePattern_E_b_1;
    refalrts::Iter ePattern_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    refalrts::Iter sNum_2;
    // e.Pattern_B (~1 &LeftPtr s.Num )~1 (~2 &TkVariable 'e e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'e' ) )
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
      if( ! refalrts::alloc_name( n17, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n6, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter ePattern_b_1;
    refalrts::Iter ePattern_e_1;
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    // e.Pattern (~1 e.Vars )~1 (~2 e.Commands )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    ePattern_b_1 = bb_0;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_0;
    refalrts::use( ePattern_e_1 );
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & CmdComment, "CmdComment" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & TextFromPattern, "TextFromPattern" ) )
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
    if( ! refalrts::alloc_name( n10, & SaveBrackets, "SaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n3, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    // e.Commands
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eScanned_b_1;
    refalrts::Iter eScanned_e_1;
    refalrts::Iter eCommands_B_b_1;
    refalrts::Iter eCommands_B_e_1;
    refalrts::Iter eCommands_E_b_1;
    refalrts::Iter eCommands_E_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 e.Scanned )~1 e.Commands_B (~2 &CmdOpenedE &AlgLeft s.Num 'e e.Index )~2 e.Commands_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_0_stk,
        eCommands_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eCommands_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eCommands_B_oe_1, be_0 )
    ) {
      bb_0 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_0_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
        continue;
      eCommands_E_b_1 = bb_0;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_0;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoSaveBrackets_Aux, "DoSaveBrackets_Aux" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_name( n5, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_call( n9 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n9 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      refalrts::link_brackets( n2, n8 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n3, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eScanned_b_1;
    refalrts::Iter eScanned_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CalcSavedBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eScanned_b_1;
    refalrts::Iter eScanned_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter eScanned_b_2;
    refalrts::Iter eScanned_e_2;
    refalrts::Iter sNum_2;
    refalrts::Iter sNum_3;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eIndex_b_3;
    refalrts::Iter eIndex_e_3;
    refalrts::Iter eCommands_b_2;
    refalrts::Iter eCommands_e_2;
    // (~1 e.Scanned (~2 &CmdOpenedE &AlgLeft s.Num 'e e.Index )~2 )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eScanned_b_2, eScanned_e_2, eScanned_b_1, eScanned_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eCommands_b_2, eCommands_e_2, eCommands_b_1, eCommands_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & CalcSavedBrackets, "CalcSavedBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
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
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n26 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eCommands_b_2, eCommands_e_2 );
    refalrts::link_brackets( n2, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n3, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n7, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n17, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNum_3 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n10, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sNum_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_b_2, eScanned_e_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Brackets_Intersect(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult CalcSavedBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eScanned_b_1;
    refalrts::Iter eScanned_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Brackets_Intersect, "Brackets_Intersect" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n11, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
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
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sBracketNum_1;
    // (~1 &CmdEmpty s.BracketNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdEmpty, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sBracketNum_1;
    refalrts::Iter sInnerNum_1;
    refalrts::Iter sDirection_1;
    // (~1 &CmdBrackets s.Direction s.BracketNum s.InnerNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdBrackets, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sBracketNum_1;
    refalrts::Iter sCommand_1;
    refalrts::Iter sDirection_1;
    refalrts::Iter eInfo_b_1;
    refalrts::Iter eInfo_e_1;
    // (~1 s.Command s.Direction s.BracketNum e.Info )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    eInfo_b_1 = bb_1;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_1;
    refalrts::use( eInfo_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eUnique_b_1;
    refalrts::Iter eUnique_e_1;
    refalrts::Iter sRepeated_1;
    refalrts::Iter eMiddle_b_1;
    refalrts::Iter eMiddle_e_1;
    refalrts::Iter eRest_b_1;
    refalrts::Iter eRest_e_1;
    refalrts::Iter sRepeated_2;
    // e.Unique s.Repeated e.Middle s.Repeated e.Rest
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eUnique_b_1 = bb_0_stk,
        eUnique_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eUnique_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eUnique_oe_1, be_0 )
    ) {
      bb_0 = eUnique_oe_1;
      eUnique_b_1 = bb_0_stk;
      eUnique_e_1 = eUnique_oe_1;
      refalrts::move_right( eUnique_b_1, eUnique_e_1 );
      if( ! refalrts::svar_left( sRepeated_1, bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eMiddle_b_1 = bb_0_stk,
          eMiddle_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eMiddle_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eMiddle_oe_1, be_0 )
      ) {
        bb_0 = eMiddle_oe_1;
        eMiddle_b_1 = bb_0_stk;
        eMiddle_e_1 = eMiddle_oe_1;
        refalrts::move_right( eMiddle_b_1, eMiddle_e_1 );
        if( ! refalrts::repeated_stvar_left( sRepeated_2, sRepeated_1, bb_0, be_0 ) ) 
          continue;
        eRest_b_1 = bb_0;
        refalrts::use( eRest_b_1 );
        eRest_e_1 = be_0;
        refalrts::use( eRest_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & Brackets_Set, "Brackets_Set" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_close_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n2 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eRest_b_1, eRest_e_1 );
        res = refalrts::splice_evar( res, eMiddle_b_1, eMiddle_e_1 );
        res = refalrts::splice_stvar( res, sRepeated_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, eUnique_b_1, eUnique_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eUnique_b_1;
    refalrts::Iter eUnique_e_1;
    // e.Unique
    eUnique_b_1 = bb_0;
    refalrts::use( eUnique_b_1 );
    eUnique_e_1 = be_0;
    refalrts::use( eUnique_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eUnique_b_1, eUnique_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Brackets_Intersect(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sCommon_1;
    refalrts::Iter eSet1_E_b_1;
    refalrts::Iter eSet1_E_e_1;
    refalrts::Iter eSet2_B_b_1;
    refalrts::Iter eSet2_B_e_1;
    refalrts::Iter eSet2_E_b_1;
    refalrts::Iter eSet2_E_e_1;
    refalrts::Iter eSet1_B_b_1;
    refalrts::Iter eSet1_B_e_1;
    refalrts::Iter sCommon_2;
    // (~1 e.Set1_B s.Common e.Set1_E )~1 (~2 e.Set2_B s.Common e.Set2_E )~2
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
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::svar_left( sCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( sCommon_2, sCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & Brackets_Intersect, "Brackets_Intersect" ) )
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
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_stvar( res, sCommon_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eSet1_b_1;
    refalrts::Iter eSet1_e_1;
    refalrts::Iter eSet2_b_1;
    refalrts::Iter eSet2_e_1;
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eTail_b_1;
    refalrts::Iter eTail_e_1;
    refalrts::Iter sNumber_1;
    // (~1 &TkOpenBracket s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '~' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eTail_b_1;
    refalrts::Iter eTail_e_1;
    refalrts::Iter sNumber_1;
    // (~1 &TkCloseBracket s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkCloseBracket, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '~' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eTail_b_1;
    refalrts::Iter eTail_e_1;
    refalrts::Iter sChar_1;
    // (~1 &TkChar s.Char )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & TkChar, "TkChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eTail_b_1;
    refalrts::Iter eTail_e_1;
    refalrts::Iter sNumber_1;
    // (~1 &TkNumber s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkNumber, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eName_b_1;
    refalrts::Iter eName_e_1;
    refalrts::Iter eTail_b_1;
    refalrts::Iter eTail_e_1;
    // (~1 &TkName e.Name )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkName, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eTail_b_1;
    refalrts::Iter eTail_e_1;
    refalrts::Iter sMode_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 &TkVariable s.Mode e.Index )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\n'
    if( ! refalrts::char_left( '\n', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'n' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\t'
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\\'
    if( ! refalrts::char_left( '\\', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\''
    if( ! refalrts::char_left( '\'', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\"'
    if( ! refalrts::char_left( '"', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sOther_1;
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sOther_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eTail_b_1;
    refalrts::Iter eTail_e_1;
    refalrts::Iter sChar_1;
    // (~1 &TkChar s.Char )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eOther_b_1;
    refalrts::Iter eOther_e_1;
    // e.Other
    eOther_b_1 = bb_0;
    refalrts::use( eOther_b_1 );
    eOther_e_1 = be_0;
    refalrts::use( eOther_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eOther_b_1, eOther_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtAlloc(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtInsert(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtBrackets(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtInsertVar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StChar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StName(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StNumber(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StOpenBracket(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StCloseBracket(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StOpenCall(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StCloseCall(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StLink(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StStack(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult TkOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult_Commands(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sValue_1;
    refalrts::Iter sCounter_2;
    refalrts::Iter sCounter_3;
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 &TkChar s.Value )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkChar, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sValue_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StChar, "StChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sValue_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eName_b_1;
    refalrts::Iter eName_e_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sCounter_2;
    refalrts::Iter sCounter_3;
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 &TkName e.Name )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkName, bb_3, be_3 ) ) 
      break;
    eName_b_1 = bb_3;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_3;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StName, "StName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sNumber_1;
    refalrts::Iter sCounter_2;
    refalrts::Iter sCounter_3;
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 &TkNumber s.Number )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkNumber, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StNumber, "StNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sCounter_2;
    refalrts::Iter sCounter_3;
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 &TkOpenBracket s.Num )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StOpenBracket, "StOpenBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sCounter_2;
    refalrts::Iter sCounter_3;
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 &TkOpenCall s.Num )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenCall, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StOpenCall, "StOpenCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter eCommands_B_b_1;
    refalrts::Iter eCommands_B_e_1;
    refalrts::Iter eCommands_E_b_1;
    refalrts::Iter eCommands_E_e_1;
    refalrts::Iter sOpenCounter_1;
    refalrts::Iter sOpenCounter_2;
    refalrts::Iter sCounter_2;
    refalrts::Iter sCounter_3;
    refalrts::Iter sCounter_4;
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 &CtAlloc &StOpenBracket s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 &TkCloseBracket s.Num )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkCloseBracket, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & CtAlloc, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::function_left( & StOpenBracket, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sOpenCounter_2, sOpenCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & StOpenBracket, "StOpenBracket" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & StCloseBracket, "StCloseBracket" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & StLink, "StLink" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_call( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_close_call( n24 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n24 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      refalrts::push_stack( n23 );
      refalrts::push_stack( n21 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sCounter_4 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n4, n20 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n16, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sCounter_3 );
      res = refalrts::splice_stvar( res, sOpenCounter_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n13, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sCounter_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n9, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sNum_1;
    refalrts::Iter sNum_2;
    refalrts::Iter eCommands_B_b_1;
    refalrts::Iter eCommands_B_e_1;
    refalrts::Iter eCommands_E_b_1;
    refalrts::Iter eCommands_E_e_1;
    refalrts::Iter sOpenCounter_1;
    refalrts::Iter sOpenCounter_2;
    refalrts::Iter sCounter_2;
    refalrts::Iter sCounter_3;
    refalrts::Iter sCounter_4;
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 &CtAlloc &StOpenCall s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 &TkCloseCall s.Num )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkCloseCall, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & CtAlloc, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::function_left( & StOpenCall, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sOpenCounter_2, sOpenCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & StOpenCall, "StOpenCall" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & StCloseCall, "StCloseCall" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & StStack, "StStack" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & StStack, "StStack" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_close_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_open_call( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_call( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_call( n28 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n28 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      refalrts::push_stack( n27 );
      refalrts::push_stack( n25 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_stvar( res, sCounter_4 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      refalrts::link_brackets( n4, n24 );
      res = refalrts::splice_elem( res, n24 );
      refalrts::link_brackets( n20, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sCounter_3 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n16, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sOpenCounter_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n13, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sCounter_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n9, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sMode_1;
    refalrts::Iter sMode_2;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    refalrts::Iter eVars_B_b_1;
    refalrts::Iter eVars_B_e_1;
    refalrts::Iter eVars_E_b_1;
    refalrts::Iter eVars_E_e_1;
    refalrts::Iter sUsings_1;
    refalrts::Iter sUsings_2;
    // (~1 e.Vars_B (~2 s.Usings s.Mode e.Index )~2 e.Vars_E )~1 (~3 e.Commands )~3 s.Counter (~4 &TkVariable s.Mode e.Index )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_3;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_3;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) ) 
      break;
    eIndex_b_1 = bb_4;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_4;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVars_B_b_1 = bb_1_stk,
        eVars_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVars_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVars_B_oe_1, be_1 )
    ) {
      bb_1 = eVars_B_oe_1;
      eVars_B_b_1 = bb_1_stk;
      eVars_B_e_1 = eVars_B_oe_1;
      refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      eVars_E_b_1 = bb_1;
      refalrts::use( eVars_E_b_1 );
      eVars_E_e_1 = be_1;
      refalrts::use( eVars_E_e_1 );
      if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_name( n5, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
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
      if( ! refalrts::alloc_name( n11, & CtInsertVar, "CtInsertVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_call( n14 ) )
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
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      refalrts::link_brackets( n9, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      refalrts::push_stack( n14 );
      refalrts::push_stack( n12 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sUsings_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n2, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
      refalrts::link_brackets( n3, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n4 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_stvar( res, sUsings_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sCounter_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    refalrts::Iter sMode_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter sMode_2;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 &TkVariable s.Mode e.Index )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkVariable, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_3, be_3 ) ) 
      break;
    eIndex_b_1 = bb_3;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_3;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 1UL ) )
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
    if( ! refalrts::alloc_name( n9, & CtInsertVar, "CtInsertVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_number( n10, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    refalrts::link_brackets( n7, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    refalrts::Iter sCounter_1;
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenResult_Commands, "GenResult_Commands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ConvertCommad(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertCommands_Separated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SeparateAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eAllocates_b_1;
    refalrts::Iter eAllocates_e_1;
    refalrts::Iter eInfo_b_1;
    refalrts::Iter eInfo_e_1;
    // (~1 e.Allocates )~1 (~2 &CtAlloc e.Info )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eInfo_b_1 = bb_2;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_2;
    refalrts::use( eInfo_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eAllocates_b_1;
    refalrts::Iter eAllocates_e_1;
    refalrts::Iter tOther_1;
    // (~1 e.Allocates )~1 t.Other
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    if( ! refalrts::tvar_left( tOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, tOther_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenResult_Commands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eCommands_b_1;
    refalrts::Iter eCommands_e_1;
    // e.Commands
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ConvertCommands_Separated, "ConvertCommands_Separated" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & SeparateAllocates, "SeparateAllocates" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n5, n6 );
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
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertCommands_Separated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eAllocates_b_1;
    refalrts::Iter eAllocates_e_1;
    refalrts::Iter eOtherCommands_b_1;
    refalrts::Iter eOtherCommands_e_1;
    // (~1 e.Allocates )~1 e.OtherCommands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eOtherCommands_b_1 = bb_0;
    refalrts::use( eOtherCommands_b_1 );
    eOtherCommands_e_1 = be_0;
    refalrts::use( eOtherCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ConvertAllocates, "ConvertAllocates" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & ConvertCommand, "ConvertCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eOtherCommands_b_1, eOtherCommands_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter tFirst_1;
    refalrts::Iter tLast_1;
    refalrts::Iter eMedium_b_1;
    refalrts::Iter eMedium_e_1;
    // t.First e.Medium t.Last
    if( ! refalrts::tvar_left( tFirst_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_right( tLast_1, bb_0, be_0 ) ) 
      break;
    eMedium_b_1 = bb_0;
    refalrts::use( eMedium_b_1 );
    eMedium_e_1 = be_0;
    refalrts::use( eMedium_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, tFirst_1 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eMedium_b_1, eMedium_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tLast_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter tOne_1;
    // t.One
    if( ! refalrts::tvar_left( tOne_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tOne_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdAllocateElem(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdLinkBrackets(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdPushStack(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdInsertElem(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdInsertEVar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElChar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElName(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElNumber(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElOpenBracket(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElCloseBracket(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElOpenCall(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElCloseCall(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElElem(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElSTVar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ElemType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sChar_1;
    // &StChar s.Char
    if( ! refalrts::function_left( & StChar, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElChar, "ElChar" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eName_b_1;
    refalrts::Iter eName_e_1;
    // &StName e.Name
    if( ! refalrts::function_left( & StName, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElName, "ElName" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sNumber_1;
    // &StNumber s.Number
    if( ! refalrts::function_left( & StNumber, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElNumber, "ElNumber" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sNum_1;
    // &StOpenBracket s.Num
    if( ! refalrts::function_left( & StOpenBracket, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElOpenBracket, "ElOpenBracket" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sNum_1;
    // &StCloseBracket s.Num
    if( ! refalrts::function_left( & StCloseBracket, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElCloseBracket, "ElCloseBracket" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sNum_1;
    // &StOpenCall s.Num
    if( ! refalrts::function_left( & StOpenCall, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElOpenCall, "ElOpenCall" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sNum_1;
    // &StCloseCall s.Num
    if( ! refalrts::function_left( & StCloseCall, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElCloseCall, "ElCloseCall" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ConvertAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sType_1;
    refalrts::Iter sNumber_1;
    refalrts::Iter eValue_b_1;
    refalrts::Iter eValue_e_1;
    // (~1 &CtAlloc s.Type s.Number e.Value )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sType_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    eValue_b_1 = bb_1;
    refalrts::use( eValue_b_1 );
    eValue_e_1 = be_1;
    refalrts::use( eValue_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ElemType, "ElemType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    res = refalrts::splice_stvar( res, sType_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ConvertCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sNumber_1;
    // (~1 &CtInsert s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsert, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElElem, "ElElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sUsings_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 &CtInsertVar s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdInsertEVar, "CmdInsertEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sUsings_1;
    refalrts::Iter sSTMode_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 &CtInsertVar s.Usings s.STMode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sSTMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElSTVar, "ElSTVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sSTMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sNumber_1;
    // (~1 &CtBrackets &StStack s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StStack, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdPushStack, "CmdPushStack" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sLeftNumber_1;
    refalrts::Iter sRightNumber_1;
    // (~1 &CtBrackets &StLink s.LeftNumber s.RightNumber )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StLink, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLeftNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sRightNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdLinkBrackets, "CmdLinkBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRightNumber_1 );
    res = refalrts::splice_stvar( res, sLeftNumber_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GeneralizeResult_Vars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter ePatternVars_b_1;
    refalrts::Iter ePatternVars_e_1;
    refalrts::Iter ePatternCommands_b_1;
    refalrts::Iter ePatternCommands_e_1;
    refalrts::Iter eResultVars_b_1;
    refalrts::Iter eResultVars_e_1;
    refalrts::Iter eResultCommands_b_1;
    refalrts::Iter eResultCommands_e_1;
    // (~1 e.PatternVars )~1 (~2 e.PatternCommands )~2 (~3 e.ResultVars )~3 (~4 e.ResultCommands )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    ePatternCommands_b_1 = bb_2;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_2;
    refalrts::use( ePatternCommands_e_1 );
    eResultVars_b_1 = bb_3;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_3;
    refalrts::use( eResultVars_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GeneralizeResult_Vars, "GeneralizeResult_Vars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
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
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sMode_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 1 s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::number_left( 1UL, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sUsing_1;
    refalrts::Iter sMode_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    refalrts::Iter sUsing_2;
    refalrts::Iter sMode_2;
    refalrts::Iter eIndex_b_2;
    refalrts::Iter eIndex_e_2;
    // (~1 s.Using s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsing_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sUsing_2, sUsing_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_stvar( res, sUsing_2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsing_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eVars_b_1;
    refalrts::Iter eVars_e_1;
    // e.Vars
    eVars_b_1 = bb_0;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_0;
    refalrts::use( eVars_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GeneralizeResult_CopyVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GeneralizeResult_Vars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter ePatternVars_b_1;
    refalrts::Iter ePatternVars_e_1;
    refalrts::Iter eResultVars_b_1;
    refalrts::Iter eResultVars_e_1;
    refalrts::Iter ePatternCommands_b_1;
    refalrts::Iter ePatternCommands_e_1;
    refalrts::Iter eResultCommands_b_1;
    refalrts::Iter eResultCommands_e_1;
    refalrts::Iter ePatternVars_b_2;
    refalrts::Iter ePatternVars_e_2;
    refalrts::Iter eResultVars_b_2;
    refalrts::Iter eResultVars_e_2;
    // (~1 e.PatternVars )~1 (~2 e.ResultVars )~2 (~3 e.PatternCommands )~3 (~4 e.ResultCommands )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    eResultVars_b_1 = bb_2;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_2;
    refalrts::use( eResultVars_e_1 );
    ePatternCommands_b_1 = bb_3;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_3;
    refalrts::use( ePatternCommands_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( ePatternVars_b_2, ePatternVars_e_2, ePatternVars_b_1, ePatternVars_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResultVars_b_2, eResultVars_e_2, eResultVars_b_1, eResultVars_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GeneralizeResult_CopyVars, "GeneralizeResult_CopyVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & VarSetUnion, "VarSetUnion" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & VarSetDifference, "VarSetDifference" ) )
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
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n13, n21 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, ePatternVars_b_2, ePatternVars_e_2 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eResultVars_b_2, eResultVars_e_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eSet1_B_b_1;
    refalrts::Iter eSet1_B_e_1;
    refalrts::Iter tCommon_1;
    refalrts::Iter eSet1_E_b_1;
    refalrts::Iter eSet1_E_e_1;
    refalrts::Iter eSet2_B_b_1;
    refalrts::Iter eSet2_B_e_1;
    refalrts::Iter eSet2_E_b_1;
    refalrts::Iter eSet2_E_e_1;
    refalrts::Iter tCommon_2;
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
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
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & VarSetUnion, "VarSetUnion" ) )
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
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_stvar( res, tCommon_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eSet1_b_1;
    refalrts::Iter eSet1_e_1;
    refalrts::Iter eSet2_b_1;
    refalrts::Iter eSet2_e_1;
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eSet2_b_1, eSet2_e_1 );
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eSet1_B_b_1;
    refalrts::Iter eSet1_B_e_1;
    refalrts::Iter eSet1_E_b_1;
    refalrts::Iter eSet1_E_e_1;
    refalrts::Iter eSet2_B_b_1;
    refalrts::Iter eSet2_B_e_1;
    refalrts::Iter eSet2_E_b_1;
    refalrts::Iter eSet2_E_e_1;
    refalrts::Iter tCommon_1;
    refalrts::Iter tCommon_2;
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
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
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & VarSetDifference, "VarSetDifference" ) )
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
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eSet1_b_1;
    refalrts::Iter eSet1_e_1;
    refalrts::Iter eSet2_b_1;
    refalrts::Iter eSet2_e_1;
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult CmdEmptyResult(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdReturnResult(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GeneralizeResult_CopyVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eCommonVars_b_1;
    refalrts::Iter eCommonVars_e_1;
    refalrts::Iter ePattern_b_1;
    refalrts::Iter ePattern_e_1;
    refalrts::Iter eCopiedVars_b_1;
    refalrts::Iter eCopiedVars_e_1;
    refalrts::Iter eResult_b_1;
    refalrts::Iter eResult_e_1;
    // (~1 e.CommonVars )~1 (~2 e.Pattern )~2 (~3 e.CopiedVars )~3 (~4 e.Result )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eCommonVars_b_1 = bb_1;
    refalrts::use( eCommonVars_b_1 );
    eCommonVars_e_1 = be_1;
    refalrts::use( eCommonVars_e_1 );
    ePattern_b_1 = bb_2;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_2;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_3;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_3;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_4;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_4;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & MakeDeclaration, "MakeDeclaration" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & CmdEmptyResult, "CmdEmptyResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & MakeCopyVar, "MakeCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdReturnResult, "CmdReturnResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eCommonVars_b_1, eCommonVars_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdDeclareEVar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdDeclareVar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sUsings_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdDeclareEVar, "CmdDeclareEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sUsings_1;
    refalrts::Iter sMode_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdDeclareVar, "CmdDeclareVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdCopyEVar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdCopyVar(refalrts::Iter, refalrts::Iter) {
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sUsings_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdCopyEVar, "CmdCopyEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sUsings_1;
    refalrts::Iter sMode_1;
    refalrts::Iter eIndex_b_1;
    refalrts::Iter eIndex_e_1;
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdCopyVar, "CmdCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

