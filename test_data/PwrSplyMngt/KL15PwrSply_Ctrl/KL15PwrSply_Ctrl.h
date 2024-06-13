/*
 * File: KL15PwrSply_Ctrl.h
 *
 * Code generated for Simulink model 'KL15PwrSply_Ctrl'.
 *
 * Model version                  : 1.106
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 12 23:48:19 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_KL15PwrSply_Ctrl_h_
#define RTW_HEADER_KL15PwrSply_Ctrl_h_
#ifndef KL15PwrSply_Ctrl_COMMON_INCLUDES_
# define KL15PwrSply_Ctrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_KL15PwrSply_Ctrl.h"
#endif                                 /* KL15PwrSply_Ctrl_COMMON_INCLUDES_ */

#include "KL15PwrSply_Ctrl_types.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define KL15PwrSply_Ctrl_VAR
#define KL15PwrSply_Ctrl_CODE_LOCAL

/* Block signals (default storage) */
typedef struct tag_B_KL15PwrSply_Ctrl_T {
  uint32 TimeModeTiming;               /* '<S31>/TimeMode' */
  uint32 NetSleepTiming;               /* '<S31>/NetSleep_2sDelay' */
  uint32 NetSleepTiming_c;             /* '<S31>/NetSleep_16minDelay' */
  uint32 LostCommTiming;               /* '<S31>/LostComm' */
  uint32 TimeModeTiming_l;             /* '<S30>/TimeMode' */
  uint32 NetSleepTiming_b;             /* '<S30>/NetSleep_2sDelay' */
  uint32 NetSleepTiming_l;             /* '<S30>/NetSleep_16minDelay' */
  uint32 LostCommTiming_o;             /* '<S30>/LostComm' */
  uint32 TimeModeTiming_f;             /* '<S29>/TimeMode' */
  uint32 NetSleepTiming_d;             /* '<S29>/NetSleep_2sDelay' */
  uint32 NetSleepTiming_m;             /* '<S29>/NetSleep_16minDelay' */
  uint32 LostCommTiming_p;             /* '<S29>/LostComm' */
  uint32 TimeModeTiming_a;             /* '<S28>/TimeMode' */
  uint32 NetSleepTiming_e;             /* '<S28>/NetSleep_2sDelay' */
  uint32 NetSleepTiming_a;             /* '<S28>/NetSleep_16minDelay' */
  uint32 LostCommTiming_d;             /* '<S28>/LostComm' */
  uint32 TimeModeTiming_k;             /* '<S27>/TimeMode' */
  uint32 NetSleepTiming_p;             /* '<S27>/NetSleep' */
  uint32 LostCommTiming_f;             /* '<S27>/LostComm' */
  uint32 TimeModeTiming_p;             /* '<S26>/TimeMode' */
  uint32 NetSleepTiming_a1;            /* '<S26>/NetSleep' */
  uint32 LostCommTiming_pw;            /* '<S26>/LostComm' */
  uint32 TimeModeTiming_m;             /* '<S25>/TimeMode' */
  uint32 NetSleepTiming_db;            /* '<S25>/NetSleep' */
  uint32 LostCommTiming_pj;            /* '<S25>/LostComm' */
  uint32 TimeModeTiming_mt;            /* '<S24>/TimeMode' */
  uint32 NetSleepTiming_i;             /* '<S24>/NetSleep' */
  uint32 LostCommTiming_a;             /* '<S24>/LostComm' */
  uint32 TimeModeTiming_fc;            /* '<S23>/TimeMode' */
  uint32 NetSleepTiming_ll;            /* '<S23>/NetSleep' */
  uint32 LostCommTiming_k;             /* '<S23>/LostComm' */
  uint32 TimeModeTiming_pr;            /* '<S22>/TimeMode' */
  uint32 NetSleepTiming_ce;            /* '<S22>/NetSleep' */
  uint32 LostCommTiming_b;             /* '<S22>/LostComm' */
  uint32 TimeModeTiming_o;             /* '<S21>/TimeMode' */
  uint32 NetSleepTiming_j;             /* '<S21>/NetSleep' */
  uint32 LostCommTiming_ps;            /* '<S21>/LostComm' */
  uint32 TimeModeTiming_g;             /* '<S20>/TimeMode' */
  uint32 NetSleepTiming_iq;            /* '<S20>/NetSleep' */
  uint32 LostCommTiming_pb;            /* '<S20>/LostComm' */
  uint32 TimeModeTiming_i;             /* '<S19>/TimeMode' */
  uint32 NetSleepTiming_bm;            /* '<S19>/NetSleep' */
  uint32 LostCommTiming_j;             /* '<S19>/LostComm' */
  uint32 TimeModeTiming_b;             /* '<S18>/TimeMode' */
  uint32 NetSleepTiming_ib;            /* '<S18>/NetSleep' */
  uint32 LostCommTiming_pv;            /* '<S18>/LostComm' */
  uint32 TimeModeTiming_at;            /* '<S17>/TimeMode' */
  uint32 NetSleepTiming_h;             /* '<S17>/NetSleep' */
  uint32 LostCommTiming_am;            /* '<S17>/LostComm' */
  uint32 TimeModeTiming_n;             /* '<S16>/TimeMode' */
  uint32 NetSleepTiming_lf;            /* '<S16>/NetSleep' */
  uint32 LostCommTiming_ov;            /* '<S16>/LostComm' */
  uint32 TimeModeTiming_af;            /* '<S15>/TimeMode' */
  uint32 NetSleepTiming_j3;            /* '<S15>/NetSleep' */
  uint32 LostCommTiming_g;             /* '<S15>/LostComm' */
  uint32 TimeModeTiming_mc;            /* '<S14>/TimeMode' */
  uint32 NetSleepTiming_pt;            /* '<S14>/NetSleep' */
  uint32 LostCommTiming_c;             /* '<S14>/LostComm' */
  uint32 TimeModeTiming_c;             /* '<S13>/TimeMode' */
  uint32 NetSleepTiming_m5;            /* '<S13>/NetSleep' */
  uint32 LostCommTiming_bk;            /* '<S13>/LostComm' */
  uint32 TimeModeTiming_am;            /* '<S12>/TimeMode' */
  uint32 NetSleepTiming_ji;            /* '<S12>/NetSleep' */
  uint32 LostCommTiming_e;             /* '<S12>/LostComm' */
  uint32 TimeModeTiming_d;             /* '<S11>/TimeMode' */
  uint32 NetSleepTiming_bh;            /* '<S11>/NetSleep' */
  uint32 LostCommTiming_n;             /* '<S11>/LostComm' */
  uint32 TimeModeTiming_h;             /* '<S10>/TimeMode' */
  uint32 NetSleepTiming_iu;            /* '<S10>/NetSleep' */
  uint32 LostCommTiming_i;             /* '<S10>/LostComm' */
  uint32 TimeModeTiming_pl;            /* '<S9>/TimeMode' */
  uint32 NetSleepTiming_o;             /* '<S9>/NetSleep' */
  uint32 LostCommTiming_fr;            /* '<S9>/LostComm' */
  uint32 TimeModeTiming_ab;            /* '<S8>/TimeMode' */
  uint32 NetSleepTiming_jo;            /* '<S8>/NetSleep' */
  uint32 LostCommTiming_io;            /* '<S8>/LostComm' */
  uint32 TimeModeTiming_hi;            /* '<S7>/TimeMode' */
  uint32 NetSleepTiming_k;             /* '<S7>/NetSleep' */
  uint32 LostCommTiming_e3;            /* '<S7>/LostComm' */
  uint32 TimeModeTiming_il;            /* '<S6>/TimeMode' */
  uint32 NetSleepTiming_ez;            /* '<S6>/NetSleep' */
  uint32 LostCommTiming_h;             /* '<S6>/LostComm' */
  uint32 TimeModeTiming_nx;            /* '<S5>/TimeMode' */
  uint32 NetSleepTiming_h2;            /* '<S5>/NetSleep' */
  uint32 LostCommTiming_oa;            /* '<S5>/LostComm' */
  uint32 TimeModeTiming_aw;            /* '<S4>/TimeMode' */
  uint32 NetSleepTiming_mk;            /* '<S4>/NetSleep' */
  uint32 LostCommTiming_bn;            /* '<S4>/LostComm' */
  uint32 TimeModeTiming_dt;            /* '<S3>/TimeMode' */
  uint32 NetSleepTiming_cn;            /* '<S3>/NetSleep' */
  uint32 LostCommTiming_id;            /* '<S3>/LostComm' */
  uint8 TimeModeCoornReq;              /* '<S31>/TimeMode' */
  uint8 NetSleepCoornReq;              /* '<S31>/NetSleep_2sDelay' */
  uint8 NetSleepCoornReq_c;            /* '<S31>/NetSleep_16minDelay' */
  uint8 LostCommCoornReq;              /* '<S31>/LostComm' */
  uint8 TimeModeCoornReq_m;            /* '<S30>/TimeMode' */
  uint8 NetSleepCoornReq_k;            /* '<S30>/NetSleep_2sDelay' */
  uint8 NetSleepCoornReq_l;            /* '<S30>/NetSleep_16minDelay' */
  uint8 LostCommCoornReq_b;            /* '<S30>/LostComm' */
  uint8 TimeModeCoornReq_mt;           /* '<S29>/TimeMode' */
  uint8 NetSleepCoornReq_m;            /* '<S29>/NetSleep_2sDelay' */
  uint8 NetSleepCoornReq_ki;           /* '<S29>/NetSleep_16minDelay' */
  uint8 LostCommCoornReq_i;            /* '<S29>/LostComm' */
  uint8 TimeModeCoornReq_h;            /* '<S28>/TimeMode' */
  uint8 NetSleepCoornReq_h;            /* '<S28>/NetSleep_2sDelay' */
  uint8 NetSleepCoornReq_b;            /* '<S28>/NetSleep_16minDelay' */
  uint8 LostCommCoornReq_l;            /* '<S28>/LostComm' */
  uint8 TimeModeCoornReq_c;            /* '<S27>/TimeMode' */
  uint8 NetSleepCoornReq_n;            /* '<S27>/NetSleep' */
  uint8 LostCommCoornReq_n;            /* '<S27>/LostComm' */
  uint8 TimeModeCoornReq_o;            /* '<S26>/TimeMode' */
  uint8 NetSleepCoornReq_j;            /* '<S26>/NetSleep' */
  uint8 LostCommCoornReq_p;            /* '<S26>/LostComm' */
  uint8 TimeModeCoornReq_i;            /* '<S25>/TimeMode' */
  uint8 NetSleepCoornReq_he;           /* '<S25>/NetSleep' */
  uint8 LostCommCoornReq_pr;           /* '<S25>/LostComm' */
  uint8 TimeModeCoornReq_ir;           /* '<S24>/TimeMode' */
  uint8 NetSleepCoornReq_o;            /* '<S24>/NetSleep' */
  uint8 LostCommCoornReq_lf;           /* '<S24>/LostComm' */
  uint8 TimeModeCoornReq_ca;           /* '<S23>/TimeMode' */
  uint8 NetSleepCoornReq_oy;           /* '<S23>/NetSleep' */
  uint8 LostCommCoornReq_bi;           /* '<S23>/LostComm' */
  uint8 TimeModeCoornReq_d;            /* '<S22>/TimeMode' */
  uint8 NetSleepCoornReq_b0;           /* '<S22>/NetSleep' */
  uint8 LostCommCoornReq_f;            /* '<S22>/LostComm' */
  uint8 TimeModeCoornReq_j;            /* '<S21>/TimeMode' */
  uint8 NetSleepCoornReq_e;            /* '<S21>/NetSleep' */
  uint8 LostCommCoornReq_g;            /* '<S21>/LostComm' */
  uint8 TimeModeCoornReq_a;            /* '<S20>/TimeMode' */
  uint8 NetSleepCoornReq_i;            /* '<S20>/NetSleep' */
  uint8 LostCommCoornReq_j;            /* '<S20>/LostComm' */
  uint8 TimeModeCoornReq_ib;           /* '<S19>/TimeMode' */
  uint8 NetSleepCoornReq_f;            /* '<S19>/NetSleep' */
  uint8 LostCommCoornReq_p3;           /* '<S19>/LostComm' */
  uint8 TimeModeCoornReq_hj;           /* '<S18>/TimeMode' */
  uint8 NetSleepCoornReq_ok;           /* '<S18>/NetSleep' */
  uint8 LostCommCoornReq_a;            /* '<S18>/LostComm' */
  uint8 TimeModeCoornReq_dw;           /* '<S17>/TimeMode' */
  uint8 NetSleepCoornReq_ib;           /* '<S17>/NetSleep' */
  uint8 LostCommCoornReq_fs;           /* '<S17>/LostComm' */
  uint8 TimeModeCoornReq_j0;           /* '<S16>/TimeMode' */
  uint8 NetSleepCoornReq_my;           /* '<S16>/NetSleep' */
  uint8 LostCommCoornReq_e;            /* '<S16>/LostComm' */
  uint8 TimeModeCoornReq_n;            /* '<S15>/TimeMode' */
  uint8 NetSleepCoornReq_ej;           /* '<S15>/NetSleep' */
  uint8 LostCommCoornReq_h;            /* '<S15>/LostComm' */
  uint8 TimeModeCoornReq_d3;           /* '<S14>/TimeMode' */
  uint8 NetSleepCoornReq_ec;           /* '<S14>/NetSleep' */
  uint8 LostCommCoornReq_ly;           /* '<S14>/LostComm' */
  uint8 TimeModeCoornReq_k;            /* '<S13>/TimeMode' */
  uint8 NetSleepCoornReq_ke;           /* '<S13>/NetSleep' */
  uint8 LostCommCoornReq_ie;           /* '<S13>/LostComm' */
  uint8 TimeModeCoornReq_i3;           /* '<S12>/TimeMode' */
  uint8 NetSleepCoornReq_a;            /* '<S12>/NetSleep' */
  uint8 LostCommCoornReq_jb;           /* '<S12>/LostComm' */
  uint8 TimeModeCoornReq_cc;           /* '<S11>/TimeMode' */
  uint8 NetSleepCoornReq_g;            /* '<S11>/NetSleep' */
  uint8 LostCommCoornReq_o;            /* '<S11>/LostComm' */
  uint8 TimeModeCoornReq_cy;           /* '<S10>/TimeMode' */
  uint8 NetSleepCoornReq_km;           /* '<S10>/NetSleep' */
  uint8 LostCommCoornReq_k;            /* '<S10>/LostComm' */
  uint8 TimeModeCoornReq_cj;           /* '<S9>/TimeMode' */
  uint8 NetSleepCoornReq_p;            /* '<S9>/NetSleep' */
  uint8 LostCommCoornReq_d;            /* '<S9>/LostComm' */
  uint8 TimeModeCoornReq_hd;           /* '<S8>/TimeMode' */
  uint8 NetSleepCoornReq_nn;           /* '<S8>/NetSleep' */
  uint8 LostCommCoornReq_c;            /* '<S8>/LostComm' */
  uint8 TimeModeCoornReq_mc;           /* '<S7>/TimeMode' */
  uint8 NetSleepCoornReq_d;            /* '<S7>/NetSleep' */
  uint8 LostCommCoornReq_nk;           /* '<S7>/LostComm' */
  uint8 TimeModeCoornReq_f;            /* '<S6>/TimeMode' */
  uint8 NetSleepCoornReq_md;           /* '<S6>/NetSleep' */
  uint8 LostCommCoornReq_hr;           /* '<S6>/LostComm' */
  uint8 TimeModeCoornReq_av;           /* '<S5>/TimeMode' */
  uint8 NetSleepCoornReq_h3;           /* '<S5>/NetSleep' */
  uint8 LostCommCoornReq_m;            /* '<S5>/LostComm' */
  uint8 TimeModeCoornReq_d3u;          /* '<S4>/TimeMode' */
  uint8 NetSleepCoornReq_a5;           /* '<S4>/NetSleep' */
  uint8 LostCommCoornReq_mp;           /* '<S4>/LostComm' */
  uint8 TimeModeCoornReq_jw;           /* '<S3>/TimeMode' */
  uint8 NetSleepCoornReq_nj;           /* '<S3>/NetSleep' */
  uint8 LostCommCoornReq_e0;           /* '<S3>/LostComm' */
} B_KL15PwrSply_Ctrl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_KL15PwrSply_Ctrl_T {
  uint8 UnitDelay_DSTATE;              /* '<S26>/Unit Delay' */
  uint8 UnitDelay_DSTATE_j;            /* '<S7>/Unit Delay' */
  uint8 UnitDelay_DSTATE_n;            /* '<S8>/Unit Delay' */
  uint8 UnitDelay_DSTATE_c;            /* '<S5>/Unit Delay' */
  uint8 UnitDelay_DSTATE_g;            /* '<S6>/Unit Delay' */
  uint8 UnitDelay_DSTATE_p;            /* '<S9>/Unit Delay' */
  uint8 UnitDelay_DSTATE_d;            /* '<S10>/Unit Delay' */
  uint8 UnitDelay_DSTATE_f;            /* '<S27>/Unit Delay' */
  uint8 UnitDelay_DSTATE_d2;           /* '<S11>/Unit Delay' */
  uint8 UnitDelay_DSTATE_l;            /* '<S12>/Unit Delay' */
  uint8 UnitDelay_DSTATE_e;            /* '<S13>/Unit Delay' */
  uint8 UnitDelay_DSTATE_cr;           /* '<S14>/Unit Delay' */
  uint8 UnitDelay_DSTATE_m;            /* '<S15>/Unit Delay' */
  uint8 UnitDelay_DSTATE_h;            /* '<S16>/Unit Delay' */
  uint8 UnitDelay_DSTATE_m4;           /* '<S17>/Unit Delay' */
  uint8 UnitDelay_DSTATE_b;            /* '<S18>/Unit Delay' */
  uint8 UnitDelay_DSTATE_a;            /* '<S19>/Unit Delay' */
  uint8 UnitDelay_DSTATE_gm;           /* '<S20>/Unit Delay' */
  uint8 UnitDelay_DSTATE_ab;           /* '<S21>/Unit Delay' */
  uint8 UnitDelay_DSTATE_n0;           /* '<S22>/Unit Delay' */
  uint8 UnitDelay_DSTATE_bo;           /* '<S23>/Unit Delay' */
  uint8 UnitDelay_DSTATE_ce;           /* '<S24>/Unit Delay' */
  uint8 UnitDelay_DSTATE_gd;           /* '<S25>/Unit Delay' */
  uint8 UnitDelay_DSTATE_o;            /* '<S28>/Unit Delay' */
  uint8 UnitDelay_DSTATE_ll;           /* '<S29>/Unit Delay' */
  uint8 UnitDelay_DSTATE_hp;           /* '<S3>/Unit Delay' */
  uint8 UnitDelay_DSTATE_i;            /* '<S30>/Unit Delay' */
  uint8 UnitDelay_DSTATE_lb;           /* '<S31>/Unit Delay' */
  uint8 UnitDelay_DSTATE_do;           /* '<S4>/Unit Delay' */
  uint8 is_active_c6_Ctrl_Library;     /* '<S31>/TimeMode' */
  uint8 is_c6_Ctrl_Library;            /* '<S31>/TimeMode' */
  uint8 is_active_c5_Ctrl_Library;     /* '<S31>/NetSleep_2sDelay' */
  uint8 is_c5_Ctrl_Library;            /* '<S31>/NetSleep_2sDelay' */
  uint8 is_active_c7_Ctrl_Library;     /* '<S31>/NetSleep_16minDelay' */
  uint8 is_c7_Ctrl_Library;            /* '<S31>/NetSleep_16minDelay' */
  uint8 is_active_c4_Ctrl_Library;     /* '<S31>/LostComm' */
  uint8 is_c4_Ctrl_Library;            /* '<S31>/LostComm' */
  uint8 is_active_c6_Ctrl_Library_m;   /* '<S30>/TimeMode' */
  uint8 is_c6_Ctrl_Library_g;          /* '<S30>/TimeMode' */
  uint8 is_active_c5_Ctrl_Library_i;   /* '<S30>/NetSleep_2sDelay' */
  uint8 is_c5_Ctrl_Library_j;          /* '<S30>/NetSleep_2sDelay' */
  uint8 is_active_c7_Ctrl_Library_l;   /* '<S30>/NetSleep_16minDelay' */
  uint8 is_c7_Ctrl_Library_l;          /* '<S30>/NetSleep_16minDelay' */
  uint8 is_active_c4_Ctrl_Library_m;   /* '<S30>/LostComm' */
  uint8 is_c4_Ctrl_Library_l;          /* '<S30>/LostComm' */
  uint8 is_active_c6_Ctrl_Library_g;   /* '<S29>/TimeMode' */
  uint8 is_c6_Ctrl_Library_l;          /* '<S29>/TimeMode' */
  uint8 is_active_c5_Ctrl_Library_c;   /* '<S29>/NetSleep_2sDelay' */
  uint8 is_c5_Ctrl_Library_a;          /* '<S29>/NetSleep_2sDelay' */
  uint8 is_active_c7_Ctrl_Library_lx;  /* '<S29>/NetSleep_16minDelay' */
  uint8 is_c7_Ctrl_Library_k;          /* '<S29>/NetSleep_16minDelay' */
  uint8 is_active_c4_Ctrl_Library_l;   /* '<S29>/LostComm' */
  uint8 is_c4_Ctrl_Library_d;          /* '<S29>/LostComm' */
  uint8 is_active_c6_Ctrl_Library_gx;  /* '<S28>/TimeMode' */
  uint8 is_c6_Ctrl_Library_m;          /* '<S28>/TimeMode' */
  uint8 is_active_c5_Ctrl_Library_i1;  /* '<S28>/NetSleep_2sDelay' */
  uint8 is_c5_Ctrl_Library_d;          /* '<S28>/NetSleep_2sDelay' */
  uint8 is_active_c7_Ctrl_Library_e;   /* '<S28>/NetSleep_16minDelay' */
  uint8 is_c7_Ctrl_Library_j;          /* '<S28>/NetSleep_16minDelay' */
  uint8 is_active_c4_Ctrl_Library_mv;  /* '<S28>/LostComm' */
  uint8 is_c4_Ctrl_Library_g;          /* '<S28>/LostComm' */
  uint8 is_active_c10_Ctrl_Library;    /* '<S27>/TimeMode' */
  uint8 is_c10_Ctrl_Library;           /* '<S27>/TimeMode' */
  uint8 is_active_c9_Ctrl_Library;     /* '<S27>/NetSleep' */
  uint8 is_c9_Ctrl_Library;            /* '<S27>/NetSleep' */
  uint8 is_active_c8_Ctrl_Library;     /* '<S27>/LostComm' */
  uint8 is_c8_Ctrl_Library;            /* '<S27>/LostComm' */
  uint8 is_active_c10_Ctrl_Library_f;  /* '<S26>/TimeMode' */
  uint8 is_c10_Ctrl_Library_c;         /* '<S26>/TimeMode' */
  uint8 is_active_c9_Ctrl_Library_i;   /* '<S26>/NetSleep' */
  uint8 is_c9_Ctrl_Library_m;          /* '<S26>/NetSleep' */
  uint8 is_active_c8_Ctrl_Library_c;   /* '<S26>/LostComm' */
  uint8 is_c8_Ctrl_Library_c;          /* '<S26>/LostComm' */
  uint8 is_active_c1_Ctrl_Library;     /* '<S25>/TimeMode' */
  uint8 is_c1_Ctrl_Library;            /* '<S25>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library;     /* '<S25>/NetSleep' */
  uint8 is_c3_Ctrl_Library;            /* '<S25>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library;     /* '<S25>/LostComm' */
  uint8 is_c2_Ctrl_Library;            /* '<S25>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_j;   /* '<S24>/TimeMode' */
  uint8 is_c1_Ctrl_Library_k;          /* '<S24>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_e;   /* '<S24>/NetSleep' */
  uint8 is_c3_Ctrl_Library_m;          /* '<S24>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_b;   /* '<S24>/LostComm' */
  uint8 is_c2_Ctrl_Library_d;          /* '<S24>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_f;   /* '<S23>/TimeMode' */
  uint8 is_c1_Ctrl_Library_o;          /* '<S23>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_n;   /* '<S23>/NetSleep' */
  uint8 is_c3_Ctrl_Library_ms;         /* '<S23>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_d;   /* '<S23>/LostComm' */
  uint8 is_c2_Ctrl_Library_l;          /* '<S23>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_c;   /* '<S22>/TimeMode' */
  uint8 is_c1_Ctrl_Library_d;          /* '<S22>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_h;   /* '<S22>/NetSleep' */
  uint8 is_c3_Ctrl_Library_b;          /* '<S22>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_i;   /* '<S22>/LostComm' */
  uint8 is_c2_Ctrl_Library_n;          /* '<S22>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_k;   /* '<S21>/TimeMode' */
  uint8 is_c1_Ctrl_Library_m;          /* '<S21>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_c;   /* '<S21>/NetSleep' */
  uint8 is_c3_Ctrl_Library_a;          /* '<S21>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_ik;  /* '<S21>/LostComm' */
  uint8 is_c2_Ctrl_Library_o;          /* '<S21>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_i;   /* '<S20>/TimeMode' */
  uint8 is_c1_Ctrl_Library_kl;         /* '<S20>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_f;   /* '<S20>/NetSleep' */
  uint8 is_c3_Ctrl_Library_j;          /* '<S20>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_p;   /* '<S20>/LostComm' */
  uint8 is_c2_Ctrl_Library_k;          /* '<S20>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_b;   /* '<S19>/TimeMode' */
  uint8 is_c1_Ctrl_Library_c;          /* '<S19>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_p;   /* '<S19>/NetSleep' */
  uint8 is_c3_Ctrl_Library_ao;         /* '<S19>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_e;   /* '<S19>/LostComm' */
  uint8 is_c2_Ctrl_Library_h;          /* '<S19>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_d;   /* '<S18>/TimeMode' */
  uint8 is_c1_Ctrl_Library_f;          /* '<S18>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_a;   /* '<S18>/NetSleep' */
  uint8 is_c3_Ctrl_Library_f;          /* '<S18>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_dk;  /* '<S18>/LostComm' */
  uint8 is_c2_Ctrl_Library_e;          /* '<S18>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_o;   /* '<S17>/TimeMode' */
  uint8 is_c1_Ctrl_Library_p;          /* '<S17>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_fx;  /* '<S17>/NetSleep' */
  uint8 is_c3_Ctrl_Library_h;          /* '<S17>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_h;   /* '<S17>/LostComm' */
  uint8 is_c2_Ctrl_Library_g;          /* '<S17>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_m;   /* '<S16>/TimeMode' */
  uint8 is_c1_Ctrl_Library_i;          /* '<S16>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_pk;  /* '<S16>/NetSleep' */
  uint8 is_c3_Ctrl_Library_c;          /* '<S16>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_j;   /* '<S16>/LostComm' */
  uint8 is_c2_Ctrl_Library_hm;         /* '<S16>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_bv;  /* '<S15>/TimeMode' */
  uint8 is_c1_Ctrl_Library_ie;         /* '<S15>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_j;   /* '<S15>/NetSleep' */
  uint8 is_c3_Ctrl_Library_d;          /* '<S15>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_f;   /* '<S15>/LostComm' */
  uint8 is_c2_Ctrl_Library_f;          /* '<S15>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_fo;  /* '<S14>/TimeMode' */
  uint8 is_c1_Ctrl_Library_a;          /* '<S14>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_ff;  /* '<S14>/NetSleep' */
  uint8 is_c3_Ctrl_Library_i;          /* '<S14>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_k;   /* '<S14>/LostComm' */
  uint8 is_c2_Ctrl_Library_a;          /* '<S14>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_jh;  /* '<S13>/TimeMode' */
  uint8 is_c1_Ctrl_Library_iu;         /* '<S13>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_k;   /* '<S13>/NetSleep' */
  uint8 is_c3_Ctrl_Library_ch;         /* '<S13>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_m;   /* '<S13>/LostComm' */
  uint8 is_c2_Ctrl_Library_ey;         /* '<S13>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_d2;  /* '<S12>/TimeMode' */
  uint8 is_c1_Ctrl_Library_fy;         /* '<S12>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_o;   /* '<S12>/NetSleep' */
  uint8 is_c3_Ctrl_Library_n;          /* '<S12>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_jc;  /* '<S12>/LostComm' */
  uint8 is_c2_Ctrl_Library_kh;         /* '<S12>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_n;   /* '<S11>/TimeMode' */
  uint8 is_c1_Ctrl_Library_fr;         /* '<S11>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_jh;  /* '<S11>/NetSleep' */
  uint8 is_c3_Ctrl_Library_l;          /* '<S11>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_a;   /* '<S11>/LostComm' */
  uint8 is_c2_Ctrl_Library_nh;         /* '<S11>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_ny;  /* '<S10>/TimeMode' */
  uint8 is_c1_Ctrl_Library_dk;         /* '<S10>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_ef;  /* '<S10>/NetSleep' */
  uint8 is_c3_Ctrl_Library_k;          /* '<S10>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_c;   /* '<S10>/LostComm' */
  uint8 is_c2_Ctrl_Library_i;          /* '<S10>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_l;   /* '<S9>/TimeMode' */
  uint8 is_c1_Ctrl_Library_b;          /* '<S9>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_i;   /* '<S9>/NetSleep' */
  uint8 is_c3_Ctrl_Library_cu;         /* '<S9>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_bq;  /* '<S9>/LostComm' */
  uint8 is_c2_Ctrl_Library_ho;         /* '<S9>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_o5;  /* '<S8>/TimeMode' */
  uint8 is_c1_Ctrl_Library_l;          /* '<S8>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_fb;  /* '<S8>/NetSleep' */
  uint8 is_c3_Ctrl_Library_hw;         /* '<S8>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_n;   /* '<S8>/LostComm' */
  uint8 is_c2_Ctrl_Library_j;          /* '<S8>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_foo; /* '<S7>/TimeMode' */
  uint8 is_c1_Ctrl_Library_e;          /* '<S7>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_ec;  /* '<S7>/NetSleep' */
  uint8 is_c3_Ctrl_Library_p;          /* '<S7>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_bn;  /* '<S7>/LostComm' */
  uint8 is_c2_Ctrl_Library_b;          /* '<S7>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_mn;  /* '<S6>/TimeMode' */
  uint8 is_c1_Ctrl_Library_kx;         /* '<S6>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_d;   /* '<S6>/NetSleep' */
  uint8 is_c3_Ctrl_Library_jl;         /* '<S6>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_o;   /* '<S6>/LostComm' */
  uint8 is_c2_Ctrl_Library_e5;         /* '<S6>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_bs;  /* '<S5>/TimeMode' */
  uint8 is_c1_Ctrl_Library_c3;         /* '<S5>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_oz;  /* '<S5>/NetSleep' */
  uint8 is_c3_Ctrl_Library_jk;         /* '<S5>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_of;  /* '<S5>/LostComm' */
  uint8 is_c2_Ctrl_Library_ex;         /* '<S5>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_g;   /* '<S4>/TimeMode' */
  uint8 is_c1_Ctrl_Library_g;          /* '<S4>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_ae;  /* '<S4>/NetSleep' */
  uint8 is_c3_Ctrl_Library_ma;         /* '<S4>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_ey;  /* '<S4>/LostComm' */
  uint8 is_c2_Ctrl_Library_lt;         /* '<S4>/LostComm' */
  uint8 is_active_c1_Ctrl_Library_o53; /* '<S3>/TimeMode' */
  uint8 is_c1_Ctrl_Library_bu;         /* '<S3>/TimeMode' */
  uint8 is_active_c3_Ctrl_Library_pr;  /* '<S3>/NetSleep' */
  uint8 is_c3_Ctrl_Library_js;         /* '<S3>/NetSleep' */
  uint8 is_active_c2_Ctrl_Library_ij;  /* '<S3>/LostComm' */
  uint8 is_c2_Ctrl_Library_ot;         /* '<S3>/LostComm' */
} DW_KL15PwrSply_Ctrl_T;

