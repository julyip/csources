/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY220170 TY220170;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct tlexer215186 tlexer215186;
typedef struct tbaselexer213024 tbaselexer213024;
typedef struct TNimObject TNimObject;
typedef struct tllstream211204 tllstream211204;
typedef struct ttoken215184 ttoken215184;
typedef struct tident200021 tident200021;
typedef struct tidobj200015 tidobj200015;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tbasechunk26038 tbasechunk26038;
typedef struct tfreecell26030 tfreecell26030;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tbaselexer213024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream211204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlexer215186  {
  tbaselexer213024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
};
struct  ttoken215184  {
NU8 Toktype;
NI Indent;
tident200021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef NimStringDesc* TY208063[3];
typedef NI TY26020[16];
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
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tfreecell26030  {
tfreecell26030* Next;
NI Zerofield;
};
struct TY220170 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP727)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44533*, usrtocell_48246)(void* usr);
static N_INLINE(void, rtladdzct_49804)(tcell44533* c);
N_NOINLINE(void, addzct_48217)(tcellseq44549* s, tcell44533* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_169379)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_220572)(NimStringDesc* filename);
N_NIMCALL(tllstream211204*, llstreamopen_211233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_215473)(ttoken215184* l);
N_NIMCALL(void, openlexer_215268)(tlexer215186* lex, NimStringDesc* filename, tllstream211204* inputstream);
N_NIMCALL(void, conftok_220411)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, ppgettok_220009)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, rawgettok_215229)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, parsedirective_220368)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NU8, whichkeyword_204379)(tident200021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_220148)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NIM_BOOL, parseexpr_220042)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_220090)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NIM_BOOL, parseatom_220051)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, lexmessage_215280)(tlexer215186* l, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_201046)(tident200021* symbol);
N_NIMCALL(void, jumptodirective_220232)(tlexer215186* l, ttoken215184* tok, NU8 dest);
N_NIMCALL(void, doelse_220242)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, doelif_220264)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, doend_220196)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(void, msgwriteln_197236)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, toktostr_215262)(ttoken215184* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_120866)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_120841)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_220484)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(tident200021*, getident_200472)(NimStringDesc* identifier);
static N_INLINE(tlineinfo195539, getlineinfo_215238)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(tlineinfo195539, newlineinfo_196129)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_220447)(tlexer215186* l, ttoken215184* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_208040)(NimStringDesc* switch_208042, NimStringDesc* arg, NU8 pass, tlineinfo195539 info);
N_NIMCALL(void, closelexer_215249)(tlexer215186* lex);
N_NIMCALL(void, rawmessage_197733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_220651)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, getuserconfigpath_220639)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_116099)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74428, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_114608)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
STRING_LITERAL(TMP1889, "/usr", 4);
STRING_LITERAL(TMP1890, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1891, "/usr/local", 10);
STRING_LITERAL(TMP1892, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1893, "lib", 3);
STRING_LITERAL(TMP1894, "@", 1);
STRING_LITERAL(TMP1895, "\')\'", 3);
STRING_LITERAL(TMP1896, "\':\'", 3);
STRING_LITERAL(TMP1897, "@if", 3);
STRING_LITERAL(TMP1898, "@end", 4);
STRING_LITERAL(TMP1899, "putenv", 6);
STRING_LITERAL(TMP1900, "prependenv", 10);
STRING_LITERAL(TMP1901, "appendenv", 9);
STRING_LITERAL(TMP1902, "-", 1);
STRING_LITERAL(TMP1903, "--", 2);
STRING_LITERAL(TMP1904, "", 0);
STRING_LITERAL(TMP1905, "\']\'", 3);
STRING_LITERAL(TMP1906, "&", 1);
STRING_LITERAL(TMP1907, "config", 6);
STRING_LITERAL(TMP1909, "nim.cfg", 7);
STRING_LITERAL(TMP1910, "nimrod.cfg", 10);
TY220170* condstack_220191;
extern TNimType NTI138; /* bool */
TNimType NTI220170; /* seq[bool] */
extern tgcheap46616 gch_46644;
extern NimStringDesc* libpath_169231;
extern NU32 gglobaloptions_169118;
extern TNimType NTI215186; /* TLexer */
extern NI gverbosity_169127;
extern NimStringDesc* gprojectpath_169233;
extern NimStringDesc* gprojectname_169232;
extern NimStringDesc* gprojectfull_169234;
N_NIMCALL(void, TMP727)(void* p, NI op) {
	TY220170* a;
	NI LOC1;
	a = (TY220170*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(tcell44533*, usrtocell_48246)(void* usr) {
	tcell44533* result;
	result = 0;
	result = ((tcell44533*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44533))))));
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_49804(c);
	}
	LA3: ;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_49804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, ppgettok_220009)(tlexer215186* l, ttoken215184* tok) {
	rawgettok_215229(l, tok);
	{
		while (1) {
			if (!((*tok).Toktype == ((NU8) 110))) goto LA2;
			rawgettok_215229(l, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_220051)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).Toktype == ((NU8) 90))) goto LA3;
		ppgettok_220009(l, tok);
		result = parseexpr_220042(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 91))) goto LA7;
			ppgettok_220009(l, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1895));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).Ident).Sup.Id == 42)) goto LA11;
		ppgettok_220009(l, tok);
		LOC13 = 0;
		LOC13 = parseatom_220051(l, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_201046((*tok).Ident);
		ppgettok_220009(l, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_220090)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_220051(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 2)) goto LA2;
			ppgettok_220009(l, tok);
			b = parseatom_220051(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_220042)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_220090(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 46)) goto LA2;
			ppgettok_220009(l, tok);
			b = parseandexpr_220090(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_220148)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_220009(l, tok);
	result = parseexpr_220042(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 104))) goto LA3;
		ppgettok_220009(l, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1896));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_220242)(tlexer215186* l, ttoken215184* tok) {
	{
		if (!((condstack_220191->Sup.len-1) < 0)) goto LA3;
		lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1897));
	}
	LA3: ;
	ppgettok_220009(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 104))) goto LA7;
		ppgettok_220009(l, tok);
	}
	LA7: ;
	{
		if (!condstack_220191->data[(condstack_220191->Sup.len-1)]) goto LA11;
		jumptodirective_220232(l, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_220264)(tlexer215186* l, ttoken215184* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_220191->Sup.len-1) < 0)) goto LA3;
		lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1897));
	}
	LA3: ;
	res = evalppif_220148(l, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_220191->data[(condstack_220191->Sup.len-1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_220232(l, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_220191->data[(condstack_220191->Sup.len-1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_220196)(tlexer215186* l, ttoken215184* tok) {
	{
		if (!((condstack_220191->Sup.len-1) < 0)) goto LA3;
		lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1897));
	}
	LA3: ;
	ppgettok_220009(l, tok);
	condstack_220191 = (TY220170*) setLengthSeq(&(condstack_220191)->Sup, sizeof(NIM_BOOL), (condstack_220191->Sup.len-1));
}

N_NIMCALL(void, jumptodirective_220232)(tlexer215186* l, ttoken215184* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = 0;
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1894));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_220009(l, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_204379((*tok).Ident);
				switch (LOC9) {
				case ((NU8) 28):
				{
					nestedifs += 1;
				}
				break;
				case ((NU8) 19):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == 0);
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_220242(l, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU8) 18):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == 0);
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_220264(l, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU8) 20):
				{
					{
						if (!(nestedifs == 0)) goto LA28;
						doend_220196(l, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(0 < nestedifs)) goto LA32;
						nestedifs -= 1;
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_220009(l, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).Toktype == ((NU8) 1))) goto LA36;
				lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1898));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_220009(l, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_220368)(tlexer215186* l, ttoken215184* tok) {
	NU8 LOC1;
	ppgettok_220009(l, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_204379((*tok).Ident);
	switch (LOC1) {
	case ((NU8) 28):
	{
		NIM_BOOL res;
		condstack_220191 = (TY220170*) setLengthSeq(&(condstack_220191)->Sup, sizeof(NIM_BOOL), (NI32)(condstack_220191->Sup.len + 1));
		res = evalppif_220148(l, tok);
		condstack_220191->data[(condstack_220191->Sup.len-1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_220232(l, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU8) 18):
	{
		doelif_220264(l, tok);
	}
	break;
	case ((NU8) 19):
	{
		doelse_220242(l, tok);
	}
	break;
	case ((NU8) 20):
	{
		doend_220196(l, tok);
	}
	break;
	case ((NU8) 175):
	{
		NimStringDesc* LOC11;
		ppgettok_220009(l, tok);
		LOC11 = 0;
		LOC11 = toktostr_215262(&(*tok));
		msgwriteln_197236(LOC11);
		ppgettok_220009(l, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC13;
		LOC13 = 0;
		LOC13 = nsuNormalize((*(*tok).Ident).S);
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1899))) goto LA14;
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1900))) goto LA15;
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1901))) goto LA16;
		goto LA17;
		LA14: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC20;
			ppgettok_220009(l, tok);
			key = toktostr_215262(&(*tok));
			ppgettok_220009(l, tok);
			LOC20 = 0;
			LOC20 = toktostr_215262(&(*tok));
			putenv_120866(key, LOC20);
			ppgettok_220009(l, tok);
		}
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC22;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			ppgettok_220009(l, tok);
			key = toktostr_215262(&(*tok));
			ppgettok_220009(l, tok);
			LOC22 = 0;
			LOC23 = 0;
			LOC23 = toktostr_215262(&(*tok));
			LOC24 = 0;
			LOC24 = getenv_120841(key);
			LOC22 = rawNewString(LOC23->Sup.len + LOC24->Sup.len + 0);
