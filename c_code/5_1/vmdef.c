/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tctx288048 tctx288048;
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct TNimObject TNimObject;
typedef struct TY288247 TY288247;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY196414 TY196414;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tnode224819 tnode224819;
typedef struct ttypeseq224851 ttypeseq224851;
typedef struct ttype224855 ttype224855;
typedef struct pprocHEX3Aobjecttype288228 pprocHEX3Aobjecttype288228;
typedef struct tsym224849 tsym224849;
typedef struct TY288266 TY288266;
typedef struct TY288267 TY288267;
typedef struct NimStringDesc NimStringDesc;
typedef struct vmargs288042 vmargs288042;
typedef struct TY288229 TY288229;
typedef struct tblock288030 tblock288030;
typedef struct TY288210 TY288210;
typedef struct TY288235 TY288235;
typedef struct TY612411 TY612411;
typedef struct TY612414 TY612414;
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
typedef struct tident200021 tident200021;
typedef struct tnodeseq224813 tnodeseq224813;
typedef struct tidobj200015 tidobj200015;
typedef struct tloc224833 tloc224833;
typedef struct trope177009 trope177009;
typedef struct tscope224843 tscope224843;
typedef struct TY224950 TY224950;
typedef struct tinstantiation224839 tinstantiation224839;
typedef struct tstrtable224823 tstrtable224823;
typedef struct tsymseq224821 tsymseq224821;
typedef struct tlib224837 tlib224837;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct TY224939 TY224939;
typedef struct tlistentry127022 tlistentry127022;
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
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  vmargs288042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs288042 args, void* ClEnv);
void* ClEnv;
} vmcallback288044;
struct TY288267 {
NimStringDesc* Field0;
vmcallback288044 Field1;
};
struct  tctx288048  {
  tpasscontext285005 Sup;
TY288247* Code;
TY196414* Debug;
tnode224819* Globals;
tnode224819* Constants;
ttypeseq224851* Types;
tnode224819* Currentexceptiona;
tnode224819* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype288228* Prc;
tsym224849* Module;
tnode224819* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo195539 Comesfromheuristic;
TY288266* Callbacks;
};
struct  tblock288030  {
tsym224849* Label;
TY288210* Fixups;
};
struct TY288235 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY288235 TY288232[256];
struct  pprocHEX3Aobjecttype288228  {
TY288229* Blocks;
tsym224849* Sym;
TY288232 Slots;
NI Maxslots;
};
struct TY612411 {
void* Field0;
TY612414* Field1;
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
struct  tnode224819  {
ttype224855* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224849* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq224813* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tloc224833  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224855* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype224855  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224851* Sons;
tnode224819* N;
tsym224849* Owner;
tsym224849* Sym;
tsym224849* Destructor;
tsym224849* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224833 Loc;
};
struct  tstrtable224823  {
NI Counter;
tsymseq224821* Data;
};
struct  tsym224849  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq224851* Typeinstcache;
tscope224843* Typscope;
} S1;
struct {TY224950* Procinstcache;
tscope224843* Scope;
} S2;
struct {TY224950* Usedgenerics;
tstrtable224823 Tab;
} S3;
struct {tsym224849* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224855* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym224849* Owner;
NU32 Flags;
tnode224819* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224833 Loc;
tlib224837* Annex;
tnode224819* Constraint;
};
struct TY612414 {
char dummy;
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
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope224843  {
NI Depthlevel;
tstrtable224823 Symbols;
tnodeseq224813* Usingsyms;
tscope224843* Parent;
};
struct  tinstantiation224839  {
tsym224849* Sym;
ttypeseq224851* Concretetypes;
TY224939* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib224837  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode224819* Path;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY288247 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY196414 {
  TGenericSeq Sup;
  tlineinfo195539 data[SEQ_DECL_SIZE];
};
struct ttypeseq224851 {
  TGenericSeq Sup;
  ttype224855* data[SEQ_DECL_SIZE];
};
struct TY288266 {
  TGenericSeq Sup;
  TY288267 data[SEQ_DECL_SIZE];
};
struct TY288210 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY288229 {
  TGenericSeq Sup;
  tblock288030 data[SEQ_DECL_SIZE];
};
struct tnodeseq224813 {
  TGenericSeq Sup;
  tnode224819* data[SEQ_DECL_SIZE];
};
struct TY224950 {
  TGenericSeq Sup;
  tinstantiation224839* data[SEQ_DECL_SIZE];
};
struct tsymseq224821 {
  TGenericSeq Sup;
  tsym224849* data[SEQ_DECL_SIZE];
};
struct TY224939 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP1943)(void* p, NI op);
N_NIMCALL(void, TMP1946)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1947)(void* p, NI op);
N_NIMCALL(void, TMP1952)(void* p, NI op);
N_NIMCALL(void, TMP1961)(void* p, NI op);
N_NIMCALL(void, TMP1962)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44735*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44735* c);
N_NOINLINE(void, addzct_48417)(tcellseq44751* s, tcell44735* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode224819*, newnode_225093)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tlineinfo195539, unknownlineinfo_196405)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_50404)(tcell44735* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c);
static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c);
N_NOINLINE(void, incl_45471)(tcellset44747* s, tcell44735* cell);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50825)(tcell44735* c);
extern TNimType NTI285005; /* TPassContext */
TNimType NTI288048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI288247; /* seq[TInstr] */
extern TNimType NTI196414; /* seq[TLineInfo] */
extern TNimType NTI224811; /* PNode */
extern TNimType NTI224851; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI288228; /* PProc:ObjectType */
TNimType NTI288030; /* TBlock */
extern TNimType NTI224817; /* PSym */
TNimType NTI288210; /* seq[TPosition] */
TNimType NTI288229; /* seq[TBlock] */
TNimType NTI288235; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI288038; /* TSlotKind */
TNimType NTI288232; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI288040; /* PProc */
TNimType NTI288032; /* TEvalMode */
TNimType NTI288034; /* TSandboxFlag */
TNimType NTI288036; /* TSandboxFlags */
extern TNimType NTI195539; /* TLineInfo */
TNimType NTI288267; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI288044; /* tuple[pointer, ref tuple[]] */
extern TNimType NTI153; /* pointer */
extern TNimType NTI612413; /* ref tuple[] */
TNimType NTI288266; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI288046; /* PCtx */
extern tgcheap46816 gch_46844;
TNimType NTI288028; /* TOpcode */
N_NIMCALL(void, TMP1943)(void* p, NI op) {
	TY288247* a;
	NI LOC1;
	a = (TY288247*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1946)(void* p, NI op) {
	TY288210* a;
	NI LOC1;
	a = (TY288210*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1947)(void* p, NI op) {
	TY288229* a;
	NI LOC1;
	a = (TY288229*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP1952)(void* p, NI op) {
	pprocHEX3Aobjecttype288228* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype288228*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1961)(void* p, NI op) {
	TY288266* a;
	NI LOC1;
	a = (TY288266*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1962)(void* p, NI op) {
	tctx288048* a;
	a = (tctx288048*)p;
	nimGCvisit((void*)(*a).Code, op);
	nimGCvisit((void*)(*a).Debug, op);
	nimGCvisit((void*)(*a).Globals, op);
	nimGCvisit((void*)(*a).Constants, op);
	nimGCvisit((void*)(*a).Types, op);
	nimGCvisit((void*)(*a).Currentexceptiona, op);
	nimGCvisit((void*)(*a).Currentexceptionb, op);
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Callsite, op);
	nimGCvisit((void*)(*a).Callbacks, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44735* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
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

static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44735* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49229)(tcell44735* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45471(&gch_46844.Cycleroots, c);
	}
	LA3: ;
}

static N_INLINE(void, decref_50404)(tcell44735* c) {
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

static N_INLINE(void, nimGCunref)(void* p) {
	tcell44735* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_48446(p);
	decref_50404(LOC1);
}

N_NIMCALL(tctx288048*, newctx_288275)(tsym224849* module) {
	tctx288048* result;
	tctx288048* LOC1;
	pprocHEX3Aobjecttype288228* LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = (tctx288048*) newObj((&NTI288046), sizeof(tctx288048));
	(*LOC1).Sup.Sup.m_type = (&NTI288048);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY288247*) newSeqRC1((&NTI288247), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY196414*) newSeqRC1((&NTI196414), 0);
	asgnRefNoCycle((void**) &(*LOC1).Globals, newnode_225093(((NU8) 125)));
	asgnRefNoCycle((void**) &(*LOC1).Constants, newnode_225093(((NU8) 114)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq224851*) newSeqRC1((&NTI224851), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype288228*) newObj((&NTI288040), sizeof(pprocHEX3Aobjecttype288228));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY288229*) newSeqRC1((&NTI288229), 0);
	asgnRefNoCycle((void**) &(*LOC1).Prc, LOC2);
	asgnRefNoCycle((void**) &(*LOC1).Module, module);
	(*LOC1).Loopiterations = 500000;
	(*LOC1).Comesfromheuristic = unknownlineinfo_196405();
	if ((*LOC1).Callbacks) nimGCunref((*LOC1).Callbacks);
	(*LOC1).Callbacks = (TY288266*) newSeqRC1((&NTI288266), 0);
	result = LOC1;
	return result;
}

N_NIMCALL(void, refresh_288387)(tctx288048* c, tsym224849* module) {
	pprocHEX3Aobjecttype288228* LOC1;
	asgnRefNoCycle((void**) &(*c).Module, module);
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype288228*) newObj((&NTI288040), sizeof(pprocHEX3Aobjecttype288228));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY288229*) newSeqRC1((&NTI288229), 0);
	asgnRefNoCycle((void**) &(*c).Prc, LOC1);
}

static N_INLINE(void, incref_50825)(tcell44735* c) {
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
		tcell44735* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48446(src);
		incref_50825(LOC5);
	}
	LA3: ;
	{
		tcell44735* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48446((*dest));
		decref_50404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registercallback_288418)(tctx288048* c, NimStringDesc* name, vmcallback288044 callback) {
	TY288267 LOC1;
	NimStringDesc* LOC2;
	memset((void*)&LOC1, 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).Callbacks = (TY288266*) incrSeq(&((*c).Callbacks)->Sup, sizeof(TY288267));
	LOC2 = 0;
	LOC2 = (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0; (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) &(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClEnv, LOC1.Field1.ClEnv);
	(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefDatInit)(void) {
static TNimNode* TMP1942[17];
static TNimNode* TMP1944[4];
static TNimNode* TMP1945[2];
static TNimNode* TMP1948[2];
static TNimNode* TMP1949[8];
NI TMP1951;
static char* NIM_CONST TMP1950[8] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex"};
static TNimNode* TMP1953[5];
NI TMP1955;
static char* NIM_CONST TMP1954[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1956[3];
NI TMP1958;
static char* NIM_CONST TMP1957[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1959[2];
static TNimNode* TMP1960[2];
static TNimNode* TMP2825[154];
NI TMP2827;
static char* NIM_CONST TMP2826[154] = {
"opcEof", 
"opcRet", 
"opcYldYoid", 
"opcYldVal", 
"opcAsgnInt", 
"opcAsgnStr", 
"opcAsgnFloat", 
"opcAsgnRef", 
"opcAsgnComplex", 
"opcRegToNode", 
"opcNodeToReg", 
"opcLdArr", 
"opcWrArr", 
"opcLdObj", 
"opcWrObj", 
"opcAddrReg", 
"opcAddrNode", 
"opcLdDeref", 
"opcWrDeref", 
"opcWrStrIdx", 
"opcLdStrIdx", 
"opcAddInt", 
"opcAddImmInt", 
"opcSubInt", 
"opcSubImmInt", 
"opcLenSeq", 
"opcLenStr", 
"opcIncl", 
"opcInclRange", 
"opcExcl", 
"opcCard", 
"opcMulInt", 
"opcDivInt", 
"opcModInt", 
"opcAddFloat", 
"opcSubFloat", 
"opcMulFloat", 
"opcDivFloat", 
"opcShrInt", 
"opcShlInt", 
"opcBitandInt", 
"opcBitorInt", 
"opcBitxorInt", 
"opcAddu", 
"opcSubu", 
"opcMulu", 
"opcDivu", 
"opcModu", 
"opcEqInt", 
"opcLeInt", 
"opcLtInt", 
"opcEqFloat", 
"opcLeFloat", 
"opcLtFloat", 
"opcLeu", 
"opcLtu", 
"opcEqRef", 
"opcEqNimrodNode", 
"opcXor", 
"opcNot", 
"opcUnaryMinusInt", 
"opcUnaryMinusFloat", 
"opcBitnotInt", 
"opcEqStr", 
"opcLeStr", 
"opcLtStr", 
"opcEqSet", 
"opcLeSet", 
"opcLtSet", 
"opcMulSet", 
"opcPlusSet", 
"opcMinusSet", 
"opcSymdiffSet", 
"opcConcatStr", 
"opcContainsSet", 
"opcRepr", 
"opcSetLenStr", 
"opcSetLenSeq", 
"opcSwap", 
"opcIsNil", 
"opcOf", 
"opcIs", 
"opcSubStr", 
"opcParseFloat", 
"opcConv", 
"opcCast", 
"opcQuit", 
"opcReset", 
"opcNarrowS", 
"opcNarrowU", 
"opcAddStrCh", 
"opcAddStrStr", 
"opcAddSeqElem", 
"opcRangeChck", 
"opcNAdd", 
"opcNAddMultiple", 
"opcNKind", 
"opcNIntVal", 
"opcNFloatVal", 
"opcNSymbol", 
"opcNIdent", 
"opcNGetType", 
"opcNStrVal", 
"opcNSetIntVal", 
"opcNSetFloatVal", 
"opcNSetSymbol", 
"opcNSetIdent", 
"opcNSetType", 
"opcNSetStrVal", 
"opcNNewNimNode", 
"opcNCopyNimNode", 
"opcNCopyNimTree", 
"opcNDel", 
"opcGenSym", 
"opcSlurp", 
"opcGorge", 
"opcParseExprToAst", 
"opcParseStmtToAst", 
"opcNError", 
"opcNWarning", 
"opcNHint", 
"opcNLineInfo", 
"opcEqIdent", 
"opcStrToIdent", 
"opcIdentToStr", 
"opcEcho", 
"opcIndCall", 
"opcIndCallAsgn", 
"opcRaise", 
"opcNChild", 
"opcNSetChild", 
"opcCallSite", 
"opcNewStr", 
"opcTJmp", 
"opcFJmp", 
"opcJmp", 
"opcJmpBack", 
"opcBranch", 
"opcTry", 
"opcExcept", 
"opcFinally", 
"opcFinallyEnd", 
"opcNew", 
"opcNewSeq", 
"opcLdNull", 
"opcLdNullReg", 
"opcLdConst", 
"opcAsgnConst", 
"opcLdGlobal", 
"opcLdGlobalAddr", 
"opcLdImmInt", 
"opcNBindSym", 
"opcSetType", 
"opcTypeTrait"};
static TNimNode TMP846[210];
NTI288048.size = sizeof(tctx288048);
NTI288048.kind = 17;
NTI288048.base = (&NTI285005);
TMP1942[0] = &TMP846[1];
NTI288247.size = sizeof(TY288247*);
NTI288247.kind = 24;
NTI288247.base = (&NTI124);
NTI288247.flags = 2;
NTI288247.marker = TMP1943;
TMP846[1].kind = 1;
TMP846[1].offset = offsetof(tctx288048, Code);
TMP846[1].typ = (&NTI288247);
TMP846[1].name = "code";
TMP1942[1] = &TMP846[2];
TMP846[2].kind = 1;
TMP846[2].offset = offsetof(tctx288048, Debug);
TMP846[2].typ = (&NTI196414);
TMP846[2].name = "debug";
TMP1942[2] = &TMP846[3];
TMP846[3].kind = 1;
TMP846[3].offset = offsetof(tctx288048, Globals);
TMP846[3].typ = (&NTI224811);
TMP846[3].name = "globals";
TMP1942[3] = &TMP846[4];
TMP846[4].kind = 1;
TMP846[4].offset = offsetof(tctx288048, Constants);
TMP846[4].typ = (&NTI224811);
TMP846[4].name = "constants";
TMP1942[4] = &TMP846[5];
TMP846[5].kind = 1;
TMP846[5].offset = offsetof(tctx288048, Types);
TMP846[5].typ = (&NTI224851);
TMP846[5].name = "types";
TMP1942[5] = &TMP846[6];
TMP846[6].kind = 1;
TMP846[6].offset = offsetof(tctx288048, Currentexceptiona);
TMP846[6].typ = (&NTI224811);
TMP846[6].name = "currentExceptionA";
TMP1942[6] = &TMP846[7];
TMP846[7].kind = 1;
TMP846[7].offset = offsetof(tctx288048, Currentexceptionb);
TMP846[7].typ = (&NTI224811);
TMP846[7].name = "currentExceptionB";
TMP1942[7] = &TMP846[8];
TMP846[8].kind = 1;
TMP846[8].offset = offsetof(tctx288048, Exceptioninstr);
TMP846[8].typ = (&NTI108);
TMP846[8].name = "exceptionInstr";
TMP1942[8] = &TMP846[9];
NTI288228.size = sizeof(pprocHEX3Aobjecttype288228);
NTI288228.kind = 18;
NTI288228.base = 0;
NTI288228.flags = 2;
TMP1944[0] = &TMP846[11];
NTI288030.size = sizeof(tblock288030);
NTI288030.kind = 18;
NTI288030.base = 0;
NTI288030.flags = 2;
TMP1945[0] = &TMP846[13];
TMP846[13].kind = 1;
TMP846[13].offset = offsetof(tblock288030, Label);
TMP846[13].typ = (&NTI224817);
TMP846[13].name = "label";
TMP1945[1] = &TMP846[14];
NTI288210.size = sizeof(TY288210*);
NTI288210.kind = 24;
NTI288210.base = (&NTI108);
NTI288210.flags = 2;
NTI288210.marker = TMP1946;
TMP846[14].kind = 1;
TMP846[14].offset = offsetof(tblock288030, Fixups);
TMP846[14].typ = (&NTI288210);
TMP846[14].name = "fixups";
TMP846[12].len = 2; TMP846[12].kind = 2; TMP846[12].sons = &TMP1945[0];
NTI288030.node = &TMP846[12];
NTI288229.size = sizeof(TY288229*);
NTI288229.kind = 24;
NTI288229.base = (&NTI288030);
NTI288229.flags = 2;
NTI288229.marker = TMP1947;
TMP846[11].kind = 1;
TMP846[11].offset = offsetof(pprocHEX3Aobjecttype288228, Blocks);
TMP846[11].typ = (&NTI288229);
TMP846[11].name = "blocks";
TMP1944[1] = &TMP846[15];
TMP846[15].kind = 1;
TMP846[15].offset = offsetof(pprocHEX3Aobjecttype288228, Sym);
TMP846[15].typ = (&NTI224817);
TMP846[15].name = "sym";
TMP1944[2] = &TMP846[16];
NTI288235.size = sizeof(TY288235);
NTI288235.kind = 18;
NTI288235.base = 0;
NTI288235.flags = 3;
TMP1948[0] = &TMP846[18];
TMP846[18].kind = 1;
TMP846[18].offset = offsetof(TY288235, Field0);
TMP846[18].typ = (&NTI138);
TMP846[18].name = "Field0";
TMP1948[1] = &TMP846[19];
NTI288038.size = sizeof(NU8);
NTI288038.kind = 14;
NTI288038.base = 0;
NTI288038.flags = 3;
for (TMP1951 = 0; TMP1951 < 8; TMP1951++) {
TMP846[TMP1951+20].kind = 1;
TMP846[TMP1951+20].offset = TMP1951;
TMP846[TMP1951+20].name = TMP1950[TMP1951];
TMP1949[TMP1951] = &TMP846[TMP1951+20];
}
TMP846[28].len = 8; TMP846[28].kind = 2; TMP846[28].sons = &TMP1949[0];
NTI288038.node = &TMP846[28];
TMP846[19].kind = 1;
TMP846[19].offset = offsetof(TY288235, Field1);
TMP846[19].typ = (&NTI288038);
TMP846[19].name = "Field1";
TMP846[17].len = 2; TMP846[17].kind = 2; TMP846[17].sons = &TMP1948[0];
NTI288235.node = &TMP846[17];
NTI288232.size = sizeof(TY288232);
NTI288232.kind = 16;
NTI288232.base = (&NTI288235);
NTI288232.flags = 3;
TMP846[16].kind = 1;
TMP846[16].offset = offsetof(pprocHEX3Aobjecttype288228, Slots);
TMP846[16].typ = (&NTI288232);
TMP846[16].name = "slots";
TMP1944[3] = &TMP846[29];
TMP846[29].kind = 1;
TMP846[29].offset = offsetof(pprocHEX3Aobjecttype288228, Maxslots);
TMP846[29].typ = (&NTI108);
TMP846[29].name = "maxSlots";
TMP846[10].len = 4; TMP846[10].kind = 2; TMP846[10].sons = &TMP1944[0];
NTI288228.node = &TMP846[10];
NTI288040.size = sizeof(pprocHEX3Aobjecttype288228*);
NTI288040.kind = 22;
NTI288040.base = (&NTI288228);
NTI288040.flags = 2;
NTI288040.marker = TMP1952;
TMP846[9].kind = 1;
TMP846[9].offset = offsetof(tctx288048, Prc);
TMP846[9].typ = (&NTI288040);
TMP846[9].name = "prc";
TMP1942[9] = &TMP846[30];
TMP846[30].kind = 1;
TMP846[30].offset = offsetof(tctx288048, Module);
TMP846[30].typ = (&NTI224817);
TMP846[30].name = "module";
TMP1942[10] = &TMP846[31];
TMP846[31].kind = 1;
TMP846[31].offset = offsetof(tctx288048, Callsite);
TMP846[31].typ = (&NTI224811);
TMP846[31].name = "callsite";
TMP1942[11] = &TMP846[32];
NTI288032.size = sizeof(NU8);
NTI288032.kind = 14;
NTI288032.base = 0;
NTI288032.flags = 3;
for (TMP1955 = 0; TMP1955 < 5; TMP1955++) {
TMP846[TMP1955+33].kind = 1;
TMP846[TMP1955+33].offset = TMP1955;
TMP846[TMP1955+33].name = TMP1954[TMP1955];
TMP1953[TMP1955] = &TMP846[TMP1955+33];
}
TMP846[38].len = 5; TMP846[38].kind = 2; TMP846[38].sons = &TMP1953[0];
NTI288032.node = &TMP846[38];
TMP846[32].kind = 1;
TMP846[32].offset = offsetof(tctx288048, Mode);
TMP846[32].typ = (&NTI288032);
TMP846[32].name = "mode";
TMP1942[12] = &TMP846[39];
NTI288034.size = sizeof(NU8);
NTI288034.kind = 14;
NTI288034.base = 0;
NTI288034.flags = 3;
for (TMP1958 = 0; TMP1958 < 3; TMP1958++) {
TMP846[TMP1958+40].kind = 1;
TMP846[TMP1958+40].offset = TMP1958;
TMP846[TMP1958+40].name = TMP1957[TMP1958];
TMP1956[TMP1958] = &TMP846[TMP1958+40];
}
TMP846[43].len = 3; TMP846[43].kind = 2; TMP846[43].sons = &TMP1956[0];
NTI288034.node = &TMP846[43];
NTI288036.size = sizeof(NU8);
NTI288036.kind = 19;
NTI288036.base = (&NTI288034);
NTI288036.flags = 3;
TMP846[44].len = 0; TMP846[44].kind = 0;
NTI288036.node = &TMP846[44];
TMP846[39].kind = 1;
TMP846[39].offset = offsetof(tctx288048, Features);
TMP846[39].typ = (&NTI288036);
TMP846[39].name = "features";
TMP1942[13] = &TMP846[45];
TMP846[45].kind = 1;
TMP846[45].offset = offsetof(tctx288048, Traceactive);
TMP846[45].typ = (&NTI138);
TMP846[45].name = "traceActive";
TMP1942[14] = &TMP846[46];
TMP846[46].kind = 1;
TMP846[46].offset = offsetof(tctx288048, Loopiterations);
TMP846[46].typ = (&NTI108);
TMP846[46].name = "loopIterations";
TMP1942[15] = &TMP846[47];
TMP846[47].kind = 1;
TMP846[47].offset = offsetof(tctx288048, Comesfromheuristic);
TMP846[47].typ = (&NTI195539);
TMP846[47].name = "comesFromHeuristic";
TMP1942[16] = &TMP846[48];
NTI288267.size = sizeof(TY288267);
NTI288267.kind = 18;
NTI288267.base = 0;
TMP1959[0] = &TMP846[50];
TMP846[50].kind = 1;
TMP846[50].offset = offsetof(TY288267, Field0);
TMP846[50].typ = (&NTI149);
TMP846[50].name = "Field0";
TMP1959[1] = &TMP846[51];
NTI288044.size = sizeof(TY612411);
NTI288044.kind = 18;
NTI288044.base = 0;
NTI288044.flags = 2;
TMP1960[0] = &TMP846[53];
TMP846[53].kind = 1;
TMP846[53].offset = offsetof(TY612411, Field0);
TMP846[53].typ = (&NTI153);
TMP846[53].name = "Field0";
TMP1960[1] = &TMP846[54];
TMP846[54].kind = 1;
TMP846[54].offset = offsetof(TY612411, Field1);
TMP846[54].typ = (&NTI612413);
TMP846[54].name = "Field1";
TMP846[52].len = 2; TMP846[52].kind = 2; TMP846[52].sons = &TMP1960[0];
NTI288044.node = &TMP846[52];
TMP846[51].kind = 1;
TMP846[51].offset = offsetof(TY288267, Field1);
TMP846[51].typ = (&NTI288044);
TMP846[51].name = "Field1";
TMP846[49].len = 2; TMP846[49].kind = 2; TMP846[49].sons = &TMP1959[0];
NTI288267.node = &TMP846[49];
NTI288266.size = sizeof(TY288266*);
NTI288266.kind = 24;
NTI288266.base = (&NTI288267);
NTI288266.marker = TMP1961;
TMP846[48].kind = 1;
TMP846[48].offset = offsetof(tctx288048, Callbacks);
TMP846[48].typ = (&NTI288266);
TMP846[48].name = "callbacks";
TMP846[0].len = 17; TMP846[0].kind = 2; TMP846[0].sons = &TMP1942[0];
NTI288048.node = &TMP846[0];
NTI288046.size = sizeof(tctx288048*);
NTI288046.kind = 22;
NTI288046.base = (&NTI288048);
NTI288046.marker = TMP1962;
NTI288028.size = sizeof(NU8);
NTI288028.kind = 14;
NTI288028.base = 0;
NTI288028.flags = 3;
for (TMP2827 = 0; TMP2827 < 154; TMP2827++) {
TMP846[TMP2827+55].kind = 1;
TMP846[TMP2827+55].offset = TMP2827;
TMP846[TMP2827+55].name = TMP2826[TMP2827];
TMP2825[TMP2827] = &TMP846[TMP2827+55];
}
TMP846[209].len = 154; TMP846[209].kind = 2; TMP846[209].sons = &TMP2825[0];
NTI288028.node = &TMP846[209];
}

