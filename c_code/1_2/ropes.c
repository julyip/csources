/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trope177009 trope177009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44533 tcell44533;
typedef struct tcellseq44549 tcellseq44549;
typedef struct tgcheap46616 tgcheap46616;
typedef struct tcellset44545 tcellset44545;
typedef struct tpagedesc44541 tpagedesc44541;
typedef struct tmemregion26810 tmemregion26810;
typedef struct tsmallchunk26040 tsmallchunk26040;
typedef struct tllchunk26804 tllchunk26804;
typedef struct tbigchunk26042 tbigchunk26042;
typedef struct tintset26017 tintset26017;
typedef struct ttrunk26013 ttrunk26013;
typedef struct tavlnode26808 tavlnode26808;
typedef struct tgcstat46614 tgcstat46614;
typedef struct TY195552 TY195552;
typedef struct tbasechunk26038 tbasechunk26038;
typedef struct tfreecell26030 tfreecell26030;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning, void* ClEnv);
void* ClEnv;
} TY177138;
typedef trope177009* TY177237[4096];
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell44533  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44549  {
NI Len;
NI Cap;
tcell44533** D;
};
struct  tcellset44545  {
NI Counter;
NI Max;
tpagedesc44541* Head;
tpagedesc44541** Data;
};
typedef tsmallchunk26040* TY26822[512];
typedef ttrunk26013* ttrunkbuckets26015[256];
struct  tintset26017  {
ttrunkbuckets26015 Data;
};
struct  tmemregion26810  {
NI Minlargeobj;
NI Maxlargeobj;
TY26822 Freesmallchunks;
tllchunk26804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26042* Freechunkslist;
tintset26017 Chunkstarts;
tavlnode26808* Root;
tavlnode26808* Deleted;
tavlnode26808* Last;
tavlnode26808* Freeavlnodes;
};
struct  tgcstat46614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44549 Zct;
tcellseq44549 Decstack;
tcellset44545 Cycleroots;
tcellseq44549 Tempstack;
NI Recgclock;
tmemregion26810 Region;
tgcstat46614 Stat;
};
typedef trope177009* TY177515[1];
typedef N_CLOSURE_PTR(void, TMP3330) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3331) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP4162) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef NI TY176066[256];
typedef NI TY26020[8];
struct  tpagedesc44541  {
tpagedesc44541* Next;
NI Key;
TY26020 Bits;
};
struct  tbasechunk26038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26040  {
  tbasechunk26038 Sup;
tsmallchunk26040* Next;
tsmallchunk26040* Prev;
tfreecell26030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk26804  {
NI Size;
NI Acc;
tllchunk26804* Next;
};
struct  tbigchunk26042  {
  tbasechunk26038 Sup;
tbigchunk26042* Next;
tbigchunk26042* Prev;
NI Align;
NF Data;
};
struct  ttrunk26013  {
ttrunk26013* Next;
NI Key;
TY26020 Bits;
};
typedef tavlnode26808* TY26814[2];
struct  tavlnode26808  {
TY26814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26030  {
tfreecell26030* Next;
NI Zerofield;
};
struct TY195552 {
  TGenericSeq Sup;
  trope177009* data[SEQ_DECL_SIZE];
};
N_NIMCALL(trope177009*, newrope_177176)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP127)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44533*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(tcell44533* c);
N_NOINLINE(void, addzct_48217)(tcellseq44549* s, tcell44533* c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(trope177009*, con_177024)(trope177009* a, trope177009* b);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(trope177009*, insertincache_177345)(NimStringDesc* s);
N_NIMCALL(NI, hash_129839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(void, newrecropetostr_177492)(NimStringDesc** result, NI* resultlen, trope177009* r);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(trope177009*, pop_177533)(TY195552** s_177541);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(trope177009*, con_177031)(trope177009* a, NimStringDesc* b);
N_NIMCALL(trope177009*, torope_177076)(NimStringDesc* s);
N_NIMCALL(void, app_177060)(trope177009** a, NimStringDesc* b);
N_NIMCALL(void, app_177052)(trope177009** a, trope177009* b);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74428, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(trope177009*, ropef_177107)(NimStringDesc* frmt, trope177009** args, NI argsLen0);
N_NIMCALL(NIM_BOOL, open_12403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, writerope_178065)(FILE* f, trope177009* c);
N_NIMCALL(void, write_12665)(FILE* f, NimStringDesc* s);
N_NIMCALL(NI32, crcfromfile_176046)(NimStringDesc* filename);
N_NIMCALL(NI32, crcfromrope_179244)(trope177009* r);
N_NIMCALL(NI32, newcrcfromropeaux_179093)(trope177009* r, NI32 startval);
static N_INLINE(NI32, updatecrc32_176026)(NIM_CHAR val, NI32 crc);
static N_INLINE(NI32, updatecrc32_176019)(NI8 val, NI32 crc);
N_NIMCALL(void, writerope_178423)(trope177009* head, NimStringDesc* filename, NIM_BOOL usewarning);
STRING_LITERAL(TMP1045, "", 0);
STRING_LITERAL(TMP3329, "$", 1);
extern NIM_CONST TY176066 crc32table_176065;
TY177138 errorhandler_177143;
TY177237 cache_177242;
NI gcachetries_177333;
NI gcachemisses_177337;
NI gcacheinttries_177341;
trope177009* rnl_178454;
extern TNimType NTI3211; /* RootObj */
TNimType NTI177009; /* TRope */
extern TNimType NTI108; /* int */
extern TNimType NTI149; /* string */
TNimType NTI177007; /* PRope */
extern tgcheap46616 gch_46644;
extern NimStringDesc* tnl_174613;
trope177009* softrnl_178455;
extern TNimType NTI195552; /* seq[PRope] */
N_NIMCALL(void, TMP127)(void* p, NI op) {
	trope177009* a;
	a = (trope177009*)p;
	nimGCvisit((void*)(*a).Left, op);
	nimGCvisit((void*)(*a).Right, op);
	nimGCvisit((void*)(*a).Data, op);
}

static N_INLINE(tcell44533*, usrtocell_48246)(void* usr) {
	tcell44533* result;
	result = 0;
	result = ((tcell44533*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44533))))));
	return result;
}