appendString(LOC22, LOC23);
appendString(LOC22, LOC24);
			putenv_120866(key, LOC22);
			ppgettok_220009(l, tok);
		}
		goto LA18;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC26;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			ppgettok_220009(l, tok);
			key = toktostr_215262(&(*tok));
			ppgettok_220009(l, tok);
			LOC26 = 0;
			LOC27 = 0;
			LOC27 = getenv_120841(key);
			LOC28 = 0;
			LOC28 = toktostr_215262(&(*tok));
			LOC26 = rawNewString(LOC27->Sup.len + LOC28->Sup.len + 0);
appendString(LOC26, LOC27);
appendString(LOC26, LOC28);
			putenv_120866(key, LOC26);
			ppgettok_220009(l, tok);
		}
		goto LA18;
		LA17: ;
		{
			NimStringDesc* LOC30;
			LOC30 = 0;
			LOC30 = toktostr_215262(&(*tok));
			lexmessage_215280(&(*l), ((NU16) 30), LOC30);
		}
		LA18: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_220411)(tlexer215186* l, ttoken215184* tok) {
	ppgettok_220009(l, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).Ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1894));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_220368(l, tok);
		} LA2: ;
	}
}

static N_INLINE(tlineinfo195539, getlineinfo_215238)(tlexer215186* l, ttoken215184* tok) {
	tlineinfo195539 result;
	memset((void*)&result, 0, sizeof(result));
	result = newlineinfo_196129((*l).Fileidx, (*tok).Line, (*tok).Col);
	return result;
}

