/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnodetable223879 tnodetable223879;
typedef struct tnode223819 tnode223819;
typedef struct tnodepairseq223877 tnodepairseq223877;
typedef struct tnodepair223875 tnodepair223875;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype223855 ttype223855;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct NimStringDesc NimStringDesc;
typedef struct tsym223849 tsym223849;
typedef struct tident199021 tident199021;
typedef struct tnodeseq223813 tnodeseq223813;
typedef struct tidobj199015 tidobj199015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq223851 ttypeseq223851;
typedef struct tscope223843 tscope223843;
typedef struct TY223950 TY223950;
typedef struct tinstantiation223839 tinstantiation223839;
typedef struct tstrtable223823 tstrtable223823;
typedef struct tsymseq223821 tsymseq223821;
typedef struct tloc223833 tloc223833;
typedef struct trope176009 trope176009;
typedef struct tlib223837 tlib223837;
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
typedef struct TY223939 TY223939;
typedef struct tlistentry126022 tlistentry126022;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
struct  tnodepair223875  {
NI H;
tnode223819* Key;
NI Val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode223819  {
ttype223855* Typ;
tlineinfo194539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym223849* Sym;
} S4;
struct {tident199021* Ident;
} S5;
struct {tnodeseq223813* Sons;
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
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
};
struct  tstrtable223823  {
NI Counter;
tsymseq223821* Data;
};
struct  tloc223833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype223855* T;
trope176009* R;
trope176009* Heaproot;
};
struct  tsym223849  {
  tidobj199015 Sup;
NU8 Kind;
union {
struct {ttypeseq223851* Typeinstcache;
tscope223843* Typscope;
} S1;
struct {TY223950* Procinstcache;
tscope223843* Scope;
} S2;
struct {TY223950* Usedgenerics;
tstrtable223823 Tab;
} S3;
struct {tsym223849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype223855* Typ;
tident199021* Name;
tlineinfo194539 Info;
tsym223849* Owner;
NU32 Flags;
tnode223819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc223833 Loc;
tlib223837* Annex;
tnode223819* Constraint;
};
struct  tnodetable223879  {
NI Counter;
tnodepairseq223877* Data;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  ttype223855  {
  tidobj199015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq223851* Sons;
tnode223819* N;
tsym223849* Owner;
tsym223849* Sym;
tsym223849* Destructor;
tsym223849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc223833 Loc;
};
struct  tscope223843  {
NI Depthlevel;
tstrtable223823 Symbols;
tnodeseq223813* Usingsyms;
tscope223843* Parent;
};
struct  tinstantiation223839  {
tsym223849* Sym;
ttypeseq223851* Concretetypes;
TY223939* Usedby;
};
struct  trope176009  {
  TNimObject Sup;
trope176009* Left;
trope176009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry126022  {
  TNimObject Sup;
tlistentry126022* Prev;
tlistentry126022* Next;
};
struct  tlib223837  {
  tlistentry126022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope176009* Name;
tnode223819* Path;
};
typedef NI TY26220[8];
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
struct tnodepairseq223877 {
  TGenericSeq Sup;
  tnodepair223875 data[SEQ_DECL_SIZE];
};
struct tnodeseq223813 {
  TGenericSeq Sup;
  tnode223819* data[SEQ_DECL_SIZE];
};
struct ttypeseq223851 {
  TGenericSeq Sup;
  ttype223855* data[SEQ_DECL_SIZE];
};
struct TY223950 {
  TGenericSeq Sup;
  tinstantiation223839* data[SEQ_DECL_SIZE];
};
struct tsymseq223821 {
  TGenericSeq Sup;
  tsym223849* data[SEQ_DECL_SIZE];
};
struct TY223939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, hashtree_285027)(tnode223819* n);
static N_INLINE(NI, HEX21HEX26_127025)(NI h, NI val);
N_NIMCALL(NI, hash_127839)(NimStringDesc* x);
static N_INLINE(NI, sonslen_224252)(tnode223819* n);
N_NIMCALL(NI, nodetablerawget_285509)(tnodetable223879 t, NI k, tnode223819* key);
N_NIMCALL(NIM_BOOL, treesequivalent_285243)(tnode223819* a, tnode223819* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_265367)(ttype223855* a, ttype223855* b, NU8 flags);
static N_INLINE(NI, nexttry_233256)(NI h, NI maxhash);
N_NIMCALL(NIM_BOOL, mustrehash_233249)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nodetablerawinsert_285562)(tnodepairseq223877** data, NI k, tnode223819* key, NI val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI223877; /* TNodePairSeq */
extern tgcheap46816 gch_46844;

static N_INLINE(NI, HEX21HEX26_127025)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU64)(h) + (NU64)(val));
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(10))));
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(6)));
	return result;
}

