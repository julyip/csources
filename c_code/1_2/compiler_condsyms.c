/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable113610 tstringtable113610;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident141017 tident141017;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq113608 tkeyvaluepairseq113608;
typedef struct TY92504 TY92504;
typedef struct tcell38646 tcell38646;
typedef struct tcellseq38662 tcellseq38662;
typedef struct tgcheap40616 tgcheap40616;
typedef struct tcellset38658 tcellset38658;
typedef struct tpagedesc38654 tpagedesc38654;
typedef struct tmemregion22010 tmemregion22010;
typedef struct tsmallchunk21238 tsmallchunk21238;
typedef struct tllchunk22004 tllchunk22004;
typedef struct tbigchunk21240 tbigchunk21240;
typedef struct tintset21215 tintset21215;
typedef struct ttrunk21211 ttrunk21211;
typedef struct tavlnode22008 tavlnode22008;
typedef struct tgcstat40614 tgcstat40614;
typedef struct tinfocpu120446 tinfocpu120446;
typedef struct tinfoos120042 tinfoos120042;
typedef struct tbasechunk21236 tbasechunk21236;
typedef struct tfreecell21228 tfreecell21228;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct TY92504 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable113610 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq113608* Data;
NU8 Mode;
};
struct tcell38646 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38662 {
NI Len;
NI Cap;
tcell38646** D;
};
struct tcellset38658 {
NI Counter;
NI Max;
tpagedesc38654* Head;
tpagedesc38654** Data;
};
typedef tsmallchunk21238* TY22022[512];
typedef ttrunk21211* ttrunkbuckets21213[256];
struct tintset21215 {
ttrunkbuckets21213 Data;
};
struct tmemregion22010 {
NI Minlargeobj;
NI Maxlargeobj;
TY22022 Freesmallchunks;
tllchunk22004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21240* Freechunkslist;
tintset21215 Chunkstarts;
tavlnode22008* Root;
tavlnode22008* Deleted;
tavlnode22008* Last;
tavlnode22008* Freeavlnodes;
};
struct tgcstat40614 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40616 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38662 Zct;
tcellseq38662 Decstack;
tcellset38658 Cycleroots;
tcellseq38662 Tempstack;
NI Recgclock;
tmemregion22010 Region;
tgcstat40614 Stat;
};
struct tinfocpu120446 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu120446 TY120461[14];
typedef NimStringDesc* TY120456[2];
struct tinfoos120042 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos120042 TY120062[23];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY21218[8];
struct tpagedesc38654 {
tpagedesc38654* Next;
NI Key;
TY21218 Bits;
};
struct tbasechunk21236 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21238 {
  tbasechunk21236 Sup;
tsmallchunk21238* Next;
tsmallchunk21238* Prev;
tfreecell21228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22004 {
NI Size;
NI Acc;
tllchunk22004* Next;
};
struct tbigchunk21240 {
  tbasechunk21236 Sup;
tbigchunk21240* Next;
tbigchunk21240* Prev;
NI Align;
NF Data;
};
struct ttrunk21211 {
ttrunk21211* Next;
NI Key;
TY21218 Bits;
};
typedef tavlnode22008* TY22014[2];
struct tavlnode22008 {
TY22014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21228 {
tfreecell21228* Next;
NI Zerofield;
};
struct tkeyvaluepairseq113608 {
  TGenericSeq Sup;
  TY92504 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, definesymbol_142006)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(tstringtable113610* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, undefsymbol_142011)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, isdefined_142016)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(tstringtable113610* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable113610* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isdefined_142022)(tident141017* symbol);
N_NIMCALL(NI, countdefinedsymbols_142041)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, initdefines_142065)(void);
N_NIMCALL(tstringtable113610*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr);
static N_INLINE(void, rtladdzct_43602)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
STRING_LITERAL(TMP904, "true", 4);
STRING_LITERAL(TMP905, "false", 5);
STRING_LITERAL(TMP906, "nimrod", 6);
STRING_LITERAL(TMP907, "nimhygiene", 10);
STRING_LITERAL(TMP908, "niminheritable", 14);
STRING_LITERAL(TMP909, "nimmixin", 8);
STRING_LITERAL(TMP910, "nimeffects", 10);
STRING_LITERAL(TMP911, "nimbabel", 8);
STRING_LITERAL(TMP912, "nimcomputedgoto", 15);
STRING_LITERAL(TMP913, "x86", 3);
STRING_LITERAL(TMP914, "itanium", 7);
STRING_LITERAL(TMP915, "x8664", 5);
STRING_LITERAL(TMP916, "msdos", 5);
STRING_LITERAL(TMP917, "mswindows", 9);
STRING_LITERAL(TMP918, "win32", 5);
STRING_LITERAL(TMP919, "unix", 4);
STRING_LITERAL(TMP920, "posix", 5);
STRING_LITERAL(TMP921, "sunos", 5);
STRING_LITERAL(TMP922, "bsd", 3);
STRING_LITERAL(TMP923, "macintosh", 9);
STRING_LITERAL(TMP924, "cpu", 3);
extern NIM_CONST TY120461 cpu_120460;
extern NIM_CONST TY120456 endiantostr_120455;
extern NIM_CONST TY120062 os_120061;
STRING_LITERAL(TMP925, "emulatedthreadvars", 18);
tstringtable113610* gsymbols_142003;
extern TFrame* frameptr_12037;
extern tgcheap40616 gch_40644;
extern NU8 targetcpu_120560;
extern NU8 targetos_120562;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, definesymbol_142006)(NimStringDesc* symbol) {
	nimfr("DefineSymbol", "condsyms.nim")
	nimln(20, "condsyms.nim");
	nstPut(gsymbols_142003, symbol, ((NimStringDesc*) &TMP904));	popFrame();
}
N_NIMCALL(void, undefsymbol_142011)(NimStringDesc* symbol) {
	nimfr("UndefSymbol", "condsyms.nim")
	nimln(23, "condsyms.nim");
	nstPut(gsymbols_142003, symbol, ((NimStringDesc*) &TMP905));	popFrame();
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
	}	LA3: ;
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
	}	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_BOOL, isdefined_142016)(NimStringDesc* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(26, "condsyms.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		nimln(26, "condsyms.nim");
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_142003, symbol);
		if (!LOC3) goto LA4;
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_142003, symbol);
		result = eqStrings(LOC6, ((NimStringDesc*) &TMP904));
	}	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, isdefined_142022)(tident141017* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(29, "condsyms.nim");
	result = isdefined_142016((*symbol).S);
	popFrame();
	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NI, countdefinedsymbols_142041)(void) {
	NI result;
	NimStringDesc* key_142044;
	NimStringDesc* val_142045;
	NI h_142057;
	NI HEX3Atmp_142059;
	NI res_142061;
	nimfr("countDefinedSymbols", "condsyms.nim")
	result = 0;
	nimln(36, "condsyms.nim");
	result = 0;
	key_142044 = 0;
	val_142045 = 0;
	h_142057 = 0;
	HEX3Atmp_142059 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_142059 = ((*gsymbols_142003).Data->Sup.len-1);
	nimln(1308, "system.nim");
	res_142061 = 0;
	nimln(1309, "system.nim");
	while (1) {
		nimln(1309, "system.nim");
		if (!(res_142061 <= HEX3Atmp_142059)) goto LA1;
		nimln(1308, "system.nim");
		h_142057 = res_142061;
		nimln(41, "strtabs.nim");
		{
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_142057) >= (NU)((*gsymbols_142003).Data->Sup.len)) raiseIndexError();
			if (!!((*gsymbols_142003).Data->data[h_142057].Field0 == 0)) goto LA4;
			nimln(42, "strtabs.nim");
			if ((NU)(h_142057) >= (NU)((*gsymbols_142003).Data->Sup.len)) raiseIndexError();
			key_142044 = (*gsymbols_142003).Data->data[h_142057].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_142057) >= (NU)((*gsymbols_142003).Data->Sup.len)) raiseIndexError();
			val_142045 = (*gsymbols_142003).Data->data[h_142057].Field1;
			nimln(38, "condsyms.nim");
			{
				nimln(38, "condsyms.nim");
				if (!eqStrings(val_142045, ((NimStringDesc*) &TMP904))) goto LA8;
				nimln(38, "condsyms.nim");
				result = addInt(result, 1);
			}			LA8: ;
		}		LA4: ;
		nimln(1311, "system.nim");
		res_142061 = addInt(res_142061, 1);
	} LA1: ;
	popFrame();
	return result;
}
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr) {
	tcell38646* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38646*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38646))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43602)(tcell38646* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42015(&gch_40644.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38646* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42039(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38646* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42039((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43602(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(void, initdefines_142065)(void) {
	NimStringDesc* LOC13;
	NimStringDesc* LOC14;
	NimStringDesc* LOC15;
	nimfr("InitDefines", "condsyms.nim")
	nimln(41, "condsyms.nim");
	asgnRefNoCycle((void**) &gsymbols_142003, nstnewStringTable(((NU8) 2)));
	nimln(42, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP906));	nimln(44, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP907));	nimln(45, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP908));	nimln(46, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP909));	nimln(47, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP910));	nimln(48, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP911));	nimln(49, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP912));	nimln(52, "condsyms.nim");
	switch (targetcpu_120560) {
	case ((NU8) 1):
	{
		nimln(53, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP913));	}	break;
	case ((NU8) 8):
	{
		nimln(54, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP914));	}	break;
	case ((NU8) 9):
	{
		nimln(55, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP915));	}	break;
	default:
	{
	}	break;
	}
	nimln(57, "condsyms.nim");
	switch (targetos_120562) {
	case ((NU8) 1):
	{
		nimln(59, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP916));	}	break;
	case ((NU8) 2):
	{
		nimln(61, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP917));		nimln(62, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP918));	}	break;
	case ((NU8) 4):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 8):
	case ((NU8) 13):
	case ((NU8) 14):
	case ((NU8) 16):
	case ((NU8) 12):
	case ((NU8) 20):
	{
		nimln(66, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP919));		nimln(67, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP920));	}	break;
	case ((NU8) 7):
	{
		nimln(69, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP921));		nimln(70, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP919));		nimln(71, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP920));	}	break;
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 11):
	{
		nimln(73, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP919));		nimln(74, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP922));		nimln(75, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP920));	}	break;
	case ((NU8) 18):
	{
		nimln(77, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP923));	}	break;
	case ((NU8) 19):
	{
		nimln(79, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP923));		nimln(80, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP919));		nimln(81, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP920));	}	break;
	default:
	{
	}	break;
	}
	nimln(83, "condsyms.nim");
	nimln(83, "condsyms.nim");
	LOC13 = 0;
	nimln(83, "condsyms.nim");
	if (targetcpu_120560 < 1 || targetcpu_120560 > 14) raiseIndexError();
	LOC14 = 0;
	LOC14 = nimIntToStr(cpu_120460[(targetcpu_120560)- 1].Field4);
	LOC13 = rawNewString(LOC14->Sup.len + 3);