N_NIMCALL(void, checksymbol_220447)(tlexer215186* l, ttoken215184* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).Toktype >= ((NU8) 2) && (*tok).Toktype <= ((NU8) 69) || (*tok).Toktype >= ((NU8) 84) && (*tok).Toktype <= ((NU8) 86)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_215262(tok);
		lexmessage_215280(l, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_220484)(tlexer215186* l, ttoken215184* tok) {
	tlineinfo195539 info;
	NimStringDesc* s;
	NimStringDesc* val;
	{
		NIM_BOOL LOC3;
		tident200021* LOC4;
		tident200021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_200472(((NimStringDesc*) &TMP1902));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC4).Sup.Id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_200472(((NimStringDesc*) &TMP1903));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC6).Sup.Id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_220411(l, tok);
	}
	LA7: ;
	info = getlineinfo_215238(&(*l), &(*tok));
	checksymbol_220447(&(*l), &(*tok));
	s = toktostr_215262(&(*tok));
	conftok_220411(l, tok);
	val = copyString(((NimStringDesc*) &TMP1904));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).Toktype == ((NU8) 107))) goto LA10;
			s = addChar(s, 46);
			conftok_220411(l, tok);
			checksymbol_220447(&(*l), &(*tok));
			LOC11 = 0;
			LOC11 = toktostr_215262(&(*tok));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_220411(l, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).Toktype == ((NU8) 92))) goto LA14;
		conftok_220411(l, tok);
		checksymbol_220447(&(*l), &(*tok));
		LOC16 = 0;
		LOC16 = toktostr_215262(&(*tok));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_220411(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 93))) goto LA19;
			conftok_220411(l, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_215280(&(*l), ((NU16) 23), ((NimStringDesc*) &TMP1905));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	{
		NimStringDesc* LOC30;
		if (!((*tok).Toktype == ((NU8) 104) || (*tok).Toktype == ((NU8) 106))) goto LA24;
		{
			if (!(0 < val->Sup.len)) goto LA28;
			val = addChar(val, 58);
		}
		LA28: ;
		conftok_220411(l, tok);
		checksymbol_220447(&(*l), &(*tok));
		LOC30 = 0;
		LOC30 = toktostr_215262(&(*tok));
		val = resizeString(val, LOC30->Sup.len + 0);
appendString(val, LOC30);
		conftok_220411(l, tok);
		{
			while (1) {
				NIM_BOOL LOC33;
				tident200021* LOC35;
				NimStringDesc* LOC36;
				LOC33 = 0;
				LOC33 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC33)) goto LA34;
				LOC35 = 0;
				LOC35 = getident_200472(((NimStringDesc*) &TMP1906));
				LOC33 = ((*(*tok).Ident).Sup.Id == (*LOC35).Sup.Id);
				LA34: ;
				if (!LOC33) goto LA32;
				conftok_220411(l, tok);
				checksymbol_220447(&(*l), &(*tok));
				LOC36 = 0;
				LOC36 = toktostr_215262(&(*tok));
				val = resizeString(val, LOC36->Sup.len + 0);
appendString(val, LOC36);
				conftok_220411(l, tok);
			} LA32: ;
		}
	}
	LA24: ;
	processswitch_208040(s, val, ((NU8) 2), info);
}