static N_INLINE(void, rtladdzct_49804)(tcell44533* c) {
	addzct_48217(&gch_46644.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44533* c;
	c = usrtocell_48246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_49804(c);
	}
	LA3: ;
}

N_NIMCALL(trope177009*, newrope_177176)(NimStringDesc* data) {
	trope177009* result;
	result = 0;
	result = (trope177009*) newObj((&NTI177007), sizeof(trope177009));
	(*result).Sup.m_type = (&NTI177009);
	{
		NimStringDesc* LOC5;
		if (!!((data == NIM_NIL))) goto LA3;
		(*result).Length = data->Sup.len;
		LOC5 = 0;
		LOC5 = (*result).Data; (*result).Data = copyStringRC1(data);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44533* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44533* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_49804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(trope177009*, con_177024)(trope177009* a, trope177009* b) {
	trope177009* result;
	result = 0;
	{
		if (!(a == NIM_NIL)) goto LA3;
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		if (!(b == NIM_NIL)) goto LA6;
		result = a;
	}
	goto LA1;
	LA6: ;
	{
		result = newrope_177176(NIM_NIL);
		(*result).Length = (NI64)((*a).Length + (*b).Length);
		asgnRefNoCycle((void**) &(*result).Left, a);
		asgnRefNoCycle((void**) &(*result).Right, b);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, app_177052)(trope177009** a, trope177009* b) {
	unsureAsgnRef((void**) &(*a), con_177024((*a), b));
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(trope177009*, insertincache_177345)(NimStringDesc* s) {
	trope177009* result;
	NI h;
	NI LOC1;
	result = 0;
	gcachetries_177333 += 1;
	LOC1 = 0;
	LOC1 = hash_129839(s);
	h = (NI)(LOC1 & 4095);
	result = cache_177242[(h)- 0];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = result == 0;
		if (LOC4) goto LA5;
		LOC4 = !(eqStrings((*result).Data, s));
		LA5: ;
		if (!LOC4) goto LA6;
		gcachemisses_177337 += 1;
		result = newrope_177176(s);
		asgnRefNoCycle((void**) &cache_177242[(h)- 0], result);
	}
	LA6: ;
	return result;
}

N_NIMCALL(trope177009*, torope_177076)(NimStringDesc* s) {
	trope177009* result;
	result = 0;
	{
		if (!(s->Sup.len == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = insertincache_177345(s);
	}
	LA1: ;
	return result;
}

static N_INLINE(trope177009*, pop_177533)(TY195552** s_177541) {
	trope177009* result;
	NI l;
	result = 0;
	l = (NI64)((*s_177541)->Sup.len - 1);
	result = (*s_177541)->data[l];
	(*s_177541) = (TY195552*) setLengthSeq(&((*s_177541))->Sup, sizeof(trope177009*), l);
	return result;
}

N_NIMCALL(void, newrecropetostr_177492)(NimStringDesc** result, NI* resultlen, trope177009* r) {
	TY195552* stack;
	TY177515 LOC1;
	stack = (TY195552*) newSeq((&NTI195552), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = r;
	asgnRefNoCycle((void**) &stack->data[0], LOC1[0]);
	{
		while (1) {
			trope177009* it;
			if (!(0 < stack->Sup.len)) goto LA3;
			it = pop_177533(&stack);
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY195552*) incrSeq(&(stack)->Sup, sizeof(trope177009*));
					asgnRefNoCycle((void**) &stack->data[stack->Sup.len-1], (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			memcpy(((void*) (&(*result)->data[(*resultlen)])), ((void*) (&(*it).Data->data[0])), (*it).Length);
			(*resultlen) += (*it).Length;
		} LA3: ;
	}
}

N_NIMCALL(NimStringDesc*, ropetostr_177101)(trope177009* p) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(p == NIM_NIL)) goto LA3;
		result = copyString(((NimStringDesc*) &TMP1045));
	}
	goto LA1;
	LA3: ;
	{
		NI resultlen;
		result = mnewString((*p).Length);
		resultlen = 0;
		newrecropetostr_177492(&result, &resultlen, p);
	}
	LA1: ;
	return result;
}

N_NIMCALL(trope177009*, con_177031)(trope177009* a, NimStringDesc* b) {
	trope177009* result;
	trope177009* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = torope_177076(b);
	result = con_177024(a, LOC1);
	return result;
}

N_NIMCALL(void, app_177060)(trope177009** a, NimStringDesc* b) {
	unsureAsgnRef((void**) &(*a), con_177031((*a), b));
}

N_NIMCALL(trope177009*, ropef_177107)(NimStringDesc* frmt, trope177009** args, NI argsLen0) {
	trope177009* result;
	NI i;
	NI length;
	NI num;
	result = 0;
	i = 0;
	length = frmt->Sup.len;
	result = NIM_NIL;
	num = 0;
	{
		while (1) {
			NI start;
			if (!(i <= (NI64)(length - 1))) goto LA2;
			{
				if (!((NU8)(frmt->data[i]) == (NU8)(36))) goto LA5;
				i += 1;
				switch (((NU8)(frmt->data[i]))) {
				case 36:
				{
					app_177060(&result, ((NimStringDesc*) &TMP3329));
					i += 1;
				}
				break;
				case 35:
				{
					i += 1;
					app_177052(&result, args[num]);
					num += 1;
				}
				break;
				case 48 ... 57:
				{
					NI j;
					j = 0;
					{
						while (1) {
							j = (NI64)((NI64)((NI64)(j * 10) + ((NI) (((NU8)(frmt->data[i]))))) - 48);
							i += 1;
							{
								NIM_BOOL LOC14;
								LOC14 = 0;
								LOC14 = ((NI64)((NI64)(length + 0) - 1) < i);
								if (LOC14) goto LA15;
								LOC14 = !((((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57))));
								LA15: ;
								if (!LOC14) goto LA16;
								goto LA10;
							}
							LA16: ;
						}
					} LA10: ;
					num = j;
					{
						NimStringDesc* LOC22;
						if (!((NI64)((argsLen0-1) + 1) < j)) goto LA20;
						LOC22 = 0;
						LOC22 = nimIntToStr(j);
						errorhandler_177143.ClEnv? errorhandler_177143.ClPrc(((NU8) 1), LOC22, NIM_FALSE, errorhandler_177143.ClEnv):((TMP3330)(errorhandler_177143.ClPrc))(((NU8) 1), LOC22, NIM_FALSE);
					}
					goto LA18;
					LA20: ;
					{
						app_177052(&result, args[(NI64)(j - 1)]);
					}
					LA18: ;
				}
				break;
				case 110:
				{
					app_177052(&result, softrnl_178455);
					i += 1;
				}
				break;
				case 78:
				{
					app_177052(&result, rnl_178454);
					i += 1;
				}
				break;
				default:
				{
					NimStringDesc* LOC27;
					LOC27 = 0;
					LOC27 = nimCharToStr(frmt->data[i]);
					errorhandler_177143.ClEnv? errorhandler_177143.ClPrc(((NU8) 1), LOC27, NIM_FALSE, errorhandler_177143.ClEnv):((TMP3331)(errorhandler_177143.ClPrc))(((NU8) 1), LOC27, NIM_FALSE);
				}
				break;
				}
			}
			LA5: ;
			start = i;
			{
				while (1) {
					if (!(i < length)) goto LA29;
					{
						if (!!(((NU8)(frmt->data[i]) == (NU8)(36)))) goto LA32;
						i += 1;
					}
					goto LA30;
					LA32: ;
					{
						goto LA28;
					}
					LA30: ;
				} LA29: ;
			} LA28: ;
			{
				NimStringDesc* LOC39;
				if (!(start <= (NI64)(i - 1))) goto LA37;
				LOC39 = 0;
				LOC39 = copyStrLast(frmt, start, (NI64)(i - 1));
				app_177060(&result, LOC39);
			}
			LA37: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(trope177009*, torope_177082)(NI64 i) {
	trope177009* result;
	NimStringDesc* LOC1;
	result = 0;
	gcacheinttries_177341 += 1;
	LOC1 = 0;
	LOC1 = nimInt64ToStr(i);
	result = torope_177076(LOC1);
	return result;
}

N_NIMCALL(trope177009*, con_177045)(trope177009** a, NI aLen0) {
	trope177009* result;
	result = 0;
	{
		NI i_177939;
		NI HEX3Atmp_177943;
		NI res_177946;
		i_177939 = 0;
		HEX3Atmp_177943 = 0;
		HEX3Atmp_177943 = (aLen0-1);
		res_177946 = 0;
		{
			while (1) {
				if (!(res_177946 <= HEX3Atmp_177943)) goto LA3;
				i_177939 = res_177946;
				result = con_177024(result, a[i_177939]);
				res_177946 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(void, appf_177115)(trope177009** c, NimStringDesc* frmt, trope177009** args, NI argsLen0) {
	trope177009* LOC1;
	LOC1 = 0;
	LOC1 = ropef_177107(frmt, args, argsLen0);
	app_177052(c, LOC1);
}

N_NIMCALL(trope177009*, con_177038)(NimStringDesc* a, trope177009* b) {
	trope177009* result;
	trope177009* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = torope_177076(a);
	result = con_177024(LOC1, b);
	return result;
}

N_NIMCALL(void, prepend_177068)(trope177009** a, trope177009* b) {
	unsureAsgnRef((void**) &(*a), con_177024(b, (*a)));
}

N_NIMCALL(void, writerope_178065)(FILE* f, trope177009* c) {
	TY195552* stack;
	TY177515 LOC1;
	stack = (TY195552*) newSeq((&NTI195552), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = c;
	asgnRefNoCycle((void**) &stack->data[0], LOC1[0]);
	{
		while (1) {
			trope177009* it;
			if (!(0 < stack->Sup.len)) goto LA3;
			it = pop_177533(&stack);
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY195552*) incrSeq(&(stack)->Sup, sizeof(trope177009*));
					asgnRefNoCycle((void**) &stack->data[stack->Sup.len-1], (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			write_12665(f, (*it).Data);
		} LA3: ;
	}
}

N_NIMCALL(void, writerope_178423)(trope177009* head, NimStringDesc* filename, NIM_BOOL usewarning) {
	FILE* f;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_12403(&f, filename, ((NU8) 1), -1);
		if (!LOC3) goto LA4;
		{
			if (!!((head == NIM_NIL))) goto LA8;
			writerope_178065(f, head);
		}
		LA8: ;
		fclose(f);
	}
	goto LA1;
	LA4: ;
	{
		errorhandler_177143.ClEnv? errorhandler_177143.ClPrc(((NU8) 0), filename, usewarning, errorhandler_177143.ClEnv):((TMP4162)(errorhandler_177143.ClPrc))(((NU8) 0), filename, usewarning);
	}
	LA1: ;
}

static N_INLINE(NI32, updatecrc32_176019)(NI8 val, NI32 crc) {
	NI32 result;
	result = 0;
	result = (NI32)(((NI32) (crc32table_176065[((NI)((NI)(((NI) (crc)) ^ ((NI) ((NI)(((NI) (val)) & 255)))) & 255))- 0])) ^ (NI32)((NU32)(crc) >> (NU32)(((NI32) 8))));
	return result;
}

static N_INLINE(NI32, updatecrc32_176026)(NIM_CHAR val, NI32 crc) {
	NI32 result;
	result = 0;
	result = updatecrc32_176019(((NI8)(NU8)(NU)(((NI) (((NU8)(val)))))), crc);
	return result;
}

N_NIMCALL(NI32, newcrcfromropeaux_179093)(trope177009* r, NI32 startval) {
	NI32 result;
	TY195552* stack;
	TY177515 LOC1;
	result = 0;
	stack = (TY195552*) newSeq((&NTI195552), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = r;
	asgnRefNoCycle((void**) &stack->data[0], LOC1[0]);
	result = startval;
	{
		while (1) {
			trope177009* it;
			NI i;
			NI l;
			if (!(0 < stack->Sup.len)) goto LA3;
			it = pop_177533(&stack);
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY195552*) incrSeq(&(stack)->Sup, sizeof(trope177009*));
					asgnRefNoCycle((void**) &stack->data[stack->Sup.len-1], (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			i = 0;
			l = (*it).Data->Sup.len;
			{
				while (1) {
					if (!(i < l)) goto LA7;
					result = updatecrc32_176026((*it).Data->data[i], result);
					i += 1;
				} LA7: ;
			}
		} LA3: ;
	}
	return result;
}

N_NIMCALL(NI32, crcfromrope_179244)(trope177009* r) {
	NI32 result;
	result = 0;
	result = newcrcfromropeaux_179093(r, ((NI32) -1));
	return result;
}

N_NIMCALL(NIM_BOOL, writeropeifnotequal_177094)(trope177009* r, NimStringDesc* filename) {
	NIM_BOOL result;
	NI32 c;
	result = 0;
	c = 0;
	c = crcfromfile_176046(filename);
	{
		NI32 LOC3;
		LOC3 = 0;
		LOC3 = crcfromrope_179244(r);
		if (!!((c == LOC3))) goto LA4;
		writerope_178423(r, filename, NIM_FALSE);
		result = NIM_TRUE;
	}
	goto LA1;
	LA4: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetropecache_177247)(void) {
	{
		NI i_177284;
		NI res_177289;
		i_177284 = 0;
		res_177289 = 0;
		{
			while (1) {
				if (!(((NI) (res_177289)) <= 4095)) goto LA3;
				i_177284 = res_177289;
				asgnRefNoCycle((void**) &cache_177242[(i_177284)- 0], NIM_NIL);
				res_177289 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_ropesInit)(void) {
	gcachetries_177333 = 0;
	gcachemisses_177337 = 0;
	gcacheinttries_177341 = 0;
	asgnRefNoCycle((void**) &rnl_178454, newrope_177176(tnl_174613));
	asgnRefNoCycle((void**) &softrnl_178455, newrope_177176(tnl_174613));
}

NIM_EXTERNC N_NOINLINE(void, HEX00_ropesDatInit)(void) {
static TNimNode* TMP126[4];
static TNimNode TMP57[5];
NTI177009.size = sizeof(trope177009);
NTI177009.kind = 17;
NTI177009.base = (&NTI3211);
NTI177009.flags = 2;
TMP126[0] = &TMP57[1];
TMP57[1].kind = 1;
TMP57[1].offset = offsetof(trope177009, Left);
TMP57[1].typ = (&NTI177007);
TMP57[1].name = "left";
TMP126[1] = &TMP57[2];
TMP57[2].kind = 1;
TMP57[2].offset = offsetof(trope177009, Right);
TMP57[2].typ = (&NTI177007);
TMP57[2].name = "right";
TMP126[2] = &TMP57[3];
TMP57[3].kind = 1;
TMP57[3].offset = offsetof(trope177009, Length);
TMP57[3].typ = (&NTI108);
TMP57[3].name = "length";
TMP126[3] = &TMP57[4];
TMP57[4].kind = 1;
TMP57[4].offset = offsetof(trope177009, Data);
TMP57[4].typ = (&NTI149);
TMP57[4].name = "data";
TMP57[0].len = 4; TMP57[0].kind = 2; TMP57[0].sons = &TMP126[0];
NTI177009.node = &TMP57[0];
NTI177007.size = sizeof(trope177009*);
NTI177007.kind = 22;
NTI177007.base = (&NTI177009);
NTI177007.flags = 2;
NTI177007.marker = TMP127;
}