/* Block signals (default storage) */
extern VAR(B_KL15PwrSply_Ctrl_T, KL15PwrSply_Ctrl_VAR) KL15PwrSply_Ctrl_B;

/* Block states (default storage) */
extern VAR(DW_KL15PwrSply_Ctrl_T, KL15PwrSply_Ctrl_VAR) KL15PwrSply_Ctrl_DW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming01;/* '<S1>/Data Store Memory' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming01;/* '<S1>/Data Store Memory1' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming04;/* '<S1>/Data Store Memory10' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming04;/* '<S1>/Data Store Memory11' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming05;/* '<S1>/Data Store Memory12' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming05;/* '<S1>/Data Store Memory13' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming05;/* '<S1>/Data Store Memory14' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming06;/* '<S1>/Data Store Memory15' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming06;/* '<S1>/Data Store Memory16' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming06;/* '<S1>/Data Store Memory17' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming07;/* '<S1>/Data Store Memory18' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming07;/* '<S1>/Data Store Memory19' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming01;/* '<S1>/Data Store Memory2' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming07;/* '<S1>/Data Store Memory20' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming10;/* '<S1>/Data Store Memory21' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming10;/* '<S1>/Data Store Memory22' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming10;/* '<S1>/Data Store Memory23' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming13;/* '<S1>/Data Store Memory24' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming13;/* '<S1>/Data Store Memory25' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming13;/* '<S1>/Data Store Memory26' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming16;/* '<S1>/Data Store Memory27' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming16;/* '<S1>/Data Store Memory28' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming16;/* '<S1>/Data Store Memory29' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming02;/* '<S1>/Data Store Memory3' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming19;/* '<S1>/Data Store Memory30' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming19;/* '<S1>/Data Store Memory31' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming19;/* '<S1>/Data Store Memory32' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming22;/* '<S1>/Data Store Memory33' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming22;/* '<S1>/Data Store Memory34' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming22;/* '<S1>/Data Store Memory35' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming25;/* '<S1>/Data Store Memory36' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming25;/* '<S1>/Data Store Memory37' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming25;/* '<S1>/Data Store Memory38' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming08;/* '<S1>/Data Store Memory39' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming02;/* '<S1>/Data Store Memory4' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming08;/* '<S1>/Data Store Memory40' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming08;/* '<S1>/Data Store Memory41' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming11;/* '<S1>/Data Store Memory42' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming11;/* '<S1>/Data Store Memory43' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming11;/* '<S1>/Data Store Memory44' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming14;/* '<S1>/Data Store Memory45' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming14;/* '<S1>/Data Store Memory46' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming14;/* '<S1>/Data Store Memory47' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming17;/* '<S1>/Data Store Memory48' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming17;/* '<S1>/Data Store Memory49' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming02;/* '<S1>/Data Store Memory5' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming17;/* '<S1>/Data Store Memory50' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming20;/* '<S1>/Data Store Memory51' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming20;/* '<S1>/Data Store Memory52' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming20;/* '<S1>/Data Store Memory53' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming23;/* '<S1>/Data Store Memory54' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming23;/* '<S1>/Data Store Memory55' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming23;/* '<S1>/Data Store Memory56' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming09;/* '<S1>/Data Store Memory57' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming09;/* '<S1>/Data Store Memory58' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming09;/* '<S1>/Data Store Memory59' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming03;/* '<S1>/Data Store Memory6' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming12;/* '<S1>/Data Store Memory60' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming12;/* '<S1>/Data Store Memory61' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming12;/* '<S1>/Data Store Memory62' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming15;/* '<S1>/Data Store Memory63' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming15;/* '<S1>/Data Store Memory64' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming15;/* '<S1>/Data Store Memory65' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming18;/* '<S1>/Data Store Memory66' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming18;/* '<S1>/Data Store Memory67' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming18;/* '<S1>/Data Store Memory68' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming21;/* '<S1>/Data Store Memory69' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming03;/* '<S1>/Data Store Memory7' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming21;/* '<S1>/Data Store Memory70' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming21;/* '<S1>/Data Store Memory71' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming24;/* '<S1>/Data Store Memory72' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming24;/* '<S1>/Data Store Memory73' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming24;/* '<S1>/Data Store Memory74' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming26;/* '<S1>/Data Store Memory75' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2601;/* '<S1>/Data Store Memory76' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming26;/* '<S1>/Data Store Memory77' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2602;/* '<S1>/Data Store Memory78' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming27;/* '<S1>/Data Store Memory79' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming03;/* '<S1>/Data Store Memory8' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2701;/* '<S1>/Data Store Memory80' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming27;/* '<S1>/Data Store Memory81' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2702;/* '<S1>/Data Store Memory82' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming28;/* '<S1>/Data Store Memory83' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2801;/* '<S1>/Data Store Memory84' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming28;/* '<S1>/Data Store Memory85' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2802;/* '<S1>/Data Store Memory86' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming29;/* '<S1>/Data Store Memory87' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2901;/* '<S1>/Data Store Memory88' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming29;/* '<S1>/Data Store Memory89' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming04;/* '<S1>/Data Store Memory9' */
extern VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2902;/* '<S1>/Data Store Memory90' */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'KL15PwrSply_Ctrl'
 * '<S1>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys'
 * '<S2>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_Init'
 * '<S3>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon03'
 * '<S4>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon04'
 * '<S5>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon05'
 * '<S6>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon06'
 * '<S7>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon07'
 * '<S8>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon08'
 * '<S9>'   : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon09'
 * '<S10>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon10'
 * '<S11>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon11'
 * '<S12>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon12'
 * '<S13>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon13'
 * '<S14>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon14'
 * '<S15>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon15'
 * '<S16>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon16'
 * '<S17>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon17'
 * '<S18>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon18'
 * '<S19>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon19'
 * '<S20>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon20'
 * '<S21>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon21'
 * '<S22>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon22'
 * '<S23>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon23'
 * '<S24>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon24'
 * '<S25>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon25'
 * '<S26>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayKL1501'
 * '<S27>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayKL1502'
 * '<S28>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp26'
 * '<S29>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp27'
 * '<S30>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp28'
 * '<S31>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp29'
 * '<S32>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon03/LostComm'
 * '<S33>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon03/NetSleep'
 * '<S34>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon03/TimeMode'
 * '<S35>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon04/LostComm'
 * '<S36>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon04/NetSleep'
 * '<S37>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon04/TimeMode'
 * '<S38>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon05/LostComm'
 * '<S39>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon05/NetSleep'
 * '<S40>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon05/TimeMode'
 * '<S41>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon06/LostComm'
 * '<S42>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon06/NetSleep'
 * '<S43>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon06/TimeMode'
 * '<S44>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon07/LostComm'
 * '<S45>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon07/NetSleep'
 * '<S46>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon07/TimeMode'
 * '<S47>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon08/LostComm'
 * '<S48>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon08/NetSleep'
 * '<S49>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon08/TimeMode'
 * '<S50>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon09/LostComm'
 * '<S51>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon09/NetSleep'
 * '<S52>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon09/TimeMode'
 * '<S53>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon10/LostComm'
 * '<S54>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon10/NetSleep'
 * '<S55>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon10/TimeMode'
 * '<S56>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon11/LostComm'
 * '<S57>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon11/NetSleep'
 * '<S58>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon11/TimeMode'
 * '<S59>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon12/LostComm'
 * '<S60>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon12/NetSleep'
 * '<S61>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon12/TimeMode'
 * '<S62>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon13/LostComm'
 * '<S63>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon13/NetSleep'
 * '<S64>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon13/TimeMode'
 * '<S65>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon14/LostComm'
 * '<S66>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon14/NetSleep'
 * '<S67>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon14/TimeMode'
 * '<S68>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon15/LostComm'
 * '<S69>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon15/NetSleep'
 * '<S70>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon15/TimeMode'
 * '<S71>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon16/LostComm'
 * '<S72>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon16/NetSleep'
 * '<S73>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon16/TimeMode'
 * '<S74>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon17/LostComm'
 * '<S75>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon17/NetSleep'
 * '<S76>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon17/TimeMode'
 * '<S77>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon18/LostComm'
 * '<S78>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon18/NetSleep'
 * '<S79>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon18/TimeMode'
 * '<S80>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon19/LostComm'
 * '<S81>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon19/NetSleep'
 * '<S82>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon19/TimeMode'
 * '<S83>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon20/LostComm'
 * '<S84>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon20/NetSleep'
 * '<S85>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon20/TimeMode'
 * '<S86>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon21/LostComm'
 * '<S87>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon21/NetSleep'
 * '<S88>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon21/TimeMode'
 * '<S89>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon22/LostComm'
 * '<S90>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon22/NetSleep'
 * '<S91>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon22/TimeMode'
 * '<S92>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon23/LostComm'
 * '<S93>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon23/NetSleep'
 * '<S94>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon23/TimeMode'
 * '<S95>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon24/LostComm'
 * '<S96>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon24/NetSleep'
 * '<S97>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon24/TimeMode'
 * '<S98>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon25/LostComm'
 * '<S99>'  : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon25/NetSleep'
 * '<S100>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayCommon25/TimeMode'
 * '<S101>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayKL1501/LostComm'
 * '<S102>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayKL1501/NetSleep'
 * '<S103>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayKL1501/TimeMode'
 * '<S104>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayKL1502/LostComm'
 * '<S105>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayKL1502/NetSleep'
 * '<S106>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayKL1502/TimeMode'
 * '<S107>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp26/LostComm'
 * '<S108>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp26/NetSleep_16minDelay'
 * '<S109>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp26/NetSleep_2sDelay'
 * '<S110>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp26/TimeMode'
 * '<S111>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp27/LostComm'
 * '<S112>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp27/NetSleep_16minDelay'
 * '<S113>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp27/NetSleep_2sDelay'
 * '<S114>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp27/TimeMode'
 * '<S115>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp28/LostComm'
 * '<S116>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp28/NetSleep_16minDelay'
 * '<S117>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp28/NetSleep_2sDelay'
 * '<S118>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp28/TimeMode'
 * '<S119>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp29/LostComm'
 * '<S120>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp29/NetSleep_16minDelay'
 * '<S121>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp29/NetSleep_2sDelay'
 * '<S122>' : 'KL15PwrSply_Ctrl/KL15PwrSply_Ctrl_Runnable_10ms_sys/PwrSplyDelayLamp29/TimeMode'
 */
#endif                                 /* RTW_HEADER_KL15PwrSply_Ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