N_NIMCALL(void, readconfigfile_220572)(NimStringDesc* filename) {
	tlexer215186 l;
	ttoken215184 tok;
	tllstream211204* stream;
	memset((void*)&l, 0, sizeof(l));
	l.Sup.Sup.m_type = (&NTI215186);
	memset((void*)&tok, 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_211233(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_215473(&tok);
		openlexer_215268(&l, filename, stream);
		tok.Toktype = ((NU8) 1);
		conftok_220411(&l, &tok);
		{
			while (1) {
				if (!!((tok.Toktype == ((NU8) 1)))) goto LA6;
				parseassignment_220484(&l, &tok);
			} LA6: ;
		}
		{
			if (!(0 < condstack_220191->Sup.len)) goto LA9;
			lexmessage_215280(&l, ((NU16) 23), ((NimStringDesc*) &TMP1898));
		}
		LA9: ;
		closelexer_215249(&l);
		{
			if (!(1 <= gverbosity_169127)) goto LA13;
			rawmessage_197733(((NU16) 269), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_220651)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY208063 LOC1;
	result = 0;
	p = getprefixdir_169379();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1907));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_220639)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_114608)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_220807)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_169231) && (libpath_169231)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_169379();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1889))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_169231; libpath_169231 = copyStringRC1(((NimStringDesc*) &TMP1890));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1891))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_169231; libpath_169231 = copyStringRC1(((NimStringDesc*) &TMP1892));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) &libpath_169231, nosjoinPath(prefix, ((NimStringDesc*) &TMP1893)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_220651(cfg);
		readconfigfile_220572(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_220639(cfg);
		readconfigfile_220572(LOC24);
	}
	LA22: ;
	{
		if (!(0 < gprojectpath_169233->Sup.len)) goto LA27;
		pd = copyString(gprojectpath_169233);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_220854;
			dir_220854 = 0;
			{
				NimStringDesc* current_220874;
				if (!NIM_FALSE) goto LA37;
				current_220874 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_220854 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_116099(dir_220854, cfg);
					readconfigfile_220572(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_220874);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_220874 = nosparentDir(current_220874);
						dir_220854 = current_220874;
						LOC51 = 0;
						LOC51 = HEX2F_116099(dir_220854, cfg);
						readconfigfile_220572(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_220876;
					NI HEX3Atmp_220878;
					NI res_220880;
					i_220876 = 0;
					HEX3Atmp_220878 = 0;
					HEX3Atmp_220878 = (NI32)(pd->Sup.len - 2);
					res_220880 = 0;
					{
						while (1) {
							if (!(res_220880 <= HEX3Atmp_220878)) goto LA55;
							i_220876 = res_220880;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_220876])) == ((NU8)(92)) || ((NU8)(pd->data[i_220876])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_220876 == 0);
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI32)(i_220876 - 1)])) == ((NU8)(92)) || ((NU8)(pd->data[(NI32)(i_220876 - 1)])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_220854 = copyStrLast(pd, 0, i_220876);
								LOC64 = 0;
								LOC64 = HEX2F_116099(dir_220854, cfg);
								readconfigfile_220572(LOC64);
							}
							LA62: ;
							res_220880 += 1;
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_220854 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_116099(dir_220854, cfg);
					readconfigfile_220572(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_116099(pd, cfg);
		readconfigfile_220572(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!((gprojectname_169232->Sup.len == 0))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_169234, ((NimStringDesc*) &TMP1909));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_114608(projectconfig);
				if (!LOC81) goto LA82;
				readconfigfile_220572(projectconfig);
			}
			goto LA79;
			LA82: ;
			{
				NimStringDesc* LOC85;
				LOC85 = 0;
				LOC85 = noschangeFileExt(gprojectfull_169234, ((NimStringDesc*) &TMP1910));
				readconfigfile_220572(LOC85);
			}
			LA79: ;
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfInit)(void) {
	if (condstack_220191) nimGCunrefNoCycle(condstack_220191);
	condstack_220191 = (TY220170*) newSeqRC1((&NTI220170), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfDatInit)(void) {
NTI220170.size = sizeof(TY220170*);
NTI220170.kind = 24;
NTI220170.base = (&NTI138);
NTI220170.flags = 2;
NTI220170.marker = TMP727;
}

