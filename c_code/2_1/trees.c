/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode225819 tnode225819;
typedef struct ttype225855 ttype225855;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym225849 tsym225849;
typedef struct tident201021 tident201021;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tloc225833 tloc225833;
typedef struct trope178009 trope178009;
typedef struct tlib225837 tlib225837;
typedef struct tcell44735 tcell44735;
typedef struct tcellseq44751 tcellseq44751;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44747 tcellset44747;
typedef struct tpagedesc44743 tpagedesc44743;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct TY225939 TY225939;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225823  {
NI Counter;
tsymseq225821* Data;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  tcell44735  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44751  {
NI Len;
NI Cap;
tcell44735** D;
};
struct  tcellset44747  {
NI Counter;
NI Max;
tpagedesc44743* Head;
tpagedesc44743** Data;
};
typedef tsmallchunk26240* TY27022[512];
typedef ttrunk26213* ttrunkbuckets26215[256];
struct  tintset26217  {
ttrunkbuckets26215 Data;
};
struct  tmemregion27010  {
NI Minlargeobj;
NI Maxlargeobj;
TY27022 Freesmallchunks;
tllchunk27004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26242* Freechunkslist;
tintset26217 Chunkstarts;
tavlnode27008* Root;
tavlnode27008* Deleted;
tavlnode27008* Last;
tavlnode27008* Freeavlnodes;
};
struct  tgcstat46814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44751 Zct;
tcellseq44751 Decstack;
tcellset44747 Cycleroots;
tcellseq44751 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY26220[16];
struct  tpagedesc44743  {
tpagedesc44743* Next;
NI Key;
TY26220 Bits;
};
struct  tbasechunk26238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26240  {
  tbasechunk26238 Sup;
tsmallchunk26240* Next;
tsmallchunk26240* Prev;
tfreecell26230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27004  {
NI Size;
NI Acc;
tllchunk27004* Next;
};
struct  tbigchunk26242  {
  tbasechunk26238 Sup;
tbigchunk26242* Next;
tbigchunk26242* Prev;
NI Align;
NF Data;
};
struct  ttrunk26213  {
ttrunk26213* Next;
NI Key;
TY26220 Bits;
};
typedef tavlnode27008* TY27014[2];
struct  tavlnode27008  {
TY27014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct tnodeseq225813 {
  TGenericSeq Sup;
  tnode225819* data[SEQ_DECL_SIZE];
};
struct ttypeseq225851 {
  TGenericSeq Sup;
  ttype225855* data[SEQ_DECL_SIZE];
};
struct TY225950 {
  TGenericSeq Sup;
  tinstantiation225839* data[SEQ_DECL_SIZE];
};
struct tsymseq225821 {
  TGenericSeq Sup;
  tsym225849* data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, sonslen_226252)(tnode225819* n);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_260184)(tnode225819* a, tnode225819* b);
N_NIMCALL(tnode225819*, newnodei_226141)(NU8 kind, tlineinfo196539 info);
N_NIMCALL(NIM_BOOL, cyclictreeaux_260088)(tnode225819* n, tnode225819* s);
N_NIMCALL(NIM_BOOL, hasson_260019)(tnode225819* father, tnode225819* son);
N_NIMCALL(void, addson_226290)(tnode225819* father, tnode225819* son);
N_NIMCALL(void, delson_226297)(tnode225819* father, NI idx);
N_NIMCALL(void, unneststmts_261340)(tnode225819* n, tnode225819* result);
static N_INLINE(NI, len_226367)(tnode225819* n);
N_NIMCALL(void, add_226501)(tnode225819* father, tnode225819* son);
N_NIMCALL(tnode225819*, newnodei_228007)(NU8 kind, tlineinfo196539 info, NI children);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_260958)(tnode225819* n);
N_NIMCALL(NU8, whichkeyword_205379)(tident201021* id);
extern tgcheap46816 gch_46844;

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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, sonslen_226252)(tnode225819* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_260184)(tnode225819* a, tnode225819* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			result = ((*(*(*a).kindU.S4.Sym).Name).Sup.Id == (*(*(*b).kindU.S4.Sym).Name).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 10):
		{
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_226252(a);
				LOC22 = 0;
				LOC22 = sonslen_226252(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_260400;
					NI HEX3Atmp_260430;
					NI LOC26;
					NI res_260433;
					i_260400 = 0;
					HEX3Atmp_260430 = 0;
					LOC26 = 0;
					LOC26 = sonslen_226252(a);
					HEX3Atmp_260430 = (NI32)(LOC26 - 1);
					res_260433 = 0;
					{
						while (1) {
							if (!(res_260433 <= HEX3Atmp_260430)) goto LA28;
							i_260400 = res_260433;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = exprstructuralequivalent_260184((*a).kindU.S6.Sons->data[i_260400], (*b).kindU.S6.Sons->data[i_260400]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_260433 += 1;
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, getmagic_260845)(tnode225819* op) {
	NU16 result;
	result = 0;
	switch ((*op).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		switch ((*(*op).kindU.S6.Sons->data[0]).Kind) {
		case ((NU8) 3):
		{
			result = (*(*(*op).kindU.S6.Sons->data[0]).kindU.S4.Sym).Magic;
		}
		break;
		default:
		{
			result = ((NU16) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result = ((NU16) 0);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, hasson_260019)(tnode225819* father, tnode225819* son) {
	NIM_BOOL result;
	result = 0;
	{
		NI i_260036;
		NI HEX3Atmp_260068;
		NI LOC2;
		NI res_260071;
		i_260036 = 0;
		HEX3Atmp_260068 = 0;
		LOC2 = 0;
		LOC2 = sonslen_226252(father);
		HEX3Atmp_260068 = (NI32)(LOC2 - 1);
		res_260071 = 0;
		{
			while (1) {
				if (!(res_260071 <= HEX3Atmp_260068)) goto LA4;
				i_260036 = res_260071;
				{
					if (!((*father).kindU.S6.Sons->data[i_260036] == son)) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_260071 += 1;
			} LA4: ;
		}
	}
	result = NIM_FALSE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_260088)(tnode225819* n, tnode225819* s) {
	NIM_BOOL result;
	NI m;
	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = hasson_260019(s, n);
		if (!LOC7) goto LA8;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m = sonslen_226252(s);
	addson_226290(s, n);
	{
		if (!!(((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23)))) goto LA12;
		{
			NI i_260137;
			NI HEX3Atmp_260153;
			NI LOC15;
			NI res_260156;
			i_260137 = 0;
			HEX3Atmp_260153 = 0;
			LOC15 = 0;
			LOC15 = sonslen_226252(n);
			HEX3Atmp_260153 = (NI32)(LOC15 - 1);
			res_260156 = 0;
			{
				while (1) {
					if (!(res_260156 <= HEX3Atmp_260153)) goto LA17;
					i_260137 = res_260156;
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = cyclictreeaux_260088((*n).kindU.S6.Sons->data[i_260137], s);
						if (!LOC20) goto LA21;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_260156 += 1;
				} LA17: ;
			}
		}
	}
	LA12: ;
	result = NIM_FALSE;
	delson_226297(s, m);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictree_260173)(tnode225819* n) {
	NIM_BOOL result;
	tnode225819* s;
	result = 0;
	s = newnodei_226141(((NU8) 1), (*n).Info);
	result = cyclictreeaux_260088(n, s);
	return result;
}

static N_INLINE(NI, len_226367)(tnode225819* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, unneststmts_261340)(tnode225819* n, tnode225819* result) {
	{
		if (!((*n).Kind == ((NU8) 114))) goto LA3;
		{
			tnode225819* x_261353;
			x_261353 = 0;
			{
				NI i_261372;
				NI HEX3Atmp_261374;
				NI LOC7;
				NI res_261376;
				i_261372 = 0;
				HEX3Atmp_261374 = 0;
				LOC7 = 0;
				LOC7 = len_226367(n);
				HEX3Atmp_261374 = (LOC7 - 1);
				res_261376 = 0;
				{
					while (1) {
						if (!(res_261376 <= HEX3Atmp_261374)) goto LA9;
						i_261372 = res_261376;
						x_261353 = (*n).kindU.S6.Sons->data[i_261372];
						unneststmts_261340(x_261353, result);
						res_261376 += 1;
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n).Kind == ((NU8) 124) || (*n).Kind == ((NU8) 23)))) goto LA11;
		add_226501(result, n);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(tnode225819*, flattenstmts_261395)(tnode225819* n) {
	tnode225819* result;
	result = 0;
	result = newnodei_226141(((NU8) 114), (*n).Info);
	unneststmts_261340(n, result);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_226367(result);
		if (!(LOC3 == 1)) goto LA4;
		result = (*result).kindU.S6.Sons->data[0];
	}
	LA4: ;
	return result;
}

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44735))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44735* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44735* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44735* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48446((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode225819*, extractrange_261419)(NU8 k, tnode225819* n, NI a, NI b) {
	tnode225819* result;
	result = 0;
	result = newnodei_228007(k, (*n).Info, (NI32)((NI32)(b - a) + 1));
	{
		NI i_261436;
		NI HEX3Atmp_261466;
		NI res_261469;
		i_261436 = 0;
		HEX3Atmp_261466 = 0;
		HEX3Atmp_261466 = (NI32)(b - a);
		res_261469 = 0;
		{
			while (1) {
				if (!(res_261469 <= HEX3Atmp_261466)) goto LA3;
				i_261436 = res_261469;
				asgnRefNoCycle((void**) &(*result).kindU.S6.Sons->data[i_261436], (*n).kindU.S6.Sons->data[(NI32)(i_261436 + a)]);
				res_261469 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_260958)(tnode225819* n) {
	NIM_BOOL result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 5) ... ((NU8) 10):
	case ((NU8) 20) ... ((NU8) 22):
	case ((NU8) 16) ... ((NU8) 18):
	case ((NU8) 23):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 33):
	case ((NU8) 34):
	case ((NU8) 58):
	case ((NU8) 59):
	{
		result = isdeepconstexpr_260958((*n).kindU.S6.Sons->data[1]);
	}
	break;
	case ((NU8) 39):
	case ((NU8) 41):
	case ((NU8) 37):
	case ((NU8) 38):
	case ((NU8) 153):
	{
		{
			NI i_260997;
			NI HEX3Atmp_261013;
			NI LOC5;
			NI res_261016;
			i_260997 = 0;
			HEX3Atmp_261013 = 0;
			LOC5 = 0;
			LOC5 = len_226367(n);
			HEX3Atmp_261013 = (LOC5 - 1);
			res_261016 = 0;
			{
				while (1) {
					if (!(res_261016 <= HEX3Atmp_261013)) goto LA7;
					i_260997 = res_261016;
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = isdeepconstexpr_260958((*n).kindU.S6.Sons->data[i_260997]);
						if (!!(LOC10)) goto LA11;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_261016 += 1;
				} LA7: ;
			}
		}
		result = NIM_TRUE;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isconstexpr_260921)(tnode225819* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((*n).Kind >= ((NU8) 5) && (*n).Kind <= ((NU8) 10) || (*n).Kind >= ((NU8) 20) && (*n).Kind <= ((NU8) 22) || (*n).Kind >= ((NU8) 16) && (*n).Kind <= ((NU8) 18) || (*n).Kind == ((NU8) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n).Flags &(1<<((((NU8) 4))&15)))!=0);
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, whichpragma_261283)(tnode225819* n) {
	NU8 result;
	tnode225819* key;
	result = 0;
	{
		if (!((*n).Kind == ((NU8) 34))) goto LA3;
		key = (*n).kindU.S6.Sons->data[0];
	}
	goto LA1;
	LA3: ;
	{
		key = n;
	}
	LA1: ;
	{
		if (!((*key).Kind == ((NU8) 2))) goto LA8;
		result = whichkeyword_205379((*key).kindU.S5.Ident);
	}
	LA8: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_treesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_treesDatInit)(void) {
}

