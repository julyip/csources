/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope178009 trope178009;
typedef struct TY545150 TY545150;
typedef struct tcgen545035 tcgen545035;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct TNimObject TNimObject;
typedef struct tsym225849 tsym225849;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable225867 tidtable225867;
typedef struct tidpairseq225865 tidpairseq225865;
typedef struct tidpair225863 tidpair225863;
typedef struct tidobj201015 tidobj201015;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc545031 tcproc545031;
typedef struct ttypeseq225851 ttypeseq225851;
typedef struct ttype225855 ttype225855;
typedef struct tnodetable225879 tnodetable225879;
typedef struct tnodepairseq225877 tnodepairseq225877;
typedef struct tnodepair225875 tnodepair225875;
typedef struct tnode225819 tnode225819;
typedef struct tsymseq225821 tsymseq225821;
typedef struct tnodeseq225813 tnodeseq225813;
typedef struct TY196552 TY196552;
typedef struct TY545102 TY545102;
typedef struct tblock545029 tblock545029;
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
typedef struct tscope225843 tscope225843;
typedef struct TY225950 TY225950;
typedef struct tinstantiation225839 tinstantiation225839;
typedef struct tstrtable225823 tstrtable225823;
typedef struct tident201021 tident201021;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tloc225833 tloc225833;
typedef struct tlib225837 tlib225837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY225939 TY225939;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope178009* tcfilesections545019[18];
struct  tidpair225863  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable225867  {
NI Counter;
tidpairseq225865* Data;
};
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair225875  {
NI H;
tnode225819* Key;
NI Val;
};
struct  tnodetable225879  {
NI Counter;
tnodepairseq225877* Data;
};
typedef trope178009* TY545138[10];
struct  tcgen545035  {
  tpasscontext286005 Sup;
tsym225849* Module;
NimStringDesc* Filename;
tcfilesections545019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable225867 Typecache;
tidtable225867 Forwtypecache;
intset222056 Declaredthings;
intset222056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset222056 Typeinfomarker;
tcproc545031* Initproc;
tcproc545031* Postinitproc;
tcproc545031* Preinitproc;
ttypeseq225851* Typestack;
tnodetable225879 Datacache;
tsymseq225821* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope178009* Typenodesname;
trope178009* Nimtypesname;
NI Labels;
TY545138 Extensionloaders;
trope178009* Injectstmt;
};
typedef trope178009* tcprocsections545023[3];
struct  tblock545029  {
NI Id;
trope178009* Label;
tcprocsections545023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc545031  {
tsym225849* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq225813* Nestedtrystmts;
NI Inexceptblock;
TY196552* Finallysafepoints;
NI Labels;
TY545102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen545035* Module;
NI Withinloop;
NI Gcframeid;
trope178009* Gcframetype;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26220[16];
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26220 Bits;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  tlib225837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode225819* Path;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY545150 {
  TGenericSeq Sup;
  tcgen545035* data[SEQ_DECL_SIZE];
};
struct tidpairseq225865 {
  TGenericSeq Sup;
  tidpair225863 data[SEQ_DECL_SIZE];
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct ttypeseq225851 {
  TGenericSeq Sup;
  ttype225855* data[SEQ_DECL_SIZE];
};
struct tnodepairseq225877 {
  TGenericSeq Sup;
  tnodepair225875 data[SEQ_DECL_SIZE];
};
struct tsymseq225821 {
  TGenericSeq Sup;
  tsym225849* data[SEQ_DECL_SIZE];
};
struct tnodeseq225813 {
  TGenericSeq Sup;
  tnode225819* data[SEQ_DECL_SIZE];
};
struct TY196552 {
  TGenericSeq Sup;
  trope178009* data[SEQ_DECL_SIZE];
};
struct TY545102 {
  TGenericSeq Sup;
  tblock545029 data[SEQ_DECL_SIZE];
};
struct TY225950 {
  TGenericSeq Sup;
  tinstantiation225839* data[SEQ_DECL_SIZE];
};
struct TY225939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP969)(void* p, NI op);
N_NIMCALL(void, TMP970)(void* p, NI op);
N_NIMCALL(void, TMP974)(void* p, NI op);
N_NIMCALL(void, TMP975)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_50404)(tcell44733* c);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44733* c);
static N_INLINE(void, rtladdcycleroot_49229)(tcell44733* c);
N_NOINLINE(void, incl_45471)(tcellset44745* s, tcell44733* cell);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50825)(tcell44733* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
trope178009* mainmodprocs_545145;
trope178009* mainmodinit_545146;
trope178009* othermodsinit_545147;
trope178009* maindatinit_545148;
trope178009* gmapping_545149;
TY545150* gmodules_545171;
extern TNimType NTI286005; /* TPassContext */
TNimType NTI545035; /* TCGen */
extern TNimType NTI225817; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI178007; /* PRope */
TNimType NTI545019; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI225867; /* TIdTable */
extern TNimType NTI222056; /* IntSet */
extern TNimType NTI127028; /* TLinkedList */
TNimType NTI545031; /* TCProc */
extern TNimType NTI225813; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI196552; /* seq[PRope] */
extern TNimType NTI74921; /* range 0..2147483647(int) */
TNimType NTI545029; /* TBlock */
TNimType NTI545023; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI545102; /* seq[TBlock] */
extern TNimType NTI170016; /* TOptions */
TNimType NTI545027; /* BProc */
extern TNimType NTI225851; /* TTypeSeq */
extern TNimType NTI225879; /* TNodeTable */
extern TNimType NTI225821; /* TSymSeq */
TNimType NTI545138; /* array[48..57, PRope] */
TNimType NTI545025; /* BModule */
TNimType NTI545150; /* seq[BModule] */
extern tgcheap46816 gch_46844;
NI gforwardedprocscounter_545172;
extern NU32 goptions_170116;
N_NIMCALL(void, TMP969)(void* p, NI op) {
	TY545102* a;
	NI LOC1;
	NI LOC2;
	a = (TY545102*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP970)(void* p, NI op) {
	tcproc545031* a;
	a = (tcproc545031*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Finallysafepoints, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP974)(void* p, NI op) {
	tcgen545035* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen545035*)p;
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Filename, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).S[LOC1], op);
	}
	nimGCvisit((void*)(*a).Cfilename, op);
	nimGCvisit((void*)(*a).Typecache.Data, op);
	nimGCvisit((void*)(*a).Forwtypecache.Data, op);
	nimGCvisit((void*)(*a).Declaredthings.Head, op);
	nimGCvisit((void*)(*a).Declaredthings.Data, op);
	nimGCvisit((void*)(*a).Declaredprotos.Head, op);
	nimGCvisit((void*)(*a).Declaredprotos.Data, op);
	nimGCvisit((void*)(*a).Headerfiles.Head, op);
	nimGCvisit((void*)(*a).Headerfiles.Tail, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Head, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Data, op);
	nimGCvisit((void*)(*a).Initproc, op);
	nimGCvisit((void*)(*a).Postinitproc, op);
	nimGCvisit((void*)(*a).Preinitproc, op);
	nimGCvisit((void*)(*a).Typestack, op);
	nimGCvisit((void*)(*a).Datacache.Data, op);
	nimGCvisit((void*)(*a).Forwardedprocs, op);
	nimGCvisit((void*)(*a).Typenodesname, op);
	nimGCvisit((void*)(*a).Nimtypesname, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).Extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).Injectstmt, op);
}
N_NIMCALL(void, TMP975)(void* p, NI op) {
	TY545150* a;
	NI LOC1;
	a = (TY545150*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_50004)(tcell44733* c) {
	addzct_48417(&gch_46844.Zct, c);
}

static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44733* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49229)(tcell44733* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45471(&gch_46844.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, decref_50404)(tcell44733* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49229(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(tcell44733*, usrtocell_48446)(void* usr) {
	tcell44733* result;
	result = 0;
	result = ((tcell44733*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44733))))));
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell44733* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_48446(p);
	decref_50404(LOC1);
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

