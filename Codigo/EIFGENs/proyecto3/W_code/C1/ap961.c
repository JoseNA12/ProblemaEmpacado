/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F961_7149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7150(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7151(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7152(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7153(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7154(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7155(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7156(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7157(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7158(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7159(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7160(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7161(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7162(EIF_REFERENCE);
extern void F961_7163(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F961_7164(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F961_7165(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F961_7166(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F961_7167(EIF_REFERENCE);
extern void F961_7168(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7169(EIF_REFERENCE);
extern void F961_7170(EIF_REFERENCE);
extern void F961_7171(EIF_REFERENCE);
extern void F961_7172(EIF_REFERENCE);
extern void F961_7173(EIF_REFERENCE);
extern EIF_TYPED_VALUE F961_7174(EIF_REFERENCE);
extern void F961_7175(EIF_REFERENCE);
extern void EIF_Minit961(void);

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
void F961_7149 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13395);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13395);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5001, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4987, 0xF8000107, 0); /* secuencia_prueba */
	tr1 = RTLNSMART(RTWCT(4987, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2837, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4987, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 4988, 0xF80003BD, 0); /* ff */
	tr1 = RTLNSMART(RTWCT(4988, dtype, Dftype(Current)).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4987, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4978, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4988, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {APPLICATION}.indice */
EIF_TYPED_VALUE F961_7150 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4984,Dtype(Current)));
	return r;
}


/* {APPLICATION}.bandera */
EIF_TYPED_VALUE F961_7151 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(4985,Dtype(Current)));
	return r;
}


/* {APPLICATION}.entrada_usuario */
EIF_TYPED_VALUE F961_7152 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4986,Dtype(Current)));
	return r;
}


/* {APPLICATION}.secuencia_prueba */
EIF_TYPED_VALUE F961_7153 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4987,Dtype(Current)));
	return r;
}


/* {APPLICATION}.ff */
EIF_TYPED_VALUE F961_7154 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4988,Dtype(Current)));
	return r;
}


/* {APPLICATION}.tamanio_cajas */
EIF_TYPED_VALUE F961_7155 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4989,Dtype(Current)));
	return r;
}


/* {APPLICATION}.tamanio_maximo_objetos */
EIF_TYPED_VALUE F961_7156 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4990,Dtype(Current)));
	return r;
}


/* {APPLICATION}.semilla */
EIF_TYPED_VALUE F961_7157 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4991,Dtype(Current)));
	return r;
}


/* {APPLICATION}.numero_objetos */
EIF_TYPED_VALUE F961_7158 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4992,Dtype(Current)));
	return r;
}


/* {APPLICATION}.default_tamanio_cajas */
RTOID (F961_7159)
EIF_TYPED_VALUE F961_7159 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_tamanio_cajas";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F961_7159);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13405);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(960, Current, 13405);
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
RTOID (F961_7160)
EIF_TYPED_VALUE F961_7160 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_tamanio_maximo_objetos";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F961_7160);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13406);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(960, Current, 13406);
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
RTOID (F961_7161)
EIF_TYPED_VALUE F961_7161 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_semilla";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F961_7161);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13407);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(960, Current, 13407);
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
RTOID (F961_7162)
EIF_TYPED_VALUE F961_7162 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_numero_objetos";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F961_7162);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13408);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(960, Current, 13408);
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
void F961_7163 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 1, 13409);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13409);
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
	RTDBGAA(Current, dtype, 4989, 0x10000000, 1); /* tamanio_cajas */
	*(EIF_INTEGER_32 *)(Current + RTWA(4989, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4989, dtype));
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
void F961_7164 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 1, 13410);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13410);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valor_no_negativo", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valor_menor_a_tamanio_cajas", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4989, dtype));
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 4990, 0x10000000, 1); /* tamanio_maximo_objetos */
	*(EIF_INTEGER_32 *)(Current + RTWA(4990, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4990, dtype));
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
void F961_7165 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 1, 13411);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13411);
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
	RTDBGAA(Current, dtype, 4991, 0x10000000, 1); /* semilla */
	*(EIF_INTEGER_32 *)(Current + RTWA(4991, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4991, dtype));
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
void F961_7166 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 1, 13412);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13412);
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
	RTDBGAA(Current, dtype, 4992, 0x10000000, 1); /* numero_objetos */
	*(EIF_INTEGER_32 *)(Current + RTWA(4992, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4992, dtype));
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
void F961_7167 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13413);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13413);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4993, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4997, dtype))(Current, ui4_1x);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4994, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4998, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4995, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4999, dtype))(Current, ui4_1x);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4996, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5000, dtype))(Current, ui4_1x);
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
void F961_7168 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13414);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13414);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5004, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5005, dtype))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5006, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5007, dtype))(Current);
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
EIF_TYPED_VALUE F961_7169 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13415);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13415);
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
void F961_7170 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13416);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13416);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
	*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(4985, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("Ingrese el tamano de las cajas: (-1 si no)\012",43,52305674);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4986, 0x10000000, 1); /* entrada_usuario */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4997, dtype))(Current, ui4_1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("- Se ha establecido el valor!\012",30,1005210378);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
			*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("- Valor default establecido!\012",29,1873983242);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
				*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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
void F961_7171 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13390);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13390);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
	*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(4985, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("Ingrese el tamano maximo de los objetos: (-1 si no)\012",52,921796874);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4986, 0x10000000, 1); /* entrada_usuario */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4998, dtype))(Current, ui4_1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("- Se ha establecido el valor!\012",30,1005210378);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
			*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("- Valor default establecido!\012",29,1873983242);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
				*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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
void F961_7172 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13391);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13391);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
	*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(4985, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("Ingrese el valor de la semilla: (-1 si no)\012",43,1154901514);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4986, 0x10000000, 1); /* entrada_usuario */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4999, dtype))(Current, ui4_1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("- Se ha establecido el valor!\012",30,1005210378);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
			*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("- Valor default establecido!\012",29,1873983242);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
				*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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
void F961_7173 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 960, Current, 0, 0, 13392);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13392);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
	*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(4985, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("Ingrese el numero de objetos: (-1 si no)\012",41,1056777226);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4986, 0x10000000, 1); /* entrada_usuario */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5000, dtype))(Current, ui4_1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("- Se ha establecido el valor\012",29,456910602);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
			*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4986, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("- Valor default establecido\012",28,91206154);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 4985, 0x04000000, 1); /* bandera */
				*(EIF_BOOLEAN *)(Current + RTWA(4985, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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

/* {APPLICATION}.generar_valor_semilla */
EIF_TYPED_VALUE F961_7174 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "generar_valor_semilla";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 960, Current, 2, 0, 13393);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(960, Current, 13393);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000081, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(129, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4991, Dtype(Current)));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1890, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1804, "start", loc1))(loc1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1771, "item", loc1))(loc1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1820, "forth", loc1))(loc1);
	RTHOOK(5);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {APPLICATION}.prueba */
void F961_7175 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "prueba";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 960, Current, 1, 0, 13394);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(960, Current, 13394);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000081, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(129, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4991, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1890, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1804, "start", loc1))(loc1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1771, "item", loc1))(loc1)).it_i4);
	ur1 = RTLN(eif_new_type(217, 0x00).id);
	*(EIF_INTEGER_32 *)ur1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 6L)) + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1820, "forth", loc1))(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
}

void EIF_Minit961 (void)
{
	GTCX
	RTOTS (7159,F961_7159)
	RTOTS (7160,F961_7160)
	RTOTS (7161,F961_7161)
	RTOTS (7162,F961_7162)
}


#ifdef __cplusplus
}
#endif
