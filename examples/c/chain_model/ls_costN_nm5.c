/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) ls_costN_nm5_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#define to_double(x) (double) x
#define to_int(x) (int) x
#define CASADI_CAST(x,y) (x) y

/* Pre-c99 compatibility */
#if __STDC_VERSION__ < 199901L
  #define fmin CASADI_PREFIX(fmin)
  casadi_real fmin(casadi_real x, casadi_real y) { return x<y ? x : y;}
  #define fmax CASADI_PREFIX(fmax)
  casadi_real fmax(casadi_real x, casadi_real y) { return x>y ? x : y;}
#endif

/* CasADi extensions */
#define sq CASADI_PREFIX(sq)
casadi_real sq(casadi_real x) { return x*x;}
#define sign CASADI_PREFIX(sign)
casadi_real CASADI_PREFIX(sign)(casadi_real x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define twice CASADI_PREFIX(twice)
casadi_real twice(casadi_real x) { return x+x;}

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)

/* Printing routine */
#define PRINTF printf

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const int casadi_s0[28] = {24, 1, 0, 24, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
static const int casadi_s1[603] = {24, 24, 0, 24, 48, 72, 96, 120, 144, 168, 192, 216, 240, 264, 288, 312, 336, 360, 384, 408, 432, 456, 480, 504, 528, 552, 576, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};

/* ls_costN_nm5:(i0[24])->(o0[24],o1[24x24]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, int* iw, casadi_real* w, int mem) {
  casadi_real a0=arg[0] ? arg[0][0] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0] ? arg[0][1] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0] ? arg[0][2] : 0;
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0] ? arg[0][3] : 0;
  if (res[0]!=0) res[0][3]=a0;
  a0=arg[0] ? arg[0][4] : 0;
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[0] ? arg[0][5] : 0;
  if (res[0]!=0) res[0][5]=a0;
  a0=arg[0] ? arg[0][6] : 0;
  if (res[0]!=0) res[0][6]=a0;
  a0=arg[0] ? arg[0][7] : 0;
  if (res[0]!=0) res[0][7]=a0;
  a0=arg[0] ? arg[0][8] : 0;
  if (res[0]!=0) res[0][8]=a0;
  a0=arg[0] ? arg[0][9] : 0;
  if (res[0]!=0) res[0][9]=a0;
  a0=arg[0] ? arg[0][10] : 0;
  if (res[0]!=0) res[0][10]=a0;
  a0=arg[0] ? arg[0][11] : 0;
  if (res[0]!=0) res[0][11]=a0;
  a0=arg[0] ? arg[0][12] : 0;
  if (res[0]!=0) res[0][12]=a0;
  a0=arg[0] ? arg[0][13] : 0;
  if (res[0]!=0) res[0][13]=a0;
  a0=arg[0] ? arg[0][14] : 0;
  if (res[0]!=0) res[0][14]=a0;
  a0=arg[0] ? arg[0][15] : 0;
  if (res[0]!=0) res[0][15]=a0;
  a0=arg[0] ? arg[0][16] : 0;
  if (res[0]!=0) res[0][16]=a0;
  a0=arg[0] ? arg[0][17] : 0;
  if (res[0]!=0) res[0][17]=a0;
  a0=arg[0] ? arg[0][18] : 0;
  if (res[0]!=0) res[0][18]=a0;
  a0=arg[0] ? arg[0][19] : 0;
  if (res[0]!=0) res[0][19]=a0;
  a0=arg[0] ? arg[0][20] : 0;
  if (res[0]!=0) res[0][20]=a0;
  a0=arg[0] ? arg[0][21] : 0;
  if (res[0]!=0) res[0][21]=a0;
  a0=arg[0] ? arg[0][22] : 0;
  if (res[0]!=0) res[0][22]=a0;
  a0=arg[0] ? arg[0][23] : 0;
  if (res[0]!=0) res[0][23]=a0;
  a0=1.;
  if (res[1]!=0) res[1][0]=a0;
  casadi_real a1=0.;
  if (res[1]!=0) res[1][1]=a1;
  if (res[1]!=0) res[1][2]=a1;
  if (res[1]!=0) res[1][3]=a1;
  if (res[1]!=0) res[1][4]=a1;
  if (res[1]!=0) res[1][5]=a1;
  if (res[1]!=0) res[1][6]=a1;
  if (res[1]!=0) res[1][7]=a1;
  if (res[1]!=0) res[1][8]=a1;
  if (res[1]!=0) res[1][9]=a1;
  if (res[1]!=0) res[1][10]=a1;
  if (res[1]!=0) res[1][11]=a1;
  if (res[1]!=0) res[1][12]=a1;
  if (res[1]!=0) res[1][13]=a1;
  if (res[1]!=0) res[1][14]=a1;
  if (res[1]!=0) res[1][15]=a1;
  if (res[1]!=0) res[1][16]=a1;
  if (res[1]!=0) res[1][17]=a1;
  if (res[1]!=0) res[1][18]=a1;
  if (res[1]!=0) res[1][19]=a1;
  if (res[1]!=0) res[1][20]=a1;
  if (res[1]!=0) res[1][21]=a1;
  if (res[1]!=0) res[1][22]=a1;
  if (res[1]!=0) res[1][23]=a1;
  if (res[1]!=0) res[1][24]=a1;
  if (res[1]!=0) res[1][25]=a0;
  if (res[1]!=0) res[1][26]=a1;
  if (res[1]!=0) res[1][27]=a1;
  if (res[1]!=0) res[1][28]=a1;
  if (res[1]!=0) res[1][29]=a1;
  if (res[1]!=0) res[1][30]=a1;
  if (res[1]!=0) res[1][31]=a1;
  if (res[1]!=0) res[1][32]=a1;
  if (res[1]!=0) res[1][33]=a1;
  if (res[1]!=0) res[1][34]=a1;
  if (res[1]!=0) res[1][35]=a1;
  if (res[1]!=0) res[1][36]=a1;
  if (res[1]!=0) res[1][37]=a1;
  if (res[1]!=0) res[1][38]=a1;
  if (res[1]!=0) res[1][39]=a1;
  if (res[1]!=0) res[1][40]=a1;
  if (res[1]!=0) res[1][41]=a1;
  if (res[1]!=0) res[1][42]=a1;
  if (res[1]!=0) res[1][43]=a1;
  if (res[1]!=0) res[1][44]=a1;
  if (res[1]!=0) res[1][45]=a1;
  if (res[1]!=0) res[1][46]=a1;
  if (res[1]!=0) res[1][47]=a1;
  if (res[1]!=0) res[1][48]=a1;
  if (res[1]!=0) res[1][49]=a1;
  if (res[1]!=0) res[1][50]=a0;
  if (res[1]!=0) res[1][51]=a1;
  if (res[1]!=0) res[1][52]=a1;
  if (res[1]!=0) res[1][53]=a1;
  if (res[1]!=0) res[1][54]=a1;
  if (res[1]!=0) res[1][55]=a1;
  if (res[1]!=0) res[1][56]=a1;
  if (res[1]!=0) res[1][57]=a1;
  if (res[1]!=0) res[1][58]=a1;
  if (res[1]!=0) res[1][59]=a1;
  if (res[1]!=0) res[1][60]=a1;
  if (res[1]!=0) res[1][61]=a1;
  if (res[1]!=0) res[1][62]=a1;
  if (res[1]!=0) res[1][63]=a1;
  if (res[1]!=0) res[1][64]=a1;
  if (res[1]!=0) res[1][65]=a1;
  if (res[1]!=0) res[1][66]=a1;
  if (res[1]!=0) res[1][67]=a1;
  if (res[1]!=0) res[1][68]=a1;
  if (res[1]!=0) res[1][69]=a1;
  if (res[1]!=0) res[1][70]=a1;
  if (res[1]!=0) res[1][71]=a1;
  if (res[1]!=0) res[1][72]=a1;
  if (res[1]!=0) res[1][73]=a1;
  if (res[1]!=0) res[1][74]=a1;
  if (res[1]!=0) res[1][75]=a0;
  if (res[1]!=0) res[1][76]=a1;
  if (res[1]!=0) res[1][77]=a1;
  if (res[1]!=0) res[1][78]=a1;
  if (res[1]!=0) res[1][79]=a1;
  if (res[1]!=0) res[1][80]=a1;
  if (res[1]!=0) res[1][81]=a1;
  if (res[1]!=0) res[1][82]=a1;
  if (res[1]!=0) res[1][83]=a1;
  if (res[1]!=0) res[1][84]=a1;
  if (res[1]!=0) res[1][85]=a1;
  if (res[1]!=0) res[1][86]=a1;
  if (res[1]!=0) res[1][87]=a1;
  if (res[1]!=0) res[1][88]=a1;
  if (res[1]!=0) res[1][89]=a1;
  if (res[1]!=0) res[1][90]=a1;
  if (res[1]!=0) res[1][91]=a1;
  if (res[1]!=0) res[1][92]=a1;
  if (res[1]!=0) res[1][93]=a1;
  if (res[1]!=0) res[1][94]=a1;
  if (res[1]!=0) res[1][95]=a1;
  if (res[1]!=0) res[1][96]=a1;
  if (res[1]!=0) res[1][97]=a1;
  if (res[1]!=0) res[1][98]=a1;
  if (res[1]!=0) res[1][99]=a1;
  if (res[1]!=0) res[1][100]=a0;
  if (res[1]!=0) res[1][101]=a1;
  if (res[1]!=0) res[1][102]=a1;
  if (res[1]!=0) res[1][103]=a1;
  if (res[1]!=0) res[1][104]=a1;
  if (res[1]!=0) res[1][105]=a1;
  if (res[1]!=0) res[1][106]=a1;
  if (res[1]!=0) res[1][107]=a1;
  if (res[1]!=0) res[1][108]=a1;
  if (res[1]!=0) res[1][109]=a1;
  if (res[1]!=0) res[1][110]=a1;
  if (res[1]!=0) res[1][111]=a1;
  if (res[1]!=0) res[1][112]=a1;
  if (res[1]!=0) res[1][113]=a1;
  if (res[1]!=0) res[1][114]=a1;
  if (res[1]!=0) res[1][115]=a1;
  if (res[1]!=0) res[1][116]=a1;
  if (res[1]!=0) res[1][117]=a1;
  if (res[1]!=0) res[1][118]=a1;
  if (res[1]!=0) res[1][119]=a1;
  if (res[1]!=0) res[1][120]=a1;
  if (res[1]!=0) res[1][121]=a1;
  if (res[1]!=0) res[1][122]=a1;
  if (res[1]!=0) res[1][123]=a1;
  if (res[1]!=0) res[1][124]=a1;
  if (res[1]!=0) res[1][125]=a0;
  if (res[1]!=0) res[1][126]=a1;
  if (res[1]!=0) res[1][127]=a1;
  if (res[1]!=0) res[1][128]=a1;
  if (res[1]!=0) res[1][129]=a1;
  if (res[1]!=0) res[1][130]=a1;
  if (res[1]!=0) res[1][131]=a1;
  if (res[1]!=0) res[1][132]=a1;
  if (res[1]!=0) res[1][133]=a1;
  if (res[1]!=0) res[1][134]=a1;
  if (res[1]!=0) res[1][135]=a1;
  if (res[1]!=0) res[1][136]=a1;
  if (res[1]!=0) res[1][137]=a1;
  if (res[1]!=0) res[1][138]=a1;
  if (res[1]!=0) res[1][139]=a1;
  if (res[1]!=0) res[1][140]=a1;
  if (res[1]!=0) res[1][141]=a1;
  if (res[1]!=0) res[1][142]=a1;
  if (res[1]!=0) res[1][143]=a1;
  if (res[1]!=0) res[1][144]=a1;
  if (res[1]!=0) res[1][145]=a1;
  if (res[1]!=0) res[1][146]=a1;
  if (res[1]!=0) res[1][147]=a1;
  if (res[1]!=0) res[1][148]=a1;
  if (res[1]!=0) res[1][149]=a1;
  if (res[1]!=0) res[1][150]=a0;
  if (res[1]!=0) res[1][151]=a1;
  if (res[1]!=0) res[1][152]=a1;
  if (res[1]!=0) res[1][153]=a1;
  if (res[1]!=0) res[1][154]=a1;
  if (res[1]!=0) res[1][155]=a1;
  if (res[1]!=0) res[1][156]=a1;
  if (res[1]!=0) res[1][157]=a1;
  if (res[1]!=0) res[1][158]=a1;
  if (res[1]!=0) res[1][159]=a1;
  if (res[1]!=0) res[1][160]=a1;
  if (res[1]!=0) res[1][161]=a1;
  if (res[1]!=0) res[1][162]=a1;
  if (res[1]!=0) res[1][163]=a1;
  if (res[1]!=0) res[1][164]=a1;
  if (res[1]!=0) res[1][165]=a1;
  if (res[1]!=0) res[1][166]=a1;
  if (res[1]!=0) res[1][167]=a1;
  if (res[1]!=0) res[1][168]=a1;
  if (res[1]!=0) res[1][169]=a1;
  if (res[1]!=0) res[1][170]=a1;
  if (res[1]!=0) res[1][171]=a1;
  if (res[1]!=0) res[1][172]=a1;
  if (res[1]!=0) res[1][173]=a1;
  if (res[1]!=0) res[1][174]=a1;
  if (res[1]!=0) res[1][175]=a0;
  if (res[1]!=0) res[1][176]=a1;
  if (res[1]!=0) res[1][177]=a1;
  if (res[1]!=0) res[1][178]=a1;
  if (res[1]!=0) res[1][179]=a1;
  if (res[1]!=0) res[1][180]=a1;
  if (res[1]!=0) res[1][181]=a1;
  if (res[1]!=0) res[1][182]=a1;
  if (res[1]!=0) res[1][183]=a1;
  if (res[1]!=0) res[1][184]=a1;
  if (res[1]!=0) res[1][185]=a1;
  if (res[1]!=0) res[1][186]=a1;
  if (res[1]!=0) res[1][187]=a1;
  if (res[1]!=0) res[1][188]=a1;
  if (res[1]!=0) res[1][189]=a1;
  if (res[1]!=0) res[1][190]=a1;
  if (res[1]!=0) res[1][191]=a1;
  if (res[1]!=0) res[1][192]=a1;
  if (res[1]!=0) res[1][193]=a1;
  if (res[1]!=0) res[1][194]=a1;
  if (res[1]!=0) res[1][195]=a1;
  if (res[1]!=0) res[1][196]=a1;
  if (res[1]!=0) res[1][197]=a1;
  if (res[1]!=0) res[1][198]=a1;
  if (res[1]!=0) res[1][199]=a1;
  if (res[1]!=0) res[1][200]=a0;
  if (res[1]!=0) res[1][201]=a1;
  if (res[1]!=0) res[1][202]=a1;
  if (res[1]!=0) res[1][203]=a1;
  if (res[1]!=0) res[1][204]=a1;
  if (res[1]!=0) res[1][205]=a1;
  if (res[1]!=0) res[1][206]=a1;
  if (res[1]!=0) res[1][207]=a1;
  if (res[1]!=0) res[1][208]=a1;
  if (res[1]!=0) res[1][209]=a1;
  if (res[1]!=0) res[1][210]=a1;
  if (res[1]!=0) res[1][211]=a1;
  if (res[1]!=0) res[1][212]=a1;
  if (res[1]!=0) res[1][213]=a1;
  if (res[1]!=0) res[1][214]=a1;
  if (res[1]!=0) res[1][215]=a1;
  if (res[1]!=0) res[1][216]=a1;
  if (res[1]!=0) res[1][217]=a1;
  if (res[1]!=0) res[1][218]=a1;
  if (res[1]!=0) res[1][219]=a1;
  if (res[1]!=0) res[1][220]=a1;
  if (res[1]!=0) res[1][221]=a1;
  if (res[1]!=0) res[1][222]=a1;
  if (res[1]!=0) res[1][223]=a1;
  if (res[1]!=0) res[1][224]=a1;
  if (res[1]!=0) res[1][225]=a0;
  if (res[1]!=0) res[1][226]=a1;
  if (res[1]!=0) res[1][227]=a1;
  if (res[1]!=0) res[1][228]=a1;
  if (res[1]!=0) res[1][229]=a1;
  if (res[1]!=0) res[1][230]=a1;
  if (res[1]!=0) res[1][231]=a1;
  if (res[1]!=0) res[1][232]=a1;
  if (res[1]!=0) res[1][233]=a1;
  if (res[1]!=0) res[1][234]=a1;
  if (res[1]!=0) res[1][235]=a1;
  if (res[1]!=0) res[1][236]=a1;
  if (res[1]!=0) res[1][237]=a1;
  if (res[1]!=0) res[1][238]=a1;
  if (res[1]!=0) res[1][239]=a1;
  if (res[1]!=0) res[1][240]=a1;
  if (res[1]!=0) res[1][241]=a1;
  if (res[1]!=0) res[1][242]=a1;
  if (res[1]!=0) res[1][243]=a1;
  if (res[1]!=0) res[1][244]=a1;
  if (res[1]!=0) res[1][245]=a1;
  if (res[1]!=0) res[1][246]=a1;
  if (res[1]!=0) res[1][247]=a1;
  if (res[1]!=0) res[1][248]=a1;
  if (res[1]!=0) res[1][249]=a1;
  if (res[1]!=0) res[1][250]=a0;
  if (res[1]!=0) res[1][251]=a1;
  if (res[1]!=0) res[1][252]=a1;
  if (res[1]!=0) res[1][253]=a1;
  if (res[1]!=0) res[1][254]=a1;
  if (res[1]!=0) res[1][255]=a1;
  if (res[1]!=0) res[1][256]=a1;
  if (res[1]!=0) res[1][257]=a1;
  if (res[1]!=0) res[1][258]=a1;
  if (res[1]!=0) res[1][259]=a1;
  if (res[1]!=0) res[1][260]=a1;
  if (res[1]!=0) res[1][261]=a1;
  if (res[1]!=0) res[1][262]=a1;
  if (res[1]!=0) res[1][263]=a1;
  if (res[1]!=0) res[1][264]=a1;
  if (res[1]!=0) res[1][265]=a1;
  if (res[1]!=0) res[1][266]=a1;
  if (res[1]!=0) res[1][267]=a1;
  if (res[1]!=0) res[1][268]=a1;
  if (res[1]!=0) res[1][269]=a1;
  if (res[1]!=0) res[1][270]=a1;
  if (res[1]!=0) res[1][271]=a1;
  if (res[1]!=0) res[1][272]=a1;
  if (res[1]!=0) res[1][273]=a1;
  if (res[1]!=0) res[1][274]=a1;
  if (res[1]!=0) res[1][275]=a0;
  if (res[1]!=0) res[1][276]=a1;
  if (res[1]!=0) res[1][277]=a1;
  if (res[1]!=0) res[1][278]=a1;
  if (res[1]!=0) res[1][279]=a1;
  if (res[1]!=0) res[1][280]=a1;
  if (res[1]!=0) res[1][281]=a1;
  if (res[1]!=0) res[1][282]=a1;
  if (res[1]!=0) res[1][283]=a1;
  if (res[1]!=0) res[1][284]=a1;
  if (res[1]!=0) res[1][285]=a1;
  if (res[1]!=0) res[1][286]=a1;
  if (res[1]!=0) res[1][287]=a1;
  if (res[1]!=0) res[1][288]=a1;
  if (res[1]!=0) res[1][289]=a1;
  if (res[1]!=0) res[1][290]=a1;
  if (res[1]!=0) res[1][291]=a1;
  if (res[1]!=0) res[1][292]=a1;
  if (res[1]!=0) res[1][293]=a1;
  if (res[1]!=0) res[1][294]=a1;
  if (res[1]!=0) res[1][295]=a1;
  if (res[1]!=0) res[1][296]=a1;
  if (res[1]!=0) res[1][297]=a1;
  if (res[1]!=0) res[1][298]=a1;
  if (res[1]!=0) res[1][299]=a1;
  if (res[1]!=0) res[1][300]=a0;
  if (res[1]!=0) res[1][301]=a1;
  if (res[1]!=0) res[1][302]=a1;
  if (res[1]!=0) res[1][303]=a1;
  if (res[1]!=0) res[1][304]=a1;
  if (res[1]!=0) res[1][305]=a1;
  if (res[1]!=0) res[1][306]=a1;
  if (res[1]!=0) res[1][307]=a1;
  if (res[1]!=0) res[1][308]=a1;
  if (res[1]!=0) res[1][309]=a1;
  if (res[1]!=0) res[1][310]=a1;
  if (res[1]!=0) res[1][311]=a1;
  if (res[1]!=0) res[1][312]=a1;
  if (res[1]!=0) res[1][313]=a1;
  if (res[1]!=0) res[1][314]=a1;
  if (res[1]!=0) res[1][315]=a1;
  if (res[1]!=0) res[1][316]=a1;
  if (res[1]!=0) res[1][317]=a1;
  if (res[1]!=0) res[1][318]=a1;
  if (res[1]!=0) res[1][319]=a1;
  if (res[1]!=0) res[1][320]=a1;
  if (res[1]!=0) res[1][321]=a1;
  if (res[1]!=0) res[1][322]=a1;
  if (res[1]!=0) res[1][323]=a1;
  if (res[1]!=0) res[1][324]=a1;
  if (res[1]!=0) res[1][325]=a0;
  if (res[1]!=0) res[1][326]=a1;
  if (res[1]!=0) res[1][327]=a1;
  if (res[1]!=0) res[1][328]=a1;
  if (res[1]!=0) res[1][329]=a1;
  if (res[1]!=0) res[1][330]=a1;
  if (res[1]!=0) res[1][331]=a1;
  if (res[1]!=0) res[1][332]=a1;
  if (res[1]!=0) res[1][333]=a1;
  if (res[1]!=0) res[1][334]=a1;
  if (res[1]!=0) res[1][335]=a1;
  if (res[1]!=0) res[1][336]=a1;
  if (res[1]!=0) res[1][337]=a1;
  if (res[1]!=0) res[1][338]=a1;
  if (res[1]!=0) res[1][339]=a1;
  if (res[1]!=0) res[1][340]=a1;
  if (res[1]!=0) res[1][341]=a1;
  if (res[1]!=0) res[1][342]=a1;
  if (res[1]!=0) res[1][343]=a1;
  if (res[1]!=0) res[1][344]=a1;
  if (res[1]!=0) res[1][345]=a1;
  if (res[1]!=0) res[1][346]=a1;
  if (res[1]!=0) res[1][347]=a1;
  if (res[1]!=0) res[1][348]=a1;
  if (res[1]!=0) res[1][349]=a1;
  if (res[1]!=0) res[1][350]=a0;
  if (res[1]!=0) res[1][351]=a1;
  if (res[1]!=0) res[1][352]=a1;
  if (res[1]!=0) res[1][353]=a1;
  if (res[1]!=0) res[1][354]=a1;
  if (res[1]!=0) res[1][355]=a1;
  if (res[1]!=0) res[1][356]=a1;
  if (res[1]!=0) res[1][357]=a1;
  if (res[1]!=0) res[1][358]=a1;
  if (res[1]!=0) res[1][359]=a1;
  if (res[1]!=0) res[1][360]=a1;
  if (res[1]!=0) res[1][361]=a1;
  if (res[1]!=0) res[1][362]=a1;
  if (res[1]!=0) res[1][363]=a1;
  if (res[1]!=0) res[1][364]=a1;
  if (res[1]!=0) res[1][365]=a1;
  if (res[1]!=0) res[1][366]=a1;
  if (res[1]!=0) res[1][367]=a1;
  if (res[1]!=0) res[1][368]=a1;
  if (res[1]!=0) res[1][369]=a1;
  if (res[1]!=0) res[1][370]=a1;
  if (res[1]!=0) res[1][371]=a1;
  if (res[1]!=0) res[1][372]=a1;
  if (res[1]!=0) res[1][373]=a1;
  if (res[1]!=0) res[1][374]=a1;
  if (res[1]!=0) res[1][375]=a0;
  if (res[1]!=0) res[1][376]=a1;
  if (res[1]!=0) res[1][377]=a1;
  if (res[1]!=0) res[1][378]=a1;
  if (res[1]!=0) res[1][379]=a1;
  if (res[1]!=0) res[1][380]=a1;
  if (res[1]!=0) res[1][381]=a1;
  if (res[1]!=0) res[1][382]=a1;
  if (res[1]!=0) res[1][383]=a1;
  if (res[1]!=0) res[1][384]=a1;
  if (res[1]!=0) res[1][385]=a1;
  if (res[1]!=0) res[1][386]=a1;
  if (res[1]!=0) res[1][387]=a1;
  if (res[1]!=0) res[1][388]=a1;
  if (res[1]!=0) res[1][389]=a1;
  if (res[1]!=0) res[1][390]=a1;
  if (res[1]!=0) res[1][391]=a1;
  if (res[1]!=0) res[1][392]=a1;
  if (res[1]!=0) res[1][393]=a1;
  if (res[1]!=0) res[1][394]=a1;
  if (res[1]!=0) res[1][395]=a1;
  if (res[1]!=0) res[1][396]=a1;
  if (res[1]!=0) res[1][397]=a1;
  if (res[1]!=0) res[1][398]=a1;
  if (res[1]!=0) res[1][399]=a1;
  if (res[1]!=0) res[1][400]=a0;
  if (res[1]!=0) res[1][401]=a1;
  if (res[1]!=0) res[1][402]=a1;
  if (res[1]!=0) res[1][403]=a1;
  if (res[1]!=0) res[1][404]=a1;
  if (res[1]!=0) res[1][405]=a1;
  if (res[1]!=0) res[1][406]=a1;
  if (res[1]!=0) res[1][407]=a1;
  if (res[1]!=0) res[1][408]=a1;
  if (res[1]!=0) res[1][409]=a1;
  if (res[1]!=0) res[1][410]=a1;
  if (res[1]!=0) res[1][411]=a1;
  if (res[1]!=0) res[1][412]=a1;
  if (res[1]!=0) res[1][413]=a1;
  if (res[1]!=0) res[1][414]=a1;
  if (res[1]!=0) res[1][415]=a1;
  if (res[1]!=0) res[1][416]=a1;
  if (res[1]!=0) res[1][417]=a1;
  if (res[1]!=0) res[1][418]=a1;
  if (res[1]!=0) res[1][419]=a1;
  if (res[1]!=0) res[1][420]=a1;
  if (res[1]!=0) res[1][421]=a1;
  if (res[1]!=0) res[1][422]=a1;
  if (res[1]!=0) res[1][423]=a1;
  if (res[1]!=0) res[1][424]=a1;
  if (res[1]!=0) res[1][425]=a0;
  if (res[1]!=0) res[1][426]=a1;
  if (res[1]!=0) res[1][427]=a1;
  if (res[1]!=0) res[1][428]=a1;
  if (res[1]!=0) res[1][429]=a1;
  if (res[1]!=0) res[1][430]=a1;
  if (res[1]!=0) res[1][431]=a1;
  if (res[1]!=0) res[1][432]=a1;
  if (res[1]!=0) res[1][433]=a1;
  if (res[1]!=0) res[1][434]=a1;
  if (res[1]!=0) res[1][435]=a1;
  if (res[1]!=0) res[1][436]=a1;
  if (res[1]!=0) res[1][437]=a1;
  if (res[1]!=0) res[1][438]=a1;
  if (res[1]!=0) res[1][439]=a1;
  if (res[1]!=0) res[1][440]=a1;
  if (res[1]!=0) res[1][441]=a1;
  if (res[1]!=0) res[1][442]=a1;
  if (res[1]!=0) res[1][443]=a1;
  if (res[1]!=0) res[1][444]=a1;
  if (res[1]!=0) res[1][445]=a1;
  if (res[1]!=0) res[1][446]=a1;
  if (res[1]!=0) res[1][447]=a1;
  if (res[1]!=0) res[1][448]=a1;
  if (res[1]!=0) res[1][449]=a1;
  if (res[1]!=0) res[1][450]=a0;
  if (res[1]!=0) res[1][451]=a1;
  if (res[1]!=0) res[1][452]=a1;
  if (res[1]!=0) res[1][453]=a1;
  if (res[1]!=0) res[1][454]=a1;
  if (res[1]!=0) res[1][455]=a1;
  if (res[1]!=0) res[1][456]=a1;
  if (res[1]!=0) res[1][457]=a1;
  if (res[1]!=0) res[1][458]=a1;
  if (res[1]!=0) res[1][459]=a1;
  if (res[1]!=0) res[1][460]=a1;
  if (res[1]!=0) res[1][461]=a1;
  if (res[1]!=0) res[1][462]=a1;
  if (res[1]!=0) res[1][463]=a1;
  if (res[1]!=0) res[1][464]=a1;
  if (res[1]!=0) res[1][465]=a1;
  if (res[1]!=0) res[1][466]=a1;
  if (res[1]!=0) res[1][467]=a1;
  if (res[1]!=0) res[1][468]=a1;
  if (res[1]!=0) res[1][469]=a1;
  if (res[1]!=0) res[1][470]=a1;
  if (res[1]!=0) res[1][471]=a1;
  if (res[1]!=0) res[1][472]=a1;
  if (res[1]!=0) res[1][473]=a1;
  if (res[1]!=0) res[1][474]=a1;
  if (res[1]!=0) res[1][475]=a0;
  if (res[1]!=0) res[1][476]=a1;
  if (res[1]!=0) res[1][477]=a1;
  if (res[1]!=0) res[1][478]=a1;
  if (res[1]!=0) res[1][479]=a1;
  if (res[1]!=0) res[1][480]=a1;
  if (res[1]!=0) res[1][481]=a1;
  if (res[1]!=0) res[1][482]=a1;
  if (res[1]!=0) res[1][483]=a1;
  if (res[1]!=0) res[1][484]=a1;
  if (res[1]!=0) res[1][485]=a1;
  if (res[1]!=0) res[1][486]=a1;
  if (res[1]!=0) res[1][487]=a1;
  if (res[1]!=0) res[1][488]=a1;
  if (res[1]!=0) res[1][489]=a1;
  if (res[1]!=0) res[1][490]=a1;
  if (res[1]!=0) res[1][491]=a1;
  if (res[1]!=0) res[1][492]=a1;
  if (res[1]!=0) res[1][493]=a1;
  if (res[1]!=0) res[1][494]=a1;
  if (res[1]!=0) res[1][495]=a1;
  if (res[1]!=0) res[1][496]=a1;
  if (res[1]!=0) res[1][497]=a1;
  if (res[1]!=0) res[1][498]=a1;
  if (res[1]!=0) res[1][499]=a1;
  if (res[1]!=0) res[1][500]=a0;
  if (res[1]!=0) res[1][501]=a1;
  if (res[1]!=0) res[1][502]=a1;
  if (res[1]!=0) res[1][503]=a1;
  if (res[1]!=0) res[1][504]=a1;
  if (res[1]!=0) res[1][505]=a1;
  if (res[1]!=0) res[1][506]=a1;
  if (res[1]!=0) res[1][507]=a1;
  if (res[1]!=0) res[1][508]=a1;
  if (res[1]!=0) res[1][509]=a1;
  if (res[1]!=0) res[1][510]=a1;
  if (res[1]!=0) res[1][511]=a1;
  if (res[1]!=0) res[1][512]=a1;
  if (res[1]!=0) res[1][513]=a1;
  if (res[1]!=0) res[1][514]=a1;
  if (res[1]!=0) res[1][515]=a1;
  if (res[1]!=0) res[1][516]=a1;
  if (res[1]!=0) res[1][517]=a1;
  if (res[1]!=0) res[1][518]=a1;
  if (res[1]!=0) res[1][519]=a1;
  if (res[1]!=0) res[1][520]=a1;
  if (res[1]!=0) res[1][521]=a1;
  if (res[1]!=0) res[1][522]=a1;
  if (res[1]!=0) res[1][523]=a1;
  if (res[1]!=0) res[1][524]=a1;
  if (res[1]!=0) res[1][525]=a0;
  if (res[1]!=0) res[1][526]=a1;
  if (res[1]!=0) res[1][527]=a1;
  if (res[1]!=0) res[1][528]=a1;
  if (res[1]!=0) res[1][529]=a1;
  if (res[1]!=0) res[1][530]=a1;
  if (res[1]!=0) res[1][531]=a1;
  if (res[1]!=0) res[1][532]=a1;
  if (res[1]!=0) res[1][533]=a1;
  if (res[1]!=0) res[1][534]=a1;
  if (res[1]!=0) res[1][535]=a1;
  if (res[1]!=0) res[1][536]=a1;
  if (res[1]!=0) res[1][537]=a1;
  if (res[1]!=0) res[1][538]=a1;
  if (res[1]!=0) res[1][539]=a1;
  if (res[1]!=0) res[1][540]=a1;
  if (res[1]!=0) res[1][541]=a1;
  if (res[1]!=0) res[1][542]=a1;
  if (res[1]!=0) res[1][543]=a1;
  if (res[1]!=0) res[1][544]=a1;
  if (res[1]!=0) res[1][545]=a1;
  if (res[1]!=0) res[1][546]=a1;
  if (res[1]!=0) res[1][547]=a1;
  if (res[1]!=0) res[1][548]=a1;
  if (res[1]!=0) res[1][549]=a1;
  if (res[1]!=0) res[1][550]=a0;
  if (res[1]!=0) res[1][551]=a1;
  if (res[1]!=0) res[1][552]=a1;
  if (res[1]!=0) res[1][553]=a1;
  if (res[1]!=0) res[1][554]=a1;
  if (res[1]!=0) res[1][555]=a1;
  if (res[1]!=0) res[1][556]=a1;
  if (res[1]!=0) res[1][557]=a1;
  if (res[1]!=0) res[1][558]=a1;
  if (res[1]!=0) res[1][559]=a1;
  if (res[1]!=0) res[1][560]=a1;
  if (res[1]!=0) res[1][561]=a1;
  if (res[1]!=0) res[1][562]=a1;
  if (res[1]!=0) res[1][563]=a1;
  if (res[1]!=0) res[1][564]=a1;
  if (res[1]!=0) res[1][565]=a1;
  if (res[1]!=0) res[1][566]=a1;
  if (res[1]!=0) res[1][567]=a1;
  if (res[1]!=0) res[1][568]=a1;
  if (res[1]!=0) res[1][569]=a1;
  if (res[1]!=0) res[1][570]=a1;
  if (res[1]!=0) res[1][571]=a1;
  if (res[1]!=0) res[1][572]=a1;
  if (res[1]!=0) res[1][573]=a1;
  if (res[1]!=0) res[1][574]=a1;
  if (res[1]!=0) res[1][575]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int ls_costN_nm5(const casadi_real** arg, casadi_real** res, int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void ls_costN_nm5_incref(void) {
}

CASADI_SYMBOL_EXPORT void ls_costN_nm5_decref(void) {
}

CASADI_SYMBOL_EXPORT int ls_costN_nm5_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT int ls_costN_nm5_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT const char* ls_costN_nm5_name_in(int i){
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* ls_costN_nm5_name_out(int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const int* ls_costN_nm5_sparsity_in(int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const int* ls_costN_nm5_sparsity_out(int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int ls_costN_nm5_work(int *sz_arg, int* sz_res, int *sz_iw, int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 2;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
