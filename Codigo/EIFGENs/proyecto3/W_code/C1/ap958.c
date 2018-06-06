/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F958_7102(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7103(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7104(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7105(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7106(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7107(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7108(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7109(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7110(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7111(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7112(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7113(EIF_REFERENCE);
extern void F958_7114(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F958_7115(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F958_7116(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F958_7117(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F958_7118(EIF_REFERENCE);
extern void F958_7119(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7120(EIF_REFERENCE);
extern void F958_7121(EIF_REFERENCE);
extern void F958_7122(EIF_REFERENCE);
extern void F958_7123(EIF_REFERENCE);
extern void F958_7124(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7125(EIF_REFERENCE);
extern EIF_TYPED_VALUE F958_7126(EIF_REFERENCE);
extern void EIF_Minit958(void);

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

/* {APPLICATION}.make */
void F958_7102 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13375);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13375);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4953, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4954, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {APPLICATION}.new_random */
EIF_TYPED_VALUE F958_7103 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4938,Dtype(Current)));
	return r;
}


/* {APPLICATION}.entrada_usuario */
EIF_TYPED_VALUE F958_7104 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4939,Dtype(Current)));
	return r;
}


/* {APPLICATION}.bandera */
EIF_TYPED_VALUE F958_7105 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(4940,Dtype(Current)));
	return r;
}


/* {APPLICATION}.tamanio_cajas */
EIF_TYPED_VALUE F958_7106 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4941,Dtype(Current)));
	return r;
}


/* {APPLICATION}.tamanio_maximo_objetos */
EIF_TYPED_VALUE F958_7107 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4942,Dtype(Current)));
	return r;
}


/* {APPLICATION}.semilla */
EIF_TYPED_VALUE F958_7108 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4943,Dtype(Current)));
	return r;
}


/* {APPLICATION}.numero_objetos */
EIF_TYPED_VALUE F958_7109 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4944,Dtype(Current)));
	return r;
}


/* {APPLICATION}.default_tamanio_cajas */
RTOID (F958_7110)
EIF_TYPED_VALUE F958_7110 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_tamanio_cajas";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F958_7110);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13383);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(957, Current, 13383);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
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

/* {APPLICATION}.default_tamanio_maximo_objetos */
RTOID (F958_7111)
EIF_TYPED_VALUE F958_7111 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_tamanio_maximo_objetos";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F958_7111);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13384);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(957, Current, 13384);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
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

/* {APPLICATION}.default_semilla */
RTOID (F958_7112)
EIF_TYPED_VALUE F958_7112 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_semilla";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F958_7112);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13385);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(957, Current, 13385);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2018L);
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

/* {APPLICATION}.default_numero_objetos */
RTOID (F958_7113)
EIF_TYPED_VALUE F958_7113 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_numero_objetos";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F958_7113);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13386);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(957, Current, 13386);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
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

/* {APPLICATION}.set_tamanio_cajas */
void F958_7114 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_tamanio_cajas";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 1, 13387);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13387);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valor_no_negativo", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4941, 0x10000000, 1); /* tamanio_cajas */
	*(EIF_INTEGER_32 *)(Current + RTWA(4941, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4941, dtype));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {APPLICATION}.set_tamanio_maximo_objetos */
void F958_7115 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_tamanio_maximo_objetos";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 1, 13388);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13388);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valor_no_negativo", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valor_menor_a_tamanio_cajas", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4941, dtype));
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 4942, 0x10000000, 1); /* tamanio_maximo_objetos */
	*(EIF_INTEGER_32 *)(Current + RTWA(4942, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4942, dtype));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {APPLICATION}.set_semilla */
void F958_7116 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_semilla";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 1, 13389);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13389);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valornonegativo", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4943, 0x10000000, 1); /* semilla */
	*(EIF_INTEGER_32 *)(Current + RTWA(4943, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4943, dtype));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {APPLICATION}.set_numero_objetos */
void F958_7117 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_numero_objetos";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 1, 13390);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13390);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valor_no_negativo", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4944, 0x10000000, 1); /* numero_objetos */
	*(EIF_INTEGER_32 *)(Current + RTWA(4944, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4944, dtype));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {APPLICATION}.set_default_valores */