appendString(LOC13, ((NimStringDesc*) &TMP924));
appendString(LOC13, LOC14);
	definesymbol_142006(LOC13);	nimln(84, "condsyms.nim");
	nimln(84, "condsyms.nim");
	if (targetcpu_120560 < 1 || targetcpu_120560 > 14) raiseIndexError();
	LOC15 = 0;
	LOC15 = nsuNormalize(endiantostr_120455[(cpu_120460[(targetcpu_120560)- 1].Field2)- 0]);
	definesymbol_142006(LOC15);	nimln(85, "condsyms.nim");
	if (targetcpu_120560 < 1 || targetcpu_120560 > 14) raiseIndexError();
	definesymbol_142006(cpu_120460[(targetcpu_120560)- 1].Field0);	nimln(86, "condsyms.nim");
	if (targetos_120562 < 1 || targetos_120562 > 23) raiseIndexError();
	definesymbol_142006(os_120061[(targetos_120562)- 1].Field0);	nimln(87, "condsyms.nim");
	{
		nimln(87, "condsyms.nim");
		if (targetos_120562 < 1 || targetos_120562 > 23) raiseIndexError();
		if (!((os_120061[(targetos_120562)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0)) goto LA18;
		nimln(88, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP925));	}	LA18: ;
	popFrame();
}N_NOINLINE(void, compilercondsymsInit)(void) {
	nimfr("condsyms", "condsyms.nim")
	popFrame();
}

N_NOINLINE(void, compilercondsymsDatInit)(void) {
}

