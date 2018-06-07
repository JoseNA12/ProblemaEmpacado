/*
 * Code for class OBJETO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F960_7107(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F960_7108(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7109(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7110(EIF_REFERENCE);
extern void EIF_Minit960(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OBJETO}.make */
void F960_7107 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 2, 13386);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13386);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4943, 0x10000000, 1); /* identificador */
	*(EIF_INTEGER_32 *)(Current + RTWA(4943, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4944, 0x10000000, 1); /* tamanio */
	*(EIF_INTEGER_32 *)(Current + RTWA(4944, dtype)) = (EIF_INTEGER_32) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {OBJETO}.identificador */
EIF_TYPED_VALUE F960_7108 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4943,Dtype(Current)));
	return r;
}


/* {OBJETO}.tamanio */
EIF_TYPED_VALUE F960_7109 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4944,Dtype(Current)));
	return r;
}


/* {OBJETO}.default_identificador */
RTOID (F960_7110)
EIF_TYPED_VALUE F960_7110 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_identificador";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F960_7110);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 0, 13389);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(959, Current, 13389);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef Result
}

void EIF_Minit960 (void)
{
	GTCX
	RTOTS (7110,F960_7110)
}


#ifdef __cplusplus
}
#endif
