/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TY419291 TY419291;
typedef struct TY419292 TY419292;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tsym225849 tsym225849;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44733 tcell44733;
typedef struct tcellseq44749 tcellseq44749;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44745 tcellset44745;
typedef struct tpagedesc44741 tpagedesc44741;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY225939 TY225939;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY419292 {
tsymseq225821* Field0;
tsym225849* Field1;
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
struct  tcell44733  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44749  {
NI Len;
NI Cap;
tcell44733** D;
};
struct  tcellset44745  {
NI Counter;
NI Max;
tpagedesc44741* Head;
tpagedesc44741** Data;
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
tcellseq44749 Zct;
tcellseq44749 Decstack;
tcellset44745 Cycleroots;
tcellseq44749 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
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
typedef NimStringDesc* TY170969[2];
typedef tsym225849* TY290499[1];
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
typedef NI TY26220[16];
struct  tpagedesc44741  {
tpagedesc44741* Next;
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
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26220 Bits;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct tsymseq225821 {
  TGenericSeq Sup;
  tsym225849* data[SEQ_DECL_SIZE];
};
struct TY419291 {
  TGenericSeq Sup;
  TY419292 data[SEQ_DECL_SIZE];
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
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP929)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NIM_BOOL, samemethodbucket_419320)(tsym225849* a, tsym225849* b);
static N_INLINE(NI, sonslen_226258)(ttype225855* n);
N_NIMCALL(NIM_BOOL, sametypeornil_267367)(ttype225855* a, ttype225855* b, NU8 flags);
N_NIMCALL(ttype225855*, skiptypes_230245)(ttype225855* t, NU64 kinds);
static N_INLINE(ttype225855*, lastson_226270)(ttype225855* n);
N_NIMCALL(NIM_BOOL, sametype_267351)(ttype225855* a, ttype225855* b, NU8 flags);
N_NIMCALL(NI, inheritancediff_269788)(ttype225855* a, ttype225855* b);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, attachdispatcher_419412)(tsym225849* s, tnode225819* dispatcher);
static N_INLINE(NI, len_226367)(tnode225819* n);
N_NIMCALL(void, add_226501)(tnode225819* father, tnode225819* son);
static N_INLINE(tnode225819*, lastson_226264)(tnode225819* n);
static N_INLINE(NI, sonslen_226252)(tnode225819* n);
N_NIMCALL(void, fixupdispatcher_419628)(tsym225849* meth, tsym225849* disp);
N_NIMCALL(tnode225819*, copytree_226332)(tnode225819* src);
N_NIMCALL(void, message_198959)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, HEX24_228488)(NI16 x);
N_NIMCALL(void, checkmethodeffects_380471)(tsym225849* disp, tsym225849* branch);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(tsym225849*, createdispatcher_419488)(tsym225849* s);
N_NIMCALL(tsym225849*, copysym_226206)(tsym225849* s, NIM_BOOL keepid);
N_NIMCALL(ttype225855*, copytype_226198)(ttype225855* t, tsym225849* owner, NIM_BOOL keepid);
N_NIMCALL(void, addson_226290)(tnode225819* father, tnode225819* son);
N_NIMCALL(tnode225819*, newsymnode_226135)(tsym225849* sym);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_79604, TNimType* mt);
N_NIMCALL(void, internalerror_198970)(tlineinfo196539 info, NimStringDesc* errmsg);
N_NIMCALL(tnode225819*, genconv_419017)(tnode225819* n, ttype225855* d, NIM_BOOL downcast);
N_NIMCALL(tnode225819*, newnodeit_226148)(NU8 kind, tlineinfo196539 info, ttype225855* typ);
N_NIMCALL(tnode225819*, newnode_226093)(NU8 kind);
N_NIMCALL(void, initintset_222950)(intset222056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, relevantcol_420061)(tsymseq225821* methods, NI col);
N_NIMCALL(void, incl_222869)(intset222056* s, NI key);
N_NIMCALL(void, sortbucket_420158)(tsymseq225821** a, intset222056 relevantcols);
N_NIMCALL(NI, cmpsignatures_420111)(tsym225849* a, tsym225849* b, intset222056 relevantcols);
N_NIMCALL(NIM_BOOL, contains_222837)(intset222056 s, NI key);
N_NIMCALL(tsym225849*, gendispatcher_420235)(tsymseq225821* methods, intset222056 relevantcols);
N_NIMCALL(tnode225819*, newnodei_226141)(NU8 kind, tlineinfo196539 info);
N_NIMCALL(tsym225849*, getsyssym_282054)(NimStringDesc* name);
N_NIMCALL(ttype225855*, getsystype_282030)(NU8 kind);
STRING_LITERAL(TMP3118, "method has lock level $1, but another method has $2", 51);
STRING_LITERAL(TMP3126, "no method dispatcher found", 26);
STRING_LITERAL(TMP3127, "cgmeth.genConv", 14);
STRING_LITERAL(TMP3128, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP3129, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP4050, "and", 3);
STRING_LITERAL(TMP4051, "of", 2);
TY419291* gmethods_419315;
TNimType NTI419292; /* tuple[methods: TSymSeq, dispatcher: PSym] */
extern TNimType NTI225821; /* TSymSeq */
extern TNimType NTI225817; /* PSym */
TNimType NTI419291; /* seq[tuple[methods: TSymSeq, dispatcher: PSym]] */
extern tgcheap46816 gch_46844;
extern tnode225819* emptynode_226738;
N_NIMCALL(void, TMP929)(void* p, NI op) {
	TY419291* a;
	NI LOC1;
	a = (TY419291*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(tcell44733*, usrtocell_48446)(void* usr) {
	tcell44733* result;
	result = 0;
	result = ((tcell44733*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44733))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44733* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44733* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

static N_INLINE(NI, sonslen_226258)(ttype225855* n) {
	NI result;
	result = 0;
	{
		if (!(*n).Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(ttype225855*, lastson_226270)(ttype225855* n) {
	ttype225855* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_226258(n);
	result = (*n).Sons->data[(NI32)(LOC1 - 1)];
	return result;
}

N_NIMCALL(NIM_BOOL, samemethodbucket_419320)(tsym225849* a, tsym225849* b) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		if (!!(((*(*a).Name).Sup.Id == (*(*b).Name).Sup.Id))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI LOC7;
		NI LOC8;
		LOC7 = 0;
		LOC7 = sonslen_226258((*a).Typ);
		LOC8 = 0;
		LOC8 = sonslen_226258((*b).Typ);
		if (!!((LOC7 == LOC8))) goto LA9;
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = sametypeornil_267367((*(*a).Typ).Sons->data[0], (*(*b).Typ).Sons->data[0], 0);
		if (!!(LOC13)) goto LA14;
		goto BeforeRet;
	}
	LA14: ;
	{
		NI i_419337;
		NI HEX3Atmp_419386;
		NI LOC17;
		NI res_419389;
		i_419337 = 0;
		HEX3Atmp_419386 = 0;
		LOC17 = 0;
		LOC17 = sonslen_226258((*a).Typ);
		HEX3Atmp_419386 = (NI32)(LOC17 - 1);
		res_419389 = 1;
		{
			while (1) {
				ttype225855* aa;
				ttype225855* bb;
				if (!(res_419389 <= HEX3Atmp_419386)) goto LA19;
				i_419337 = res_419389;
				aa = (*(*a).Typ).Sons->data[i_419337];
				bb = (*(*b).Typ).Sons->data[i_419337];
				{
					while (1) {
						aa = skiptypes_230245(aa, 2048);
						bb = skiptypes_230245(bb, 2048);
						{
							NIM_BOOL LOC24;
							LOC24 = 0;
							LOC24 = ((*aa).Kind == (*bb).Kind);
							if (!(LOC24)) goto LA25;
							LOC24 = ((*aa).Kind == ((NU8) 23) || (*aa).Kind == ((NU8) 21) || (*aa).Kind == ((NU8) 22));
							LA25: ;
							if (!LOC24) goto LA26;
							aa = lastson_226270(aa);
							bb = lastson_226270(bb);
						}
						goto LA22;
						LA26: ;
						{
							goto LA20;
						}
						LA22: ;
					}
				} LA20: ;
				{
					NIM_BOOL LOC31;
					NIM_BOOL LOC33;
					NIM_BOOL LOC34;
					NI LOC37;
					LOC31 = 0;
					LOC31 = sametype_267351(aa, bb, 0);
					if (LOC31) goto LA32;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = ((*aa).Kind == ((NU8) 17));
					if (!(LOC34)) goto LA35;
					LOC34 = ((*bb).Kind == ((NU8) 17));
					LA35: ;
					LOC33 = LOC34;
					if (!(LOC33)) goto LA36;
					LOC37 = 0;
					LOC37 = inheritancediff_269788(bb, aa);
					LOC33 = (LOC37 < 0);
					LA36: ;
					LOC31 = LOC33;
					LA32: ;
					if (!LOC31) goto LA38;
				}
				goto LA29;
				LA38: ;
				{
					goto BeforeRet;
				}
				LA29: ;
				res_419389 += 1;
			} LA19: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44733* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44733* c;
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

N_NIMCALL(void, attachdispatcher_419412)(tsym225849* s, tnode225819* dispatcher) {
	NI l;
	NI LOC1;
	tnode225819* x;
	LOC1 = 0;
	LOC1 = len_226367((*s).Ast);
	l = (NI32)(LOC1 - 1);
	x = (*(*s).Ast).kindU.S6.Sons->data[l];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = ((*x).Kind == ((NU8) 3));
		if (!(LOC4)) goto LA5;
		LOC4 = (((*(*x).kindU.S4.Sym).Flags &(1<<((((NU8) 25))&31)))!=0);
		LA5: ;
		if (!LOC4) goto LA6;
		asgnRefNoCycle((void**) &(*(*s).Ast).kindU.S6.Sons->data[l], dispatcher);
	}
	goto LA2;
	LA6: ;
	{
		add_226501((*s).Ast, dispatcher);
	}
	LA2: ;
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

static N_INLINE(tnode225819*, lastson_226264)(tnode225819* n) {
	tnode225819* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_226252(n);
	result = (*n).kindU.S6.Sons->data[(NI32)(LOC1 - 1)];
	return result;
}

N_NIMCALL(void, fixupdispatcher_419628)(tsym225849* meth, tsym225849* disp) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI LOC5;
		NI LOC7;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = sonslen_226252((*disp).Ast);
		LOC4 = (7 < LOC5);
		if (!(LOC4)) goto LA6;
		LOC7 = 0;
		LOC7 = sonslen_226252((*meth).Ast);
		LOC4 = (7 < LOC7);
		LA6: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*disp).Ast).kindU.S6.Sons->data[7] == emptynode_226738);
		LA8: ;
		if (!LOC3) goto LA9;
		asgnRefNoCycle((void**) &(*(*disp).Ast).kindU.S6.Sons->data[7], copytree_226332((*(*meth).Ast).kindU.S6.Sons->data[7]));
	}
	LA9: ;
	{
		if (!((*(*disp).Typ).Locklevel == ((NI16) -1))) goto LA13;
		(*(*disp).Typ).Locklevel = (*(*meth).Typ).Locklevel;
	}
	goto LA11;
	LA13: ;
	{
		NIM_BOOL LOC16;
		TY170969 LOC20;
		NimStringDesc* LOC21;
		LOC16 = 0;
		LOC16 = !(((*(*meth).Typ).Locklevel == ((NI16) -1)));
		if (!(LOC16)) goto LA17;
		LOC16 = !(((*(*meth).Typ).Locklevel == (*(*disp).Typ).Locklevel));
		LA17: ;
		if (!LOC16) goto LA18;
		memset((void*)LOC20, 0, sizeof(LOC20));
		LOC20[0] = HEX24_228488((*(*meth).Typ).Locklevel);
		LOC20[1] = HEX24_228488((*(*disp).Typ).Locklevel);
		LOC21 = 0;
		LOC21 = nsuFormatOpenArray(((NimStringDesc*) &TMP3118), LOC20, 2);
		message_198959((*meth).Info, ((NU16) 256), LOC21);
		{
			if (!((*(*disp).Typ).Locklevel < (*(*meth).Typ).Locklevel)) goto LA24;
			(*(*disp).Typ).Locklevel = (*(*meth).Typ).Locklevel;
		}
		LA24: ;
	}
	goto LA11;
	LA18: ;
	LA11: ;
}

N_NIMCALL(tsym225849*, createdispatcher_419488)(tsym225849* s) {
	tsym225849* result;
	tsym225849* disp;
	tnode225819* LOC15;
	tnode225819* LOC16;
	result = 0;
	disp = copysym_226206(s, NIM_FALSE);
	(*disp).Flags |= ((NI32)1)<<((((NU8) 25))%(sizeof(NI32)*8));
	(*disp).Flags &= ~(((NI32)1) << ((((NU8) 1)) % (sizeof(NI32)*8)));
	asgnRefNoCycle((void**) &(*disp).Typ, copytype_226198((*disp).Typ, (*(*disp).Typ).Owner, NIM_FALSE));
	{
		if (!((*(*disp).Typ).Callconv == ((NU8) 5))) goto LA3;
		(*(*disp).Typ).Callconv = ((NU8) 0);
	}
	LA3: ;
	asgnRefNoCycle((void**) &(*disp).Ast, copytree_226332((*s).Ast));
	asgnRefNoCycle((void**) &(*(*disp).Ast).kindU.S6.Sons->data[6], emptynode_226738);
	asgnRefNoCycle((void**) &(*disp).Loc.R, NIM_NIL);
	{
		if (!!(((*(*s).Typ).Sons->data[0] == NIM_NIL))) goto LA7;
		{
			NI LOC11;
			LOC11 = 0;
			LOC11 = sonslen_226252((*disp).Ast);
			if (!(7 < LOC11)) goto LA12;
			asgnRefNoCycle((void**) &(*(*(*disp).Ast).kindU.S6.Sons->data[7]).kindU.S4.Sym, copysym_226206((*(*(*s).Ast).kindU.S6.Sons->data[7]).kindU.S4.Sym, NIM_FALSE));
		}
		goto LA9;
		LA12: ;
		{
			addson_226290((*disp).Ast, emptynode_226738);
		}
		LA9: ;
	}
	LA7: ;
	LOC15 = 0;
	LOC15 = newsymnode_226135(disp);
	attachdispatcher_419412(s, LOC15);
	LOC16 = 0;
	LOC16 = newsymnode_226135(disp);
	attachdispatcher_419412(disp, LOC16);
	result = disp;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, methoddef_419824)(tsym225849* s, NIM_BOOL fromcache) {
	NI l;
	TY419292 LOC10;
	TY290499 LOC11;
	l = gmethods_419315->Sup.len;
	{
		NI i_419852;
		NI HEX3Atmp_420041;
		NI res_420044;
		i_419852 = 0;
		HEX3Atmp_420041 = 0;
		HEX3Atmp_420041 = (NI32)(l - 1);
		res_420044 = 0;
		{
			while (1) {
				tsym225849* disp;
				if (!(res_420044 <= HEX3Atmp_420041)) goto LA3;
				i_419852 = res_420044;
				disp = gmethods_419315->data[i_419852].Field1;
				{
					NIM_BOOL LOC6;
					tnode225819* LOC9;
					LOC6 = 0;
					LOC6 = samemethodbucket_419320(disp, s);
					if (!LOC6) goto LA7;
					gmethods_419315->data[i_419852].Field0 = (tsymseq225821*) incrSeq(&(gmethods_419315->data[i_419852].Field0)->Sup, sizeof(tsym225849*));
					asgnRefNoCycle((void**) &gmethods_419315->data[i_419852].Field0->data[gmethods_419315->data[i_419852].Field0->Sup.len-1], s);
					LOC9 = 0;
					LOC9 = lastson_226264((*disp).Ast);
					attachdispatcher_419412(s, LOC9);
					fixupdispatcher_419628(s, disp);
					checkmethodeffects_380471(disp, s);
					goto BeforeRet;
				}
				LA7: ;
				res_420044 += 1;
			} LA3: ;
		}
	}
	memset((void*)&LOC10, 0, sizeof(LOC10));
	LOC10.Field0 = (tsymseq225821*) newSeq((&NTI225821), 1);
	memset((void*)LOC11, 0, sizeof(LOC11));
	LOC11[0] = s;
	asgnRefNoCycle((void**) &LOC10.Field0->data[0], LOC11[0]);
	LOC10.Field1 = createdispatcher_419488(s);
	gmethods_419315 = (TY419291*) incrSeq(&(gmethods_419315)->Sup, sizeof(TY419292));
	genericSeqAssign(&gmethods_419315->data[gmethods_419315->Sup.len-1].Field0, LOC10.Field0, (&NTI225821));
	asgnRefNoCycle((void**) &gmethods_419315->data[gmethods_419315->Sup.len-1].Field1, LOC10.Field1);
	{
		if (!fromcache) goto LA14;
		internalerror_198970((*s).Info, ((NimStringDesc*) &TMP3126));
	}
	LA14: ;
	BeforeRet: ;
}

N_NIMCALL(tnode225819*, genconv_419017)(tnode225819* n, ttype225855* d, NIM_BOOL downcast) {
	tnode225819* result;
	ttype225855* dest;
	ttype225855* source;
	result = 0;
	dest = skiptypes_230245(d, IL64(211106247256320));
	source = skiptypes_230245((*n).Typ, IL64(211106247256320));
	{
		NIM_BOOL LOC3;
		NI diff;
		LOC3 = 0;
		LOC3 = ((*source).Kind == ((NU8) 17));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*dest).Kind == ((NU8) 17));
		LA4: ;
		if (!LOC3) goto LA5;
		diff = inheritancediff_269788(dest, source);
		{
			if (!(diff == 2147483647)) goto LA9;
			internalerror_198970((*n).Info, ((NimStringDesc*) &TMP3127));
		}
		LA9: ;
		{
			if (!(diff < 0)) goto LA13;
			result = newnodeit_226148(((NU8) 67), (*n).Info, d);
			addson_226290(result, n);
			{
				if (!downcast) goto LA17;
				internalerror_198970((*n).Info, ((NimStringDesc*) &TMP3128));
			}
			LA17: ;
		}
		goto LA11;
		LA13: ;
		{
			if (!(0 < diff)) goto LA20;
			result = newnodeit_226148(((NU8) 66), (*n).Info, d);
			addson_226290(result, n);
			{
				if (!!(downcast)) goto LA24;
				internalerror_198970((*n).Info, ((NimStringDesc*) &TMP3129));
			}
			LA24: ;
		}
		goto LA11;
		LA20: ;
		{
			result = n;
		}
		LA11: ;
	}
	goto LA1;
	LA5: ;
	{
		result = n;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode225819*, methodcall_419056)(tnode225819* n) {
	tnode225819* result;
	tsym225849* disp;
	tnode225819* LOC1;
	result = 0;
	result = n;
	LOC1 = 0;
	LOC1 = lastson_226264((*(*(*result).kindU.S6.Sons->data[0]).kindU.S4.Sym).Ast);
	disp = (*LOC1).kindU.S4.Sym;
	asgnRefNoCycle((void**) &(*(*result).kindU.S6.Sons->data[0]).kindU.S4.Sym, disp);
	{
		NI i_419241;
		NI HEX3Atmp_419271;
		NI LOC3;
		NI res_419274;
		i_419241 = 0;
		HEX3Atmp_419271 = 0;
		LOC3 = 0;
		LOC3 = sonslen_226252(result);
		HEX3Atmp_419271 = (NI32)(LOC3 - 1);
		res_419274 = 1;
		{
			while (1) {
				if (!(res_419274 <= HEX3Atmp_419271)) goto LA5;
				i_419241 = res_419274;
				asgnRefNoCycle((void**) &(*result).kindU.S6.Sons->data[i_419241], genconv_419017((*result).kindU.S6.Sons->data[i_419241], (*(*disp).Typ).Sons->data[i_419241], NIM_TRUE));
				res_419274 += 1;
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, relevantcol_420061)(tsymseq225821* methods, NI col) {
	NIM_BOOL result;
	ttype225855* t;
	result = 0;
	t = skiptypes_230245((*(*methods->data[0]).Typ).Sons->data[col], IL64(211106247215360));
	{
		if (!((*t).Kind == ((NU8) 17))) goto LA3;
		{
			NI i_420088;
			NI HEX3Atmp_420091;
			NI res_420094;
			i_420088 = 0;
			HEX3Atmp_420091 = 0;
			HEX3Atmp_420091 = (methods->Sup.len-1);
			res_420094 = 1;
			{
				while (1) {
					ttype225855* t2;
					if (!(res_420094 <= HEX3Atmp_420091)) goto LA7;
					i_420088 = res_420094;
					t2 = skiptypes_230245((*(*methods->data[i_420088]).Typ).Sons->data[col], IL64(211106247215360));
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = sametype_267351(t2, t, 0);
						if (!!(LOC10)) goto LA11;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA11: ;
					res_420094 += 1;
				} LA7: ;
			}
		}
	}
	LA3: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, cmpsignatures_420111)(tsym225849* a, tsym225849* b, intset222056 relevantcols) {
	NI result;
	result = 0;
	{
		NI col_420129;
		NI HEX3Atmp_420138;
		NI LOC2;
		NI res_420141;
		col_420129 = 0;
		HEX3Atmp_420138 = 0;
		LOC2 = 0;
		LOC2 = sonslen_226258((*a).Typ);
		HEX3Atmp_420138 = (NI32)(LOC2 - 1);
		res_420141 = 1;
		{
			while (1) {
				if (!(res_420141 <= HEX3Atmp_420138)) goto LA4;
				col_420129 = res_420141;
				{
					NIM_BOOL LOC7;
					ttype225855* aa;
					ttype225855* bb;
					NI d;
					LOC7 = 0;
					LOC7 = contains_222837(relevantcols, col_420129);
					if (!LOC7) goto LA8;
					aa = skiptypes_230245((*(*a).Typ).Sons->data[col_420129], IL64(211106247215360));
					bb = skiptypes_230245((*(*b).Typ).Sons->data[col_420129], IL64(211106247215360));
					d = inheritancediff_269788(aa, bb);
					{
						if (!!((d == 2147483647))) goto LA12;
						result = d;
						goto BeforeRet;
					}
					LA12: ;
				}
				LA8: ;
				res_420141 += 1;
			} LA4: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, sortbucket_420158)(tsymseq225821** a, intset222056 relevantcols) {
	NI n;
	NI h;
	n = (*a)->Sup.len;
	h = 1;
	{
		while (1) {
			h = (NI32)((NI32)(3 * h) + 1);
			{
				if (!(n < h)) goto LA5;
				goto LA1;
			}
			LA5: ;
		}
	} LA1: ;
	{
		while (1) {
			h = (NI32)(h / 3);
			{
				NI i_420189;
				NI HEX3Atmp_420197;
				NI res_420200;
				i_420189 = 0;
				HEX3Atmp_420197 = 0;
				HEX3Atmp_420197 = (NI32)(n - 1);
				res_420200 = h;
				{
					while (1) {
						tsym225849* v;
						NI j;
						if (!(res_420200 <= HEX3Atmp_420197)) goto LA11;
						i_420189 = res_420200;
						v = (*a)->data[i_420189];
						j = i_420189;
						{
							while (1) {
								NI LOC14;
								LOC14 = 0;
								LOC14 = cmpsignatures_420111((*a)->data[(NI32)(j - h)], v, relevantcols);
								if (!(0 <= LOC14)) goto LA13;
								asgnRefNoCycle((void**) &(*a)->data[j], (*a)->data[(NI32)(j - h)]);
								j = (NI32)(j - h);
								{
									if (!(j < h)) goto LA17;
									goto LA12;
								}
								LA17: ;
							} LA13: ;
						} LA12: ;
						asgnRefNoCycle((void**) &(*a)->data[j], v);
						res_420200 += 1;
					} LA11: ;
				}
			}
			{
				if (!(h == 1)) goto LA21;
				goto LA7;
			}
			LA21: ;
		}
	} LA7: ;
}

N_NIMCALL(tsym225849*, gendispatcher_420235)(tsymseq225821* methods, intset222056 relevantcols) {
	tsym225849* result;
	tsym225849* base;
	tnode225819* LOC1;
	NI paramlen;
	tnode225819* disp;
	tsym225849* ands;
	tsym225849* iss;
	result = 0;
	LOC1 = 0;
	LOC1 = lastson_226264((*methods->data[0]).Ast);
	base = (*LOC1).kindU.S4.Sym;
	result = base;
	paramlen = sonslen_226258((*base).Typ);
	disp = newnodei_226141(((NU8) 92), (*base).Info);
	ands = getsyssym_282054(((NimStringDesc*) &TMP4050));
	iss = getsyssym_282054(((NimStringDesc*) &TMP4051));
	{
		NI meth_420271;
		NI HEX3Atmp_420470;
		NI res_420473;
		meth_420271 = 0;
		HEX3Atmp_420470 = 0;
		HEX3Atmp_420470 = (methods->Sup.len-1);
		res_420473 = 0;
		{
			while (1) {
				tsym225849* curr;
				tnode225819* cond;
				tnode225819* call;
				tnode225819* LOC24;
				tnode225819* ret;
				if (!(res_420473 <= HEX3Atmp_420470)) goto LA4;
				meth_420271 = res_420473;
				curr = methods->data[meth_420271];
				cond = NIM_NIL;
				{
					NI col_420286;
					NI HEX3Atmp_420458;
					NI res_420461;
					col_420286 = 0;
					HEX3Atmp_420458 = 0;
					HEX3Atmp_420458 = (NI32)(paramlen - 1);
					res_420461 = 1;
					{
						while (1) {
							if (!(res_420461 <= HEX3Atmp_420458)) goto LA7;
							col_420286 = res_420461;
							{
								NIM_BOOL LOC10;
								tnode225819* isn;
								ttype225855* LOC13;
								tnode225819* LOC14;
								tnode225819* LOC15;
								tnode225819* LOC16;
								LOC10 = 0;
								LOC10 = contains_222837(relevantcols, col_420286);
								if (!LOC10) goto LA11;
								LOC13 = 0;
								LOC13 = getsystype_282030(((NU8) 1));
								isn = newnodeit_226148(((NU8) 27), (*base).Info, LOC13);
								LOC14 = 0;
								LOC14 = newsymnode_226135(iss);
								addson_226290(isn, LOC14);
								LOC15 = 0;
								LOC15 = newsymnode_226135((*(*(*(*base).Typ).N).kindU.S6.Sons->data[col_420286]).kindU.S4.Sym);
								addson_226290(isn, LOC15);
								LOC16 = 0;
								LOC16 = newnodeit_226148(((NU8) 4), (*base).Info, (*(*curr).Typ).Sons->data[col_420286]);
								addson_226290(isn, LOC16);
								{
									tnode225819* a;
									ttype225855* LOC21;
									tnode225819* LOC22;
									if (!!((cond == NIM_NIL))) goto LA19;
									LOC21 = 0;
									LOC21 = getsystype_282030(((NU8) 1));
									a = newnodeit_226148(((NU8) 27), (*base).Info, LOC21);
									LOC22 = 0;
									LOC22 = newsymnode_226135(ands);
									addson_226290(a, LOC22);
									addson_226290(a, cond);
									addson_226290(a, isn);
									cond = a;
								}
								goto LA17;
								LA19: ;
								{
									cond = isn;
								}
								LA17: ;
							}
							LA11: ;
							res_420461 += 1;
						} LA7: ;
					}
				}
				call = newnodei_226141(((NU8) 27), (*base).Info);
				LOC24 = 0;
				LOC24 = newsymnode_226135(curr);
				addson_226290(call, LOC24);
				{
					NI col_420347;
					NI HEX3Atmp_420464;
					NI res_420467;
					col_420347 = 0;
					HEX3Atmp_420464 = 0;
					HEX3Atmp_420464 = (NI32)(paramlen - 1);
					res_420467 = 1;
					{
						while (1) {
							tnode225819* LOC28;
							tnode225819* LOC29;
							if (!(res_420467 <= HEX3Atmp_420464)) goto LA27;
							col_420347 = res_420467;
							LOC28 = 0;
							LOC28 = newsymnode_226135((*(*(*(*base).Typ).N).kindU.S6.Sons->data[col_420347]).kindU.S4.Sym);
							LOC29 = 0;
							LOC29 = genconv_419017(LOC28, (*(*curr).Typ).Sons->data[col_420347], NIM_FALSE);
							addson_226290(call, LOC29);
							res_420467 += 1;
						} LA27: ;
					}
				}
				ret = 0;
				{
					tnode225819* a;
					tnode225819* LOC34;
					if (!!(((*(*base).Typ).Sons->data[0] == NIM_NIL))) goto LA32;
					a = newnodei_226141(((NU8) 73), (*base).Info);
					LOC34 = 0;
					LOC34 = newsymnode_226135((*(*(*base).Ast).kindU.S6.Sons->data[7]).kindU.S4.Sym);
					addson_226290(a, LOC34);
					addson_226290(a, call);
					ret = newnodei_226141(((NU8) 108), (*base).Info);
					addson_226290(ret, a);
				}
				goto LA30;
				LA32: ;
				{
					ret = call;
				}
				LA30: ;
				{
					tnode225819* a;
					if (!!((cond == NIM_NIL))) goto LA38;
					a = newnodei_226141(((NU8) 86), (*base).Info);
					addson_226290(a, cond);
					addson_226290(a, ret);
					addson_226290(disp, a);
				}
				goto LA36;
				LA38: ;
				{
					disp = ret;
				}
				LA36: ;
				res_420473 += 1;
			} LA4: ;
		}
	}
	asgnRefNoCycle((void**) &(*(*result).Ast).kindU.S6.Sons->data[6], disp);
	return result;
}

N_NIMCALL(tnode225819*, generatemethoddispatchers_420508)(void) {
	tnode225819* result;
	result = 0;
	result = newnode_226093(((NU8) 114));
	{
		NI bucket_420534;
		NI HEX3Atmp_420558;
		NI res_420561;
		bucket_420534 = 0;
		HEX3Atmp_420558 = 0;
		HEX3Atmp_420558 = (NI32)(gmethods_419315->Sup.len - 1);
		res_420561 = 0;
		{
			while (1) {
				intset222056 relevantcols;
				tsym225849* LOC13;
				tnode225819* LOC14;
				if (!(res_420561 <= HEX3Atmp_420558)) goto LA3;
				bucket_420534 = res_420561;
				memset((void*)&relevantcols, 0, sizeof(relevantcols));
				chckNil((void*)&relevantcols);
				memset((void*)&relevantcols, 0, sizeof(relevantcols));
				initintset_222950(&relevantcols);
				{
					NI col_420548;
					NI HEX3Atmp_420553;
					NI LOC5;
					NI res_420556;
					col_420548 = 0;
					HEX3Atmp_420553 = 0;
					LOC5 = 0;
					LOC5 = sonslen_226258((*gmethods_419315->data[bucket_420534].Field0->data[0]).Typ);
					HEX3Atmp_420553 = (NI32)(LOC5 - 1);
					res_420556 = 1;
					{
						while (1) {
							if (!(res_420556 <= HEX3Atmp_420553)) goto LA7;
							col_420548 = res_420556;
							{
								NIM_BOOL LOC10;
								LOC10 = 0;
								LOC10 = relevantcol_420061(gmethods_419315->data[bucket_420534].Field0, col_420548);
								if (!LOC10) goto LA11;
								incl_222869(&relevantcols, col_420548);
							}
							LA11: ;
							res_420556 += 1;
						} LA7: ;
					}
				}
				sortbucket_420158(&gmethods_419315->data[bucket_420534].Field0, relevantcols);
				LOC13 = 0;
				LOC13 = gendispatcher_420235(gmethods_419315->data[bucket_420534].Field0, relevantcols);
				LOC14 = 0;
				LOC14 = newsymnode_226135(LOC13);
				addson_226290(result, LOC14);
				res_420561 += 1;
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_cgmethInit)(void) {
	if (gmethods_419315) nimGCunrefNoCycle(gmethods_419315);
	gmethods_419315 = (TY419291*) newSeqRC1((&NTI419291), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_cgmethDatInit)(void) {
static TNimNode* TMP928[2];
static TNimNode TMP926[3];
NTI419292.size = sizeof(TY419292);
NTI419292.kind = 18;
NTI419292.base = 0;
NTI419292.flags = 2;
TMP928[0] = &TMP926[1];
TMP926[1].kind = 1;
TMP926[1].offset = offsetof(TY419292, Field0);
TMP926[1].typ = (&NTI225821);
TMP926[1].name = "Field0";
TMP928[1] = &TMP926[2];
TMP926[2].kind = 1;
TMP926[2].offset = offsetof(TY419292, Field1);
TMP926[2].typ = (&NTI225817);
TMP926[2].name = "Field1";
TMP926[0].len = 2; TMP926[0].kind = 2; TMP926[0].sons = &TMP928[0];
NTI419292.node = &TMP926[0];
NTI419291.size = sizeof(TY419291*);
NTI419291.kind = 24;
NTI419291.base = (&NTI419292);
NTI419291.flags = 2;
NTI419291.marker = TMP929;
}