void F958_7118 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_default_valores";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13391);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13391);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4945, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4949, dtype))(Current, ui4_1x);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4946, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4950, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4946, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4951, dtype))(Current, ui4_1x);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4948, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4952, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {APPLICATION}.solicitar_datos_usuario */
void F958_7119 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "solicitar_datos_usuario";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13392);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13392);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4956, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4957, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4958, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4959, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {APPLICATION}.obtener_entrada_usuario */
EIF_TYPED_VALUE F958_7120 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "obtener_entrada_usuario";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13393);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13393);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(169, "new_line", tr1))(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(170, "read_integer", tr1))(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(127, "last_integer", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {APPLICATION}.solicitar_tamanio_cajas */
void F958_7121 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "solicitar_tamanio_cajas";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13394);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13394);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
	*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(4940, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("Ingrese el tamano de las cajas: (-1 si no)\012",43,52305674);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4939, 0x10000000, 1); /* entrada_usuario */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4955, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4949, dtype))(Current, ui4_1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("- Se ha establecido el valor!\012",30,1005210378);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
			*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("- Valor default establecido!\012",29,1873983242);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
				*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(12);
				tr1 = RTMS_EX_H("- Error!, indique un valor valido!\012",35,1495334410);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
}

/* {APPLICATION}.solicitar_tamanio_maximo_objetos */
void F958_7122 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "solicitar_tamanio_maximo_objetos";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13395);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13395);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
	*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(4940, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("Ingrese el tamano maximo de los objetos: (-1 si no)\012",52,921796874);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4939, 0x10000000, 1); /* entrada_usuario */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4955, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4950, dtype))(Current, ui4_1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("- Se ha establecido el valor!\012",30,1005210378);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
			*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("- Valor default establecido!\012",29,1873983242);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
				*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(12);
				tr1 = RTMS_EX_H("- Error!, indique un valor valido!\012",35,1495334410);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
}

/* {APPLICATION}.solicitar_semilla */
void F958_7123 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "solicitar_semilla";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13396);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13396);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
	*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(4940, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("Ingrese el valor de la semilla: (-1 si no)\012",43,1154901514);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4939, 0x10000000, 1); /* entrada_usuario */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4955, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4951, dtype))(Current, ui4_1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("- Se ha establecido el valor!\012",30,1005210378);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
			*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("- Valor default establecido!\012",29,1873983242);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
				*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(12);
				tr1 = RTMS_EX_H("- Error!, indique un valor valido!\012",35,1495334410);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
}

/* {APPLICATION}.solicitar_numero_objetos */
void F958_7124 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "solicitar_numero_objetos";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13397);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13397);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
	*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(4940, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("Ingrese el numero de objetos: (-1 si no)\012",41,1056777226);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4939, 0x10000000, 1); /* entrada_usuario */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4955, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4952, dtype))(Current, ui4_1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("- Se ha establecido el valor\012",29,456910602);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
			*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4939, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("- Valor default establecido\012",28,91206154);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4940, 0x04000000, 1); /* bandera */
				*(EIF_BOOLEAN *)(Current + RTWA(4940, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(12);
				tr1 = RTMS_EX_H("- Error!, indique un valor valido\012",34,702094346);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ui4_1
}

/* {APPLICATION}.generar_numero_aleatorio */
EIF_TYPED_VALUE F958_7125 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "generar_numero_aleatorio";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13398);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(957, Current, 13398);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(4938, Dtype(Current)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 6L)) + ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {APPLICATION}.two_new_dice */
EIF_TYPED_VALUE F958_7126 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "two_new_dice";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 957, Current, 0, 0, 13399);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(957, Current, 13399);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000B9, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,185,217,217,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4938, dtype));
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 6L)) + ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4938, dtype));
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 6L)) + ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

void EIF_Minit958 (void)
{
	GTCX
	RTOTS (7110,F958_7110)
	RTOTS (7111,F958_7111)
	RTOTS (7112,F958_7112)
	RTOTS (7113,F958_7113)
}


#ifdef __cplusplus
}
#endif