static N_INLINE(void, incref_50825)(tcell44733* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49229(c);
	}
	LA4: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44733* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48446(src);
		incref_50825(LOC5);
	}
	LA3: ;
	{
		tcell44733* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48446((*dest));
		decref_50404(LOC10);
	}
	LA8: ;
	(*dest) = src;
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

N_NIMCALL(tcproc545031*, newproc_545230)(tsym225849* prc, tcgen545035* module) {
	tcproc545031* result;
	result = 0;
	result = (tcproc545031*) newObj((&NTI545027), sizeof(tcproc545031));
	asgnRefNoCycle((void**) &(*result).Prc, prc);
	asgnRef((void**) &(*result).Module, module);
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).Options = (*prc).Options;
	}
	goto LA1;
	LA3: ;
	{
		(*result).Options = goptions_170116;
	}
	LA1: ;
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY545102*) newSeqRC1((&NTI545102), 1);
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq225813*) newSeqRC1((&NTI225813), 0);
	if ((*result).Finallysafepoints) nimGCunrefNoCycle((*result).Finallysafepoints);
	(*result).Finallysafepoints = (TY196552*) newSeqRC1((&NTI196552), 0);
	return result;
}

N_NIMCALL(tcgen545035*, bmod_545220)(tsym225849* module) {
	tcgen545035* result;
	result = 0;
	result = gmodules_545171->data[(*module).Position];
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_cgendataInit)(void) {
	if (gmodules_545171) nimGCunref(gmodules_545171);
	gmodules_545171 = (TY545150*) newSeqRC1((&NTI545150), 0);
	gforwardedprocscounter_545172 = 0;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_cgendataDatInit)(void) {
static TNimNode* TMP961[29];
static TNimNode* TMP967[15];
static TNimNode* TMP968[7];
static TNimNode TMP959[54];
NTI545035.size = sizeof(tcgen545035);
NTI545035.kind = 17;
NTI545035.base = (&NTI286005);
TMP961[0] = &TMP959[1];
TMP959[1].kind = 1;
TMP959[1].offset = offsetof(tcgen545035, Module);
TMP959[1].typ = (&NTI225817);
TMP959[1].name = "module";
TMP961[1] = &TMP959[2];
TMP959[2].kind = 1;
TMP959[2].offset = offsetof(tcgen545035, Filename);
TMP959[2].typ = (&NTI149);
TMP959[2].name = "filename";
TMP961[2] = &TMP959[3];
NTI545019.size = sizeof(tcfilesections545019);
NTI545019.kind = 16;
NTI545019.base = (&NTI178007);
NTI545019.flags = 2;
TMP959[3].kind = 1;
TMP959[3].offset = offsetof(tcgen545035, S);
TMP959[3].typ = (&NTI545019);
TMP959[3].name = "s";
TMP961[3] = &TMP959[4];
TMP959[4].kind = 1;
TMP959[4].offset = offsetof(tcgen545035, Preventstacktrace);
TMP959[4].typ = (&NTI138);
TMP959[4].name = "preventStackTrace";
TMP961[4] = &TMP959[5];
TMP959[5].kind = 1;
TMP959[5].offset = offsetof(tcgen545035, Usesthreadvars);
TMP959[5].typ = (&NTI138);
TMP959[5].name = "usesThreadVars";
TMP961[5] = &TMP959[6];
TMP959[6].kind = 1;
TMP959[6].offset = offsetof(tcgen545035, Framedeclared);
TMP959[6].typ = (&NTI138);
TMP959[6].name = "frameDeclared";
TMP961[6] = &TMP959[7];
TMP959[7].kind = 1;
TMP959[7].offset = offsetof(tcgen545035, Isheaderfile);
TMP959[7].typ = (&NTI138);
TMP959[7].name = "isHeaderFile";
TMP961[7] = &TMP959[8];
TMP959[8].kind = 1;
TMP959[8].offset = offsetof(tcgen545035, Includesstringh);
TMP959[8].typ = (&NTI138);
TMP959[8].name = "includesStringh";
TMP961[8] = &TMP959[9];
TMP959[9].kind = 1;
TMP959[9].offset = offsetof(tcgen545035, Objhaskidsvalid);
TMP959[9].typ = (&NTI138);
TMP959[9].name = "objHasKidsValid";
TMP961[9] = &TMP959[10];
TMP959[10].kind = 1;
TMP959[10].offset = offsetof(tcgen545035, Cfilename);
TMP959[10].typ = (&NTI149);
TMP959[10].name = "cfilename";
TMP961[10] = &TMP959[11];
TMP959[11].kind = 1;
TMP959[11].offset = offsetof(tcgen545035, Typecache);
TMP959[11].typ = (&NTI225867);
TMP959[11].name = "typeCache";
TMP961[11] = &TMP959[12];
TMP959[12].kind = 1;
TMP959[12].offset = offsetof(tcgen545035, Forwtypecache);
TMP959[12].typ = (&NTI225867);
TMP959[12].name = "forwTypeCache";
TMP961[12] = &TMP959[13];
TMP959[13].kind = 1;
TMP959[13].offset = offsetof(tcgen545035, Declaredthings);
TMP959[13].typ = (&NTI222056);
TMP959[13].name = "declaredThings";
TMP961[13] = &TMP959[14];
TMP959[14].kind = 1;
TMP959[14].offset = offsetof(tcgen545035, Declaredprotos);
TMP959[14].typ = (&NTI222056);
TMP959[14].name = "declaredProtos";
TMP961[14] = &TMP959[15];
TMP959[15].kind = 1;
TMP959[15].offset = offsetof(tcgen545035, Headerfiles);
TMP959[15].typ = (&NTI127028);
TMP959[15].name = "headerFiles";
TMP961[15] = &TMP959[16];
TMP959[16].kind = 1;
TMP959[16].offset = offsetof(tcgen545035, Typeinfomarker);
TMP959[16].typ = (&NTI222056);
TMP959[16].name = "typeInfoMarker";
TMP961[16] = &TMP959[17];
NTI545031.size = sizeof(tcproc545031);
NTI545031.kind = 18;
NTI545031.base = 0;
TMP967[0] = &TMP959[19];
TMP959[19].kind = 1;
TMP959[19].offset = offsetof(tcproc545031, Prc);
TMP959[19].typ = (&NTI225817);
TMP959[19].name = "prc";
TMP967[1] = &TMP959[20];
TMP959[20].kind = 1;
TMP959[20].offset = offsetof(tcproc545031, Beforeretneeded);
TMP959[20].typ = (&NTI138);
TMP959[20].name = "beforeRetNeeded";
TMP967[2] = &TMP959[21];
TMP959[21].kind = 1;
TMP959[21].offset = offsetof(tcproc545031, Threadvaraccessed);
TMP959[21].typ = (&NTI138);
TMP959[21].name = "threadVarAccessed";
TMP967[3] = &TMP959[22];
TMP959[22].kind = 1;
TMP959[22].offset = offsetof(tcproc545031, Nestedtrystmts);
TMP959[22].typ = (&NTI225813);
TMP959[22].name = "nestedTryStmts";
TMP967[4] = &TMP959[23];
TMP959[23].kind = 1;
TMP959[23].offset = offsetof(tcproc545031, Inexceptblock);
TMP959[23].typ = (&NTI108);
TMP959[23].name = "inExceptBlock";
TMP967[5] = &TMP959[24];
TMP959[24].kind = 1;
TMP959[24].offset = offsetof(tcproc545031, Finallysafepoints);
TMP959[24].typ = (&NTI196552);
TMP959[24].name = "finallySafePoints";
TMP967[6] = &TMP959[25];
TMP959[25].kind = 1;
TMP959[25].offset = offsetof(tcproc545031, Labels);
TMP959[25].typ = (&NTI74921);
TMP959[25].name = "labels";
TMP967[7] = &TMP959[26];
NTI545029.size = sizeof(tblock545029);
NTI545029.kind = 18;
NTI545029.base = 0;
NTI545029.flags = 2;
TMP968[0] = &TMP959[28];
TMP959[28].kind = 1;
TMP959[28].offset = offsetof(tblock545029, Id);
TMP959[28].typ = (&NTI108);
TMP959[28].name = "id";
TMP968[1] = &TMP959[29];
TMP959[29].kind = 1;
TMP959[29].offset = offsetof(tblock545029, Label);
TMP959[29].typ = (&NTI178007);
TMP959[29].name = "label";
TMP968[2] = &TMP959[30];
NTI545023.size = sizeof(tcprocsections545023);
NTI545023.kind = 16;
NTI545023.base = (&NTI178007);
NTI545023.flags = 2;
TMP959[30].kind = 1;
TMP959[30].offset = offsetof(tblock545029, Sections);
TMP959[30].typ = (&NTI545023);
TMP959[30].name = "sections";
TMP968[3] = &TMP959[31];
TMP959[31].kind = 1;
TMP959[31].offset = offsetof(tblock545029, Isloop);
TMP959[31].typ = (&NTI138);
TMP959[31].name = "isLoop";
TMP968[4] = &TMP959[32];
TMP959[32].kind = 1;
TMP959[32].offset = offsetof(tblock545029, Nestedtrystmts);
TMP959[32].typ = (&NTI112);
TMP959[32].name = "nestedTryStmts";
TMP968[5] = &TMP959[33];
TMP959[33].kind = 1;
TMP959[33].offset = offsetof(tblock545029, Nestedexceptstmts);
TMP959[33].typ = (&NTI112);
TMP959[33].name = "nestedExceptStmts";
TMP968[6] = &TMP959[34];
TMP959[34].kind = 1;
TMP959[34].offset = offsetof(tblock545029, Framelen);
TMP959[34].typ = (&NTI112);
TMP959[34].name = "frameLen";
TMP959[27].len = 7; TMP959[27].kind = 2; TMP959[27].sons = &TMP968[0];
NTI545029.node = &TMP959[27];
NTI545102.size = sizeof(TY545102*);
NTI545102.kind = 24;
NTI545102.base = (&NTI545029);
NTI545102.flags = 2;
NTI545102.marker = TMP969;
TMP959[26].kind = 1;
TMP959[26].offset = offsetof(tcproc545031, Blocks);
TMP959[26].typ = (&NTI545102);
TMP959[26].name = "blocks";
TMP967[8] = &TMP959[35];
TMP959[35].kind = 1;
TMP959[35].offset = offsetof(tcproc545031, Breakidx);
TMP959[35].typ = (&NTI108);
TMP959[35].name = "breakIdx";
TMP967[9] = &TMP959[36];
TMP959[36].kind = 1;
TMP959[36].offset = offsetof(tcproc545031, Options);
TMP959[36].typ = (&NTI170016);
TMP959[36].name = "options";
TMP967[10] = &TMP959[37];
TMP959[37].kind = 1;
TMP959[37].offset = offsetof(tcproc545031, Maxframelen);
TMP959[37].typ = (&NTI108);
TMP959[37].name = "maxFrameLen";
TMP967[11] = &TMP959[38];
TMP959[38].kind = 1;
TMP959[38].offset = offsetof(tcproc545031, Module);
TMP959[38].typ = (&NTI545025);
TMP959[38].name = "module";
TMP967[12] = &TMP959[39];
TMP959[39].kind = 1;
TMP959[39].offset = offsetof(tcproc545031, Withinloop);
TMP959[39].typ = (&NTI108);
TMP959[39].name = "withinLoop";
TMP967[13] = &TMP959[40];
TMP959[40].kind = 1;
TMP959[40].offset = offsetof(tcproc545031, Gcframeid);
TMP959[40].typ = (&NTI74921);
TMP959[40].name = "gcFrameId";
TMP967[14] = &TMP959[41];
TMP959[41].kind = 1;
TMP959[41].offset = offsetof(tcproc545031, Gcframetype);
TMP959[41].typ = (&NTI178007);
TMP959[41].name = "gcFrameType";
TMP959[18].len = 15; TMP959[18].kind = 2; TMP959[18].sons = &TMP967[0];
NTI545031.node = &TMP959[18];
NTI545027.size = sizeof(tcproc545031*);
NTI545027.kind = 22;
NTI545027.base = (&NTI545031);
NTI545027.marker = TMP970;
TMP959[17].kind = 1;
TMP959[17].offset = offsetof(tcgen545035, Initproc);
TMP959[17].typ = (&NTI545027);
TMP959[17].name = "initProc";
TMP961[17] = &TMP959[42];
TMP959[42].kind = 1;
TMP959[42].offset = offsetof(tcgen545035, Postinitproc);
TMP959[42].typ = (&NTI545027);
TMP959[42].name = "postInitProc";
TMP961[18] = &TMP959[43];
TMP959[43].kind = 1;
TMP959[43].offset = offsetof(tcgen545035, Preinitproc);
TMP959[43].typ = (&NTI545027);
TMP959[43].name = "preInitProc";
TMP961[19] = &TMP959[44];
TMP959[44].kind = 1;
TMP959[44].offset = offsetof(tcgen545035, Typestack);
TMP959[44].typ = (&NTI225851);
TMP959[44].name = "typeStack";
TMP961[20] = &TMP959[45];
TMP959[45].kind = 1;
TMP959[45].offset = offsetof(tcgen545035, Datacache);
TMP959[45].typ = (&NTI225879);
TMP959[45].name = "dataCache";
TMP961[21] = &TMP959[46];
TMP959[46].kind = 1;
TMP959[46].offset = offsetof(tcgen545035, Forwardedprocs);
TMP959[46].typ = (&NTI225821);
TMP959[46].name = "forwardedProcs";
TMP961[22] = &TMP959[47];
TMP959[47].kind = 1;
TMP959[47].offset = offsetof(tcgen545035, Typenodes);
TMP959[47].typ = (&NTI108);
TMP959[47].name = "typeNodes";
TMP961[23] = &TMP959[48];
TMP959[48].kind = 1;
TMP959[48].offset = offsetof(tcgen545035, Nimtypes);
TMP959[48].typ = (&NTI108);
TMP959[48].name = "nimTypes";
TMP961[24] = &TMP959[49];
TMP959[49].kind = 1;
TMP959[49].offset = offsetof(tcgen545035, Typenodesname);
TMP959[49].typ = (&NTI178007);
TMP959[49].name = "typeNodesName";
TMP961[25] = &TMP959[50];
TMP959[50].kind = 1;
TMP959[50].offset = offsetof(tcgen545035, Nimtypesname);
TMP959[50].typ = (&NTI178007);
TMP959[50].name = "nimTypesName";
TMP961[26] = &TMP959[51];
TMP959[51].kind = 1;
TMP959[51].offset = offsetof(tcgen545035, Labels);
TMP959[51].typ = (&NTI74921);
TMP959[51].name = "labels";
TMP961[27] = &TMP959[52];
NTI545138.size = sizeof(TY545138);
NTI545138.kind = 16;
NTI545138.base = (&NTI178007);
NTI545138.flags = 2;
TMP959[52].kind = 1;
TMP959[52].offset = offsetof(tcgen545035, Extensionloaders);
TMP959[52].typ = (&NTI545138);
TMP959[52].name = "extensionLoaders";
TMP961[28] = &TMP959[53];
TMP959[53].kind = 1;
TMP959[53].offset = offsetof(tcgen545035, Injectstmt);
TMP959[53].typ = (&NTI178007);
TMP959[53].name = "injectStmt";
TMP959[0].len = 29; TMP959[0].kind = 2; TMP959[0].sons = &TMP961[0];
NTI545035.node = &TMP959[0];
NTI545025.size = sizeof(tcgen545035*);
NTI545025.kind = 22;
NTI545025.base = (&NTI545035);
NTI545025.marker = TMP974;
NTI545150.size = sizeof(TY545150*);
NTI545150.kind = 24;
NTI545150.base = (&NTI545025);
NTI545150.marker = TMP975;
}