static N_INLINE(NI, sonslen_224252)(tnode223819* n) {
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

N_NIMCALL(NI, hashtree_285027)(tnode223819* n) {
	NI result;
	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result = ((NI) ((*n).Kind));
	switch ((*n).Kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		result = HEX21HEX26_127025(result, (*(*n).kindU.S5.Ident).H);
	}
	break;
	case ((NU8) 3):
	{
		result = HEX21HEX26_127025(result, (*(*(*n).kindU.S4.Sym).Name).H);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = ((IL64(-9223372036854775807) - IL64(1)) <= (*n).kindU.S1.Intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n).kindU.S1.Intval <= IL64(9223372036854775807));
			LA12: ;
			if (!LOC11) goto LA13;
			result = HEX21HEX26_127025(result, ((NI) ((*n).kindU.S1.Intval)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			LOC18 = (-1.0000000000000000e+006 <= (*n).kindU.S2.Floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n).kindU.S2.Floatval <= 1.0000000000000000e+006);
			LA19: ;
			if (!LOC18) goto LA20;
			result = HEX21HEX26_127025(result, float64ToInt32((*n).kindU.S2.Floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		NI LOC23;
		LOC23 = 0;
		LOC23 = hash_127839((*n).kindU.S3.Strval);
		result = HEX21HEX26_127025(result, LOC23);
	}
	break;
	default:
	{
		{
			NI i_285202;
			NI HEX3Atmp_285223;
			NI LOC26;
			NI res_285226;
			i_285202 = 0;
			HEX3Atmp_285223 = 0;
			LOC26 = 0;
			LOC26 = sonslen_224252(n);
			HEX3Atmp_285223 = (NI64)(LOC26 - 1);
			res_285226 = 0;
			{
				while (1) {
					NI LOC29;
					if (!(res_285226 <= HEX3Atmp_285223)) goto LA28;
					i_285202 = res_285226;
					LOC29 = 0;
					LOC29 = hashtree_285027((*n).kindU.S6.Sons->data[i_285202]);
					result = HEX21HEX26_127025(result, LOC29);
					res_285226 += 1;
				} LA28: ;
			}
		}
	}
	break;
	}
	BeforeRet: ;
	return result;
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

N_NIMCALL(NIM_BOOL, treesequivalent_285243)(tnode223819* a, tnode223819* b) {
	NIM_BOOL result;
	result = 0;
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
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			result = ((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
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
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_224252(a);
				LOC22 = 0;
				LOC22 = sonslen_224252(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_285459;
					NI HEX3Atmp_285489;
					NI LOC26;
					NI res_285492;
					i_285459 = 0;
					HEX3Atmp_285489 = 0;
					LOC26 = 0;
					LOC26 = sonslen_224252(a);
					HEX3Atmp_285489 = (NI64)(LOC26 - 1);
					res_285492 = 0;
					{
						while (1) {
							if (!(res_285492 <= HEX3Atmp_285489)) goto LA28;
							i_285459 = res_285492;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = treesequivalent_285243((*a).kindU.S6.Sons->data[i_285459], (*b).kindU.S6.Sons->data[i_285459]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_285492 += 1;
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		{
			if (!result) goto LA36;
			result = sametypeornil_265367((*a).Typ, (*b).Typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_233256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI64)((NI64)(5 * h) + 1) & maxhash);
	return result;
}

N_NIMCALL(NI, nodetablerawget_285509)(tnodetable223879 t, NI k, tnode223819* key) {
	NI result;
	NI h;
	result = 0;
	h = (NI)(k & (t.Data->Sup.len-1));
	{
		while (1) {
			if (!!((t.Data->data[h].Key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = (t.Data->data[h].H == k);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_285243(t.Data->data[h].Key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_233256(h, (t.Data->Sup.len-1));
		} LA2: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

static N_INLINE(tcell44735*, usrtocell_48446)(void* usr) {
	tcell44735* result;
	result = 0;
	result = ((tcell44735*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44735))))));
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, nodetablerawinsert_285562)(tnodepairseq223877** data, NI k, tnode223819* key, NI val) {
	NI h;
	h = (NI)(k & ((*data)->Sup.len-1));
	{
		while (1) {
			if (!!(((*data)->data[h].Key == NIM_NIL))) goto LA2;
			h = nexttry_233256(h, ((*data)->Sup.len-1));
		} LA2: ;
	}
	(*data)->data[h].H = k;
	asgnRefNoCycle((void**) &(*data)->data[h].Key, key);
	(*data)->data[h].Val = val;
}

N_NIMCALL(NI, nodetabletestorset_286121)(tnodetable223879* t, tnode223819* key, NI val) {
	NI result;
	tnodepairseq223877* n;
	NI k;
	NI index;
	result = 0;
	n = 0;
	k = hashtree_285027(key);
	index = nodetablerawget_285509((*t), k, key);
	{
		if (!(0 <= index)) goto LA3;
		result = (*t).Data->data[index].Val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			tnodepairseq223877* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_233249((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			n = (tnodepairseq223877*) newSeq((&NTI223877), (NI64)((*t).Data->Sup.len * 2));
			{
				NI i_286251;
				NI HEX3Atmp_286301;
				NI res_286304;
				i_286251 = 0;
				HEX3Atmp_286301 = 0;
				HEX3Atmp_286301 = ((*t).Data->Sup.len-1);
				res_286304 = 0;
				{
					while (1) {
						if (!(res_286304 <= HEX3Atmp_286301)) goto LA13;
						i_286251 = res_286304;
						{
							if (!!(((*t).Data->data[i_286251].Key == NIM_NIL))) goto LA16;
							nodetablerawinsert_285562(&n, (*t).Data->data[i_286251].H, (*t).Data->data[i_286251].Key, (*t).Data->data[i_286251].Val);
						}
						LA16: ;
						res_286304 += 1;
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).Data;
			unsureAsgnRef((void**) &(*t).Data, n);
			n = LOC18;
		}
		LA9: ;
		nodetablerawinsert_285562(&(*t).Data, k, key, val);
		result = val;
		(*t).Counter += 1;
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_treetabInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_treetabDatInit)(void) {
}

