/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tsym225849 tsym225849;
typedef struct tsymseq225821 tsymseq225821;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY119408 TY119408;
typedef struct tindexentry358264 tindexentry358264;
typedef struct TY360804 TY360804;
typedef struct tentry415478 tentry415478;
typedef struct TY415485 TY415485;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct ttype225855 ttype225855;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tident201021 tident201021;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tnode225819 tnode225819;
typedef struct tloc225833 tloc225833;
typedef struct trope178009 trope178009;
typedef struct tlib225837 tlib225837;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct TY225939 TY225939;
typedef struct tlistentry127022 tlistentry127022;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym225849* x_412632, tsym225849* y_412634, void* ClEnv);
void* ClEnv;
} TY412638;
struct  TGenericSeq  {
NI len;
NI reserved;
};
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TMP2612) (tsym225849* x_412707, tsym225849* y_412709);
typedef N_CLOSURE_PTR(NI, TMP2613) (tsym225849* x_412707, tsym225849* y_412709);
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (NimStringDesc* x_361564, NimStringDesc* y_361566, void* ClEnv);
void* ClEnv;
} TY361570;
typedef N_CLOSURE_PTR(NI, TMP4764) (NimStringDesc* x_361639, NimStringDesc* y_361641);
typedef N_CLOSURE_PTR(NI, TMP4765) (NimStringDesc* x_361639, NimStringDesc* y_361641);
struct  tindexentry358264  {
NimStringDesc* Keyword;
NimStringDesc* Link;
NimStringDesc* Linktitle;
NimStringDesc* Linkdesc;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tindexentry358264 x_359566, tindexentry358264 y_359568, void* ClEnv);
void* ClEnv;
} TY359572;
typedef N_CLOSURE_PTR(NI, TMP4768) (tindexentry358264 x_359641, tindexentry358264 y_359643);
typedef N_CLOSURE_PTR(NI, TMP4769) (tindexentry358264 x_359641, tindexentry358264 y_359643);
struct  tentry415478  {
NI Pos;
tsym225849* Sym;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tentry415478 x_416138, tentry415478 y_416140, void* ClEnv);
void* ClEnv;
} TY416144;
typedef N_CLOSURE_PTR(NI, TMP4827) (tentry415478 x_416213, tentry415478 y_416215);
typedef N_CLOSURE_PTR(NI, TMP4828) (tentry415478 x_416213, tentry415478 y_416215);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225823  {
NI Counter;
tsymseq225821* Data;
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc225833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225855* T;
trope178009* R;
trope178009* Heaproot;
};
struct  tsym225849  {
  tidobj201015 Sup;
NU8 Kind;
union {
struct {ttypeseq225851* Typeinstcache;
tscope225843* Typscope;
} S1;
struct {TY225950* Procinstcache;
tscope225843* Scope;
} S2;
struct {TY225950* Usedgenerics;
tstrtable225823 Tab;
} S3;
struct {tsym225849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225855* Typ;
tident201021* Name;
tlineinfo196539 Info;
tsym225849* Owner;
NU32 Flags;
tnode225819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225833 Loc;
tlib225837* Annex;
tnode225819* Constraint;
};
struct  ttype225855  {
  tidobj201015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225851* Sons;
tnode225819* N;
tsym225849* Owner;
tsym225849* Sym;
tsym225849* Destructor;
tsym225849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225833 Loc;
};
struct  tscope225843  {
NI Depthlevel;
tstrtable225823 Symbols;
tnodeseq225813* Usingsyms;
tscope225843* Parent;
};
struct  tinstantiation225839  {
tsym225849* Sym;
ttypeseq225851* Concretetypes;
TY225939* Usedby;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  tnode225819  {
ttype225855* Typ;
tlineinfo196539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225849* Sym;
} S4;
struct {tident201021* Ident;
} S5;
struct {tnodeseq225813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode225819* Path;
};
struct tsymseq225821 {
  TGenericSeq Sup;
  tsym225849* data[SEQ_DECL_SIZE];
};
struct TY119408 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY360804 {
  TGenericSeq Sup;
  tindexentry358264 data[SEQ_DECL_SIZE];
};
struct TY415485 {
  TGenericSeq Sup;
  tentry415478 data[SEQ_DECL_SIZE];
};
struct ttypeseq225851 {
  TGenericSeq Sup;
  ttype225855* data[SEQ_DECL_SIZE];
};
struct TY225950 {
  TGenericSeq Sup;
  tinstantiation225839* data[SEQ_DECL_SIZE];
};
struct tnodeseq225813 {
  TGenericSeq Sup;
  tnode225819* data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_412680)(tsym225849** a_412688, NI a_412688Len0, tsym225849** b_412696, NI b_412696Len0, NI lo_412700, NI m_412702, NI hi_412704, TY412638 cmp_412712, NU8 order_412715);
static N_INLINE(NI, HEX2A_356020)(NI x, NU8 order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, merge_361612)(NimStringDesc** a_361620, NI a_361620Len0, NimStringDesc** b_361628, NI b_361628Len0, NI lo_361632, NI m_361634, NI hi_361636, TY361570 cmp_361644, NU8 order_361647);
N_NIMCALL(void, merge_359614)(tindexentry358264* a_359622, NI a_359622Len0, tindexentry358264* b_359630, NI b_359630Len0, NI lo_359634, NI m_359636, NI hi_359638, TY359572 cmp_359646, NU8 order_359649);
N_NIMCALL(void, HEX3CHEX2D_358607)(tindexentry358264* a, tindexentry358264 b);
N_NIMCALL(void, merge_416186)(tentry415478* a_416194, NI a_416194Len0, tentry415478* b_416202, NI b_416202Len0, NI lo_416206, NI m_416208, NI hi_416210, TY416144 cmp_416218, NU8 order_416221);
extern TNimType NTI225821; /* TSymSeq */
extern TNimType NTI108; /* int */
TNimType NTI356033; /* range -1..0(int) */
extern TNimType NTI119408; /* seq[string] */
extern TNimType NTI360804; /* seq[TIndexEntry] */
extern TNimType NTI415485; /* seq[TEntry] */

static N_INLINE(NI, HEX2A_356020)(NI x, NU8 order) {
	NI result;
	NI y;
	result = 0;
	y = (NI32)(((NI) (order)) - 1);
	result = (NI32)((NI)(x ^ ((NI) (y))) - ((NI) (y)));
	return result;
}

N_NIMCALL(void, merge_412680)(tsym225849** a_412688, NI a_412688Len0, tsym225849** b_412696, NI b_412696Len0, NI lo_412700, NI m_412702, NI hi_412704, TY412638 cmp_412712, NU8 order_412715) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_412712.ClEnv? cmp_412712.ClPrc(a_412688[m_412702], a_412688[(NI32)(m_412702 + 1)], cmp_412712.ClEnv):((TMP2612)(cmp_412712.ClPrc))(a_412688[m_412702], a_412688[(NI32)(m_412702 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_356020(LOC3, order_412715);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_412700;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_412702)) goto LA8;
			unsureAsgnRef((void**) &b_412696[bb], a_412688[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_412700;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_412704);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_412712.ClEnv? cmp_412712.ClPrc(b_412696[i], a_412688[j], cmp_412712.ClEnv):((TMP2613)(cmp_412712.ClPrc))(b_412696[i], a_412688[j]);
				LOC16 = 0;
				LOC16 = HEX2A_356020(LOC15, order_412715);
				if (!(LOC16 <= 0)) goto LA17;
				unsureAsgnRef((void**) &a_412688[k], b_412696[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) &a_412688[k], a_412688[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) &a_412688[k], b_412696[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_412619)(tsym225849** a_412627, NI a_412627Len0, TY412638 cmp_412637, NU8 order_412640) {
	NI n;
	tsymseq225821* b;
	NI s;
	n = a_412627Len0;
	b = 0;
	b = (tsymseq225821*) newSeq((&NTI225821), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_412680(a_412627, a_412627Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_412637, order_412640);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_361612)(NimStringDesc** a_361620, NI a_361620Len0, NimStringDesc** b_361628, NI b_361628Len0, NI lo_361632, NI m_361634, NI hi_361636, TY361570 cmp_361644, NU8 order_361647) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_361644.ClEnv? cmp_361644.ClPrc(a_361620[m_361634], a_361620[(NI32)(m_361634 + 1)], cmp_361644.ClEnv):((TMP4764)(cmp_361644.ClPrc))(a_361620[m_361634], a_361620[(NI32)(m_361634 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_356020(LOC3, order_361647);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_361632;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_361634)) goto LA8;
			unsureAsgnRef((void**) &b_361628[bb], a_361620[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_361632;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_361636);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_361644.ClEnv? cmp_361644.ClPrc(b_361628[i], a_361620[j], cmp_361644.ClEnv):((TMP4765)(cmp_361644.ClPrc))(b_361628[i], a_361620[j]);
				LOC16 = 0;
				LOC16 = HEX2A_356020(LOC15, order_361647);
				if (!(LOC16 <= 0)) goto LA17;
				unsureAsgnRef((void**) &a_361620[k], b_361628[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				unsureAsgnRef((void**) &a_361620[k], a_361620[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) &a_361620[k], b_361628[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_361551)(NimStringDesc** a_361559, NI a_361559Len0, TY361570 cmp_361569, NU8 order_361572) {
	NI n;
	TY119408* b;
	NI s;
	n = a_361559Len0;
	b = 0;
	b = (TY119408*) newSeq((&NTI119408), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_361612(a_361559, a_361559Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_361569, order_361572);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_359614)(tindexentry358264* a_359622, NI a_359622Len0, tindexentry358264* b_359630, NI b_359630Len0, NI lo_359634, NI m_359636, NI hi_359638, TY359572 cmp_359646, NU8 order_359649) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_359646.ClEnv? cmp_359646.ClPrc(a_359622[m_359636], a_359622[(NI32)(m_359636 + 1)], cmp_359646.ClEnv):((TMP4768)(cmp_359646.ClPrc))(a_359622[m_359636], a_359622[(NI32)(m_359636 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_356020(LOC3, order_359649);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_359634;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_359636)) goto LA8;
			HEX3CHEX2D_358607(&b_359630[bb], a_359622[j]);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_359634;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_359638);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_359646.ClEnv? cmp_359646.ClPrc(b_359630[i], a_359622[j], cmp_359646.ClEnv):((TMP4769)(cmp_359646.ClPrc))(b_359630[i], a_359622[j]);
				LOC16 = 0;
				LOC16 = HEX2A_356020(LOC15, order_359649);
				if (!(LOC16 <= 0)) goto LA17;
				HEX3CHEX2D_358607(&a_359622[k], b_359630[i]);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				HEX3CHEX2D_358607(&a_359622[k], a_359622[j]);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			HEX3CHEX2D_358607(&a_359622[k], b_359630[i]);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_359553)(tindexentry358264* a_359561, NI a_359561Len0, TY359572 cmp_359571, NU8 order_359574) {
	NI n;
	TY360804* b;
	NI s;
	n = a_359561Len0;
	b = 0;
	b = (TY360804*) newSeq((&NTI360804), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_359614(a_359561, a_359561Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_359571, order_359574);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}

N_NIMCALL(void, merge_416186)(tentry415478* a_416194, NI a_416194Len0, tentry415478* b_416202, NI b_416202Len0, NI lo_416206, NI m_416208, NI hi_416210, TY416144 cmp_416218, NU8 order_416221) {
	NI j;
	NI bb;
	NI i;
	NI k;
	{
		NI LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC3 = cmp_416218.ClEnv? cmp_416218.ClPrc(a_416194[m_416208], a_416194[(NI32)(m_416208 + 1)], cmp_416218.ClEnv):((TMP4827)(cmp_416218.ClPrc))(a_416194[m_416208], a_416194[(NI32)(m_416208 + 1)]);
		LOC4 = 0;
		LOC4 = HEX2A_356020(LOC3, order_416221);
		if (!(LOC4 <= 0)) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	j = lo_416206;
	bb = 0;
	{
		while (1) {
			if (!(j <= m_416208)) goto LA8;
			b_416202[bb].Pos = a_416194[j].Pos;
			unsureAsgnRef((void**) &b_416202[bb].Sym, a_416194[j].Sym);
			bb += 1;
			j += 1;
		} LA8: ;
	}
	i = 0;
	k = lo_416206;
	{
		while (1) {
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (k < j);
			if (!(LOC11)) goto LA12;
			LOC11 = (j <= hi_416210);
			LA12: ;
			if (!LOC11) goto LA10;
			{
				NI LOC15;
				NI LOC16;
				LOC15 = 0;
				LOC15 = cmp_416218.ClEnv? cmp_416218.ClPrc(b_416202[i], a_416194[j], cmp_416218.ClEnv):((TMP4828)(cmp_416218.ClPrc))(b_416202[i], a_416194[j]);
				LOC16 = 0;
				LOC16 = HEX2A_356020(LOC15, order_416221);
				if (!(LOC16 <= 0)) goto LA17;
				a_416194[k].Pos = b_416202[i].Pos;
				unsureAsgnRef((void**) &a_416194[k].Sym, b_416202[i].Sym);
				i += 1;
			}
			goto LA13;
			LA17: ;
			{
				a_416194[k].Pos = a_416194[j].Pos;
				unsureAsgnRef((void**) &a_416194[k].Sym, a_416194[j].Sym);
				j += 1;
			}
			LA13: ;
			k += 1;
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			a_416194[k].Pos = b_416202[i].Pos;
			unsureAsgnRef((void**) &a_416194[k].Sym, b_416202[i].Sym);
			k += 1;
			i += 1;
		} LA21: ;
	}
	BeforeRet: ;
}

N_NIMCALL(void, sort_416125)(tentry415478* a_416133, NI a_416133Len0, TY416144 cmp_416143, NU8 order_416146) {
	NI n;
	TY415485* b;
	NI s;
	n = a_416133Len0;
	b = 0;
	b = (TY415485*) newSeq((&NTI415485), (NI32)(n / 2));
	s = 1;
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI32)((NI32)(n - 1) - s);
			{
				while (1) {
					if (!(0 <= m)) goto LA4;
					merge_416186(a_416133, a_416133Len0, b->data, b->Sup.len, (((NI32)((NI32)(m - s) + 1) >= 0) ? (NI32)((NI32)(m - s) + 1) : 0), m, (NI32)(m + s), cmp_416143, order_416146);
					m -= (NI32)(s * 2);
				} LA4: ;
			}
			s = (NI32)(s * 2);
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit)(void) {
NTI356033.size = sizeof(NI);
NTI356033.kind = 20;
NTI356033.base = (&NTI108);
NTI356033.flags = 3;
}

