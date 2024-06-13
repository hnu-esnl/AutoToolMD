/*
 * File: plook_u32u8_even0cka.c
 *
 * Code generated for Simulink model 'Win_Ctrl'.
 *
 * Model version                  : 1.190
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 22 20:31:46 2022
 */

#include "rtwtypes.h"
#include "plook_u32u8_even0cka.h"

uint32 plook_u32u8_even0cka(uint8 u, uint8 bp0, uint32 maxIndex)
{
  uint32 bpIndex;
  uint8 uAdjust;

  /* Prelookup - Index only
     Index Search method: 'even'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp0) {
    bpIndex = 0U;
  } else {
    uAdjust = (uint8)((uint32)u - bp0);
    if (uAdjust < maxIndex) {
      bpIndex = uAdjust;
    } else {
      bpIndex = maxIndex;
    }
  }

  return bpIndex;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
