/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct ttmplparser193015 ttmplparser193015;
typedef struct tllstream159204 tllstream159204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tnode169647 tnode169647;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttype169681 ttype169681;
typedef struct tsym169677 tsym169677;
typedef struct tident131015 tident131015;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tidobj131009 tidobj131009;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tlib169665 tlib169665;
typedef struct TY169763 TY169763;
typedef struct tlistentry100011 tlistentry100011;
typedef NU8 TY104134[32];
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tlineinfo128308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct ttmplparser193015 {
tllstream159204* Inp;
NU8 State;
tlineinfo128308 Info;
NI Indent;
NI Emitpar;
NimStringDesc* X;
tllstream159204* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
NI Curly;
NI Bracket;
NI Par;
NIM_BOOL Pendingexprline;
};
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tllstream159204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct tnode169647 {
ttype169681* Typ;
tlineinfo128308 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym169677* Sym;
} S4;
struct {tident131015* Ident;
} S5;
struct {tnodeseq169641* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tidobj131009 {
  TNimObject Sup;
NI Id;
};
struct tloc169661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype169681* T;
trope126007* R;
trope126007* Heaproot;
NI A;
};
struct ttype169681 {
  tidobj131009 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq169679* Sons;
tnode169647* N;
tsym169677* Destructor;
tsym169677* Owner;
tsym169677* Sym;
NI64 Size;
NI Align;
tloc169661 Loc;
};
struct tstrtable169651 {
NI Counter;
tsymseq169649* Data;
};
struct tsym169677 {
  tidobj131009 Sup;
NU8 Kind;
union {
struct {ttypeseq169679* Typeinstcache;
} S1;
struct {TY169771* Procinstcache;
tscope169671* Scope;
} S2;
struct {TY169771* Usedgenerics;
tstrtable169651 Tab;
} S3;
} kindU;
NU16 Magic;
ttype169681* Typ;
tident131015* Name;
tlineinfo128308 Info;
tsym169677* Owner;
NU32 Flags;
tnode169647* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc169661 Loc;
tlib169665* Annex;
tnode169647* Constraint;
};
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
NI H;
};
struct trope126007 {
  TNimObject Sup;
trope126007* Left;
trope126007* Right;
NI Length;
NimStringDesc* Data;
};
struct tinstantiation169667 {
tsym169677* Sym;
ttypeseq169679* Concretetypes;
TY169763* Usedby;
};
struct tscope169671 {
NI Depthlevel;
tstrtable169651 Symbols;
tscope169671* Parent;
};
struct tlistentry100011 {
  TNimObject Sup;
tlistentry100011* Prev;
tlistentry100011* Next;
};
struct tlib169665 {
  tlistentry100011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope126007* Name;
tnode169647* Path;
};
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
};
struct ttypeseq169679 {
  TGenericSeq Sup;
  ttype169681* data[SEQ_DECL_SIZE];
};
struct TY169771 {
  TGenericSeq Sup;
  tinstantiation169667* data[SEQ_DECL_SIZE];
};
struct tsymseq169649 {
  TGenericSeq Sup;
  tsym169677* data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, newline_193038)(ttmplparser193015* p);
N_NIMCALL(void, llstreamwrite_159258)(tllstream159204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, scanpar_193046)(ttmplparser193015* p, NI d);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, withinexpr_193139)(ttmplparser193015* p);
N_NIMCALL(void, parseline_193151)(ttmplparser193015* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, endswithopr_159638)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_140348)(NimStringDesc* id);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, localerror_129676)(tlineinfo128308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_78741)(NimStringDesc* s, TY104134 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_159263)(tllstream159204* s, NIM_CHAR data);
N_NIMCALL(tllstream159204*, filtertmpl_193005)(tllstream159204* stdin_193007, NimStringDesc* filename, tnode169647* call);
static N_INLINE(tlineinfo128308, newlineinfo_128777)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(tlineinfo128308, newlineinfo_128769)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_128506)(NimStringDesc* filename);
N_NIMCALL(tllstream159204*, llstreamopen_159218)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_192014)(tnode169647* n, NimStringDesc* name, NI pos, NIM_CHAR default_192019);
N_NIMCALL(NimStringDesc*, strarg_192021)(tnode169647* n, NimStringDesc* name, NI pos, NimStringDesc* default_192026);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_159248)(tllstream159204* s, NimStringDesc** line);
N_NIMCALL(void, llstreamclose_159238)(tllstream159204* s);
NIM_CONST TY104134 patternchars_193035 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP2529, "\012", 1);
STRING_LITERAL(TMP2530, "", 0);
STRING_LITERAL(TMP2531, "end", 3);
STRING_LITERAL(TMP2532, "#end", 4);
static NIM_CONST TY104134 TMP2534 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2536, "\"", 1);
STRING_LITERAL(TMP2537, "(\"", 2);
STRING_LITERAL(TMP2538, "\\x", 2);
STRING_LITERAL(TMP2539, "\\\\", 2);
STRING_LITERAL(TMP2540, "\\\'", 2);
STRING_LITERAL(TMP2541, "\\\"", 2);
STRING_LITERAL(TMP2542, "}", 1);
STRING_LITERAL(TMP2543, "$", 1);
STRING_LITERAL(TMP2544, "\\n\"", 3);
STRING_LITERAL(TMP2545, "subschar", 8);
STRING_LITERAL(TMP2546, "metachar", 8);
STRING_LITERAL(TMP2547, "emit", 4);
STRING_LITERAL(TMP2548, "result.add", 10);
STRING_LITERAL(TMP2549, "conc", 4);
STRING_LITERAL(TMP2550, " & ", 3);
STRING_LITERAL(TMP2551, "tostring", 8);
extern TFrame* frameptr_12027;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(void, newline_193038)(ttmplparser193015* p) {
	NimStringDesc* LOC1;
	nimfr("newLine", "filter_tmpl.nim")
	nimln(40, "filter_tmpl.nim");
	nimln(40, "filter_tmpl.nim");
	LOC1 = 0;
	LOC1 = nsuRepeatChar((*p).Emitpar, 41);
	llstreamwrite_159258((*p).Outp, LOC1);
	nimln(41, "filter_tmpl.nim");
	(*p).Emitpar = 0;
	nimln(42, "filter_tmpl.nim");
	{
		nimln(692, "system.nim");
		if (!(((NI16) 1) < (*p).Info.Line)) goto LA4;
		nimln(42, "filter_tmpl.nim");
		llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2529));
	}
	LA4: ;
	nimln(43, "filter_tmpl.nim");
	{
		NimStringDesc* LOC10;
		if (!(*p).Pendingexprline) goto LA8;
		nimln(44, "filter_tmpl.nim");
		nimln(44, "filter_tmpl.nim");
		LOC10 = 0;
		LOC10 = nsuRepeatChar(2, 32);
		llstreamwrite_159258((*p).Outp, LOC10);
		nimln(45, "filter_tmpl.nim");
		(*p).Pendingexprline = NIM_FALSE;
	}
	LA8: ;
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, scanpar_193046)(ttmplparser193015* p, NI d) {
	NI i;
	nimfr("scanPar", "filter_tmpl.nim")
	nimln(48, "filter_tmpl.nim");
	i = d;
	nimln(49, "filter_tmpl.nim");
	while (1) {
		nimln(50, "filter_tmpl.nim");
		if ((NU)(i) > (NU)((*p).X->Sup.len)) raiseIndexError();
		switch (((NU8)((*p).X->data[i]))) {
		case 0:
		{
			nimln(51, "filter_tmpl.nim");
			goto LA1;
		}
		break;
		case 40:
		{
			nimln(52, "filter_tmpl.nim");
			(*p).Par = addInt((*p).Par, 1);
		}
		break;
		case 41:
		{
			nimln(53, "filter_tmpl.nim");
			(*p).Par = subInt((*p).Par, 1);
		}
		break;
		case 91:
		{
			nimln(54, "filter_tmpl.nim");
			(*p).Bracket = addInt((*p).Bracket, 1);
		}
		break;
		case 93:
		{
			nimln(55, "filter_tmpl.nim");
			(*p).Bracket = subInt((*p).Bracket, 1);
		}
		break;
		case 123:
		{
			nimln(56, "filter_tmpl.nim");
			(*p).Curly = addInt((*p).Curly, 1);
		}
		break;
		case 125:
		{
			nimln(57, "filter_tmpl.nim");
			(*p).Curly = subInt((*p).Curly, 1);
		}
		break;
		default:
		{
		}
		break;
		}
		nimln(59, "filter_tmpl.nim");
		i = addInt(i, 1);
	} LA1: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, withinexpr_193139)(ttmplparser193015* p) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	nimfr("withInExpr", "filter_tmpl.nim")
	result = 0;
	nimln(62, "filter_tmpl.nim");
	nimln(62, "filter_tmpl.nim");
	nimln(62, "filter_tmpl.nim");
	nimln(692, "system.nim");
	LOC2 = (0 < (*p).Par);
	if (LOC2) goto LA3;
	nimln(692, "system.nim");
	LOC2 = (0 < (*p).Bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	nimln(692, "system.nim");
	LOC1 = (0 < (*p).Curly);
	LA4: ;
	result = LOC1;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, parseline_193151)(ttmplparser193015* p) {
	NI d;
	NI j;
	NI curly;
	NimStringDesc* keyw;
	nimfr("parseLine", "filter_tmpl.nim")
	d = 0;
	j = 0;
	curly = 0;
	keyw = 0;
	nimln(68, "filter_tmpl.nim");
	j = 0;
	nimln(69, "filter_tmpl.nim");
	while (1) {
		nimln(69, "filter_tmpl.nim");
		if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
		if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA1;
		nimln(69, "filter_tmpl.nim");
		j = addInt(j, 1);
	} LA1: ;
	nimln(70, "filter_tmpl.nim");
	{
		NIM_BOOL LOC4;
		nimln(70, "filter_tmpl.nim");
		nimln(70, "filter_tmpl.nim");
		if ((NU)(0) > (NU)((*p).X->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)((*p).X->data[0]) == (NU8)((*p).Nimdirective));
		if (!(LOC4)) goto LA5;
		nimln(70, "filter_tmpl.nim");
		if ((NU)(1) > (NU)((*p).X->Sup.len)) raiseIndexError();
		LOC4 = ((NU8)((*p).X->data[1]) == (NU8)(33));
		LA5: ;
		if (!LOC4) goto LA6;
		nimln(71, "filter_tmpl.nim");
		newline_193038(p);
	}
	goto LA2;
	LA6: ;
	{
		NIM_BOOL LOC13;
		NU8 LOC15;
		nimln(72, "filter_tmpl.nim");
		if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
		if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Nimdirective))) goto LA9;
		nimln(73, "filter_tmpl.nim");
		newline_193038(p);
		nimln(74, "filter_tmpl.nim");
		j = addInt(j, 1);
		nimln(75, "filter_tmpl.nim");
		while (1) {
			nimln(75, "filter_tmpl.nim");
			if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
			if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA11;
			nimln(75, "filter_tmpl.nim");
			j = addInt(j, 1);
		} LA11: ;
		nimln(76, "filter_tmpl.nim");
		d = j;
		nimln(77, "filter_tmpl.nim");
		keyw = copyString(((NimStringDesc*) &TMP2530));
		nimln(78, "filter_tmpl.nim");
		while (1) {
			nimln(716, "system.nim");
			if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
			if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA12;
			nimln(79, "filter_tmpl.nim");
			if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
			keyw = addChar(keyw, (*p).X->data[j]);
			nimln(80, "filter_tmpl.nim");
			j = addInt(j, 1);
		} LA12: ;
		nimln(82, "filter_tmpl.nim");
		scanpar_193046(p, j);
		nimln(83, "filter_tmpl.nim");
		nimln(83, "filter_tmpl.nim");
		nimln(83, "filter_tmpl.nim");
		LOC13 = withinexpr_193139(&(*p));
		if (LOC13) goto LA14;
		nimln(83, "filter_tmpl.nim");
		LOC13 = endswithopr_159638((*p).X);
		LA14: ;
		(*p).Pendingexprline = LOC13;
		nimln(84, "filter_tmpl.nim");
		nimln(84, "filter_tmpl.nim");
		LOC15 = whichkeyword_140348(keyw);
		switch (LOC15) {
		case ((NU8) 20):
		{
			NimStringDesc* LOC22;
			nimln(86, "filter_tmpl.nim");
			{
				nimln(688, "system.nim");
				if (!(2 <= (*p).Indent)) goto LA19;
				nimln(87, "filter_tmpl.nim");
				(*p).Indent = subInt((*p).Indent, 2);
			}
			goto LA17;
			LA19: ;
			{
				nimln(89, "filter_tmpl.nim");
				(*p).Info.Col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
				nimln(90, "filter_tmpl.nim");
				localerror_129676((*p).Info, ((NU16) 163), ((NimStringDesc*) &TMP2531));
			}
			LA17: ;
			nimln(91, "filter_tmpl.nim");
			nimln(91, "filter_tmpl.nim");
			LOC22 = 0;
			LOC22 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_159258((*p).Outp, LOC22);
			nimln(92, "filter_tmpl.nim");
			llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2532));
		}
		break;
		case ((NU8) 28):
		case ((NU8) 63):
		case ((NU8) 59):
		case ((NU8) 64):
		case ((NU8) 25):
		case ((NU8) 7):
		case ((NU8) 9):
		case ((NU8) 49):
		case ((NU8) 35):
		case ((NU8) 13):
		case ((NU8) 38):
		case ((NU8) 58):
		case ((NU8) 39):
		{
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			nimln(95, "filter_tmpl.nim");
			nimln(95, "filter_tmpl.nim");
			LOC24 = 0;
			LOC24 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_159258((*p).Outp, LOC24);
			nimln(96, "filter_tmpl.nim");
			nimln(96, "filter_tmpl.nim");
			LOC25 = 0;
			LOC25 = copyStr((*p).X, d);
			llstreamwrite_159258((*p).Outp, LOC25);
			nimln(97, "filter_tmpl.nim");
			(*p).Indent = addInt((*p).Indent, 2);
		}
		break;
		case ((NU8) 18):
		case ((NU8) 46):
		case ((NU8) 19):
		case ((NU8) 22):
		case ((NU8) 24):
		{
			NI TMP2533;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			nimln(99, "filter_tmpl.nim");
			nimln(99, "filter_tmpl.nim");
			nimln(99, "filter_tmpl.nim");
			TMP2533 = subInt((*p).Indent, 2);
			LOC27 = 0;
			LOC27 = nsuRepeatChar((NI32)(TMP2533), 32);
			llstreamwrite_159258((*p).Outp, LOC27);
			nimln(100, "filter_tmpl.nim");
			nimln(100, "filter_tmpl.nim");
			LOC28 = 0;
			LOC28 = copyStr((*p).X, d);
			llstreamwrite_159258((*p).Outp, LOC28);
		}
		break;
		case ((NU8) 37):
		case ((NU8) 62):
		case ((NU8) 11):
		case ((NU8) 61):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			nimln(102, "filter_tmpl.nim");
			nimln(102, "filter_tmpl.nim");
			LOC30 = 0;
			LOC30 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_159258((*p).Outp, LOC30);
			nimln(103, "filter_tmpl.nim");
			nimln(103, "filter_tmpl.nim");
			LOC31 = 0;
			LOC31 = copyStr((*p).X, d);
			llstreamwrite_159258((*p).Outp, LOC31);
			nimln(104, "filter_tmpl.nim");
			{
				NIM_BOOL LOC34;
				nimln(104, "filter_tmpl.nim");
				nimln(104, "filter_tmpl.nim");
				LOC34 = contains_78741((*p).X, TMP2534);
				if (!!(LOC34)) goto LA35;
				nimln(106, "filter_tmpl.nim");
				(*p).Indent = addInt((*p).Indent, 2);
			}
			LA35: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC38;
			NimStringDesc* LOC39;
			nimln(108, "filter_tmpl.nim");
			nimln(108, "filter_tmpl.nim");
			LOC38 = 0;
			LOC38 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_159258((*p).Outp, LOC38);
			nimln(109, "filter_tmpl.nim");
			nimln(109, "filter_tmpl.nim");
			LOC39 = 0;
			LOC39 = copyStr((*p).X, d);
			llstreamwrite_159258((*p).Outp, LOC39);
		}
		break;
		}
		nimln(110, "filter_tmpl.nim");
		(*p).State = ((NU8) 0);
	}
	goto LA2;
	LA9: ;
	{
		nimln(114, "filter_tmpl.nim");
		(*p).Par = 0;
		nimln(115, "filter_tmpl.nim");
		(*p).Curly = 0;
		nimln(116, "filter_tmpl.nim");
		(*p).Bracket = 0;
		nimln(117, "filter_tmpl.nim");
		j = 0;
		nimln(118, "filter_tmpl.nim");
		switch ((*p).State) {
		case ((NU8) 1):
		{
			NI TMP2535;
			NimStringDesc* LOC42;
			nimln(121, "filter_tmpl.nim");
			llstreamwrite_159258((*p).Outp, (*p).Conc);
			nimln(122, "filter_tmpl.nim");
			llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2529));
			nimln(123, "filter_tmpl.nim");
			nimln(123, "filter_tmpl.nim");
			nimln(123, "filter_tmpl.nim");
			TMP2535 = addInt((*p).Indent, 2);
			LOC42 = 0;
			LOC42 = nsuRepeatChar((NI32)(TMP2535), 32);
			llstreamwrite_159258((*p).Outp, LOC42);
			nimln(124, "filter_tmpl.nim");
			llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2536));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC44;
			nimln(126, "filter_tmpl.nim");
			newline_193038(p);
			nimln(127, "filter_tmpl.nim");
			nimln(127, "filter_tmpl.nim");
			LOC44 = 0;
			LOC44 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_159258((*p).Outp, LOC44);
			nimln(128, "filter_tmpl.nim");
			llstreamwrite_159258((*p).Outp, (*p).Emit);
			nimln(129, "filter_tmpl.nim");
			llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2537));
			nimln(130, "filter_tmpl.nim");
			(*p).Emitpar = addInt((*p).Emitpar, 1);
		}
		break;
		}
		nimln(131, "filter_tmpl.nim");
		(*p).State = ((NU8) 1);
		nimln(132, "filter_tmpl.nim");
		while (1) {
			nimln(133, "filter_tmpl.nim");
			if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
			switch (((NU8)((*p).X->data[j]))) {
			case 0:
			{
				nimln(135, "filter_tmpl.nim");
				goto LA45;
			}
			break;
			case 1 ... 31:
			case 128 ... 255:
			{
				NimStringDesc* LOC48;
				nimln(137, "filter_tmpl.nim");
				llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2538));
				nimln(138, "filter_tmpl.nim");
				nimln(138, "filter_tmpl.nim");
				nimln(138, "filter_tmpl.nim");
				if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
				LOC48 = 0;
				LOC48 = nsuToHex(((NI64) (((NU8)((*p).X->data[j])))), 2);
				llstreamwrite_159258((*p).Outp, LOC48);
				nimln(139, "filter_tmpl.nim");
				j = addInt(j, 1);
			}
			break;
			case 92:
			{
				nimln(141, "filter_tmpl.nim");
				llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2539));
				nimln(142, "filter_tmpl.nim");
				j = addInt(j, 1);
			}
			break;
			case 39:
			{
				nimln(144, "filter_tmpl.nim");
				llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2540));
				nimln(145, "filter_tmpl.nim");
				j = addInt(j, 1);
			}
			break;
			case 34:
			{
				nimln(147, "filter_tmpl.nim");
				llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2541));
				nimln(148, "filter_tmpl.nim");
				j = addInt(j, 1);
			}
			break;
			default:
			{
				nimln(150, "filter_tmpl.nim");
				{
					nimln(150, "filter_tmpl.nim");
					if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
					if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA55;
					nimln(152, "filter_tmpl.nim");
					j = addInt(j, 1);
					nimln(153, "filter_tmpl.nim");
					if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
					switch (((NU8)((*p).X->data[j]))) {
					case 123:
					{
						nimln(155, "filter_tmpl.nim");
						(*p).Info.Col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
						nimln(156, "filter_tmpl.nim");
						llstreamwrite_159263((*p).Outp, 34);
						nimln(157, "filter_tmpl.nim");
						llstreamwrite_159258((*p).Outp, (*p).Conc);
						nimln(158, "filter_tmpl.nim");
						llstreamwrite_159258((*p).Outp, (*p).Tostr);
						nimln(159, "filter_tmpl.nim");
						llstreamwrite_159263((*p).Outp, 40);
						nimln(160, "filter_tmpl.nim");
						j = addInt(j, 1);
						nimln(161, "filter_tmpl.nim");
						curly = 0;
						nimln(162, "filter_tmpl.nim");
						while (1) {
							nimln(163, "filter_tmpl.nim");
							if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
							switch (((NU8)((*p).X->data[j]))) {
							case 0:
							{
								nimln(165, "filter_tmpl.nim");
								localerror_129676((*p).Info, ((NU16) 188), ((NimStringDesc*) &TMP2542));
								nimln(166, "filter_tmpl.nim");
								goto LA58;
							}
							break;
							case 123:
							{
								nimln(168, "filter_tmpl.nim");
								j = addInt(j, 1);
								nimln(169, "filter_tmpl.nim");
								curly = addInt(curly, 1);
								nimln(170, "filter_tmpl.nim");
								llstreamwrite_159263((*p).Outp, 123);
							}
							break;
							case 125:
							{
								nimln(172, "filter_tmpl.nim");
								j = addInt(j, 1);
								nimln(173, "filter_tmpl.nim");
								{
									nimln(173, "filter_tmpl.nim");
									if (!(curly == 0)) goto LA64;
									nimln(173, "filter_tmpl.nim");
									goto LA58;
								}
								LA64: ;
								nimln(174, "filter_tmpl.nim");
								{
									nimln(692, "system.nim");
									if (!(0 < curly)) goto LA68;
									nimln(174, "filter_tmpl.nim");
									curly = subInt(curly, 1);
								}
								LA68: ;
								nimln(175, "filter_tmpl.nim");
								llstreamwrite_159263((*p).Outp, 125);
							}
							break;
							default:
							{
								nimln(177, "filter_tmpl.nim");
								if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
								llstreamwrite_159263((*p).Outp, (*p).X->data[j]);
								nimln(178, "filter_tmpl.nim");
								j = addInt(j, 1);
							}
							break;
							}
						} LA58: ;
						nimln(179, "filter_tmpl.nim");
						llstreamwrite_159263((*p).Outp, 41);
						nimln(180, "filter_tmpl.nim");
						llstreamwrite_159258((*p).Outp, (*p).Conc);
						nimln(181, "filter_tmpl.nim");
						llstreamwrite_159263((*p).Outp, 34);
					}
					break;
					case 97 ... 122:
					case 65 ... 90:
					case 128 ... 255:
					{
						nimln(183, "filter_tmpl.nim");
						llstreamwrite_159263((*p).Outp, 34);
						nimln(184, "filter_tmpl.nim");
						llstreamwrite_159258((*p).Outp, (*p).Conc);
						nimln(185, "filter_tmpl.nim");
						llstreamwrite_159258((*p).Outp, (*p).Tostr);
						nimln(186, "filter_tmpl.nim");
						llstreamwrite_159263((*p).Outp, 40);
						nimln(187, "filter_tmpl.nim");
						while (1) {
							nimln(716, "system.nim");
							if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
							if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA72;
							nimln(188, "filter_tmpl.nim");
							if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
							llstreamwrite_159263((*p).Outp, (*p).X->data[j]);
							nimln(189, "filter_tmpl.nim");
							j = addInt(j, 1);
						} LA72: ;
						nimln(190, "filter_tmpl.nim");
						llstreamwrite_159263((*p).Outp, 41);
						nimln(191, "filter_tmpl.nim");
						llstreamwrite_159258((*p).Outp, (*p).Conc);
						nimln(192, "filter_tmpl.nim");
						llstreamwrite_159263((*p).Outp, 34);
					}
					break;
					default:
					{
						nimln(194, "filter_tmpl.nim");
						{
							nimln(194, "filter_tmpl.nim");
							if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
							if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA76;
							nimln(195, "filter_tmpl.nim");
							llstreamwrite_159263((*p).Outp, (*p).Subschar);
							nimln(196, "filter_tmpl.nim");
							j = addInt(j, 1);
						}
						goto LA74;
						LA76: ;
						{
							nimln(198, "filter_tmpl.nim");
							(*p).Info.Col = ((NI16)chckRange(j, ((NI16) -32768), ((NI16) 32767)));
							nimln(199, "filter_tmpl.nim");
							localerror_129676((*p).Info, ((NU16) 167), ((NimStringDesc*) &TMP2543));
						}
						LA74: ;
					}
					break;
					}
				}
				goto LA53;
				LA55: ;
				{
					nimln(201, "filter_tmpl.nim");
					if ((NU)(j) > (NU)((*p).X->Sup.len)) raiseIndexError();
					llstreamwrite_159263((*p).Outp, (*p).X->data[j]);
					nimln(202, "filter_tmpl.nim");
					j = addInt(j, 1);
				}
				LA53: ;
			}
			break;
			}
		} LA45: ;
		nimln(203, "filter_tmpl.nim");
		llstreamwrite_159258((*p).Outp, ((NimStringDesc*) &TMP2544));
	}
	LA2: ;
	popFrame();
}

static N_INLINE(tlineinfo128308, newlineinfo_128777)(NimStringDesc* filename, NI line, NI col) {
	tlineinfo128308 result;
	NI32 LOC1;
	nimfr("newLineInfo", "msgs.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(508, "msgs.nim");
	nimln(508, "msgs.nim");
	LOC1 = fileinfoidx_128506(filename);
	result = newlineinfo_128769(LOC1, line, col);
	popFrame();
	return result;
}

N_NIMCALL(tllstream159204*, filtertmpl_193005)(tllstream159204* stdin_193007, NimStringDesc* filename, tnode169647* call) {
	tllstream159204* result;
	ttmplparser193015 p;
	nimfr("filterTmpl", "filter_tmpl.nim")
	result = 0;
	memset((void*)&p, 0, sizeof(p));
	nimln(207, "filter_tmpl.nim");
	p.Info = newlineinfo_128777(filename, 0, 0);
	nimln(208, "filter_tmpl.nim");
	p.Outp = llstreamopen_159218(((NimStringDesc*) &TMP2530));
	nimln(209, "filter_tmpl.nim");
	p.Inp = stdin_193007;
	nimln(210, "filter_tmpl.nim");
	p.Subschar = chararg_192014(call, ((NimStringDesc*) &TMP2545), 1, 36);
	nimln(211, "filter_tmpl.nim");
	p.Nimdirective = chararg_192014(call, ((NimStringDesc*) &TMP2546), 2, 35);
	nimln(212, "filter_tmpl.nim");
	p.Emit = strarg_192021(call, ((NimStringDesc*) &TMP2547), 3, ((NimStringDesc*) &TMP2548));
	nimln(213, "filter_tmpl.nim");
	p.Conc = strarg_192021(call, ((NimStringDesc*) &TMP2549), 4, ((NimStringDesc*) &TMP2550));
	nimln(214, "filter_tmpl.nim");
	p.Tostr = strarg_192021(call, ((NimStringDesc*) &TMP2551), 5, ((NimStringDesc*) &TMP2543));
	nimln(215, "filter_tmpl.nim");
	nimln(215, "filter_tmpl.nim");
	p.X = rawNewString(120);
	nimln(216, "filter_tmpl.nim");
	while (1) {
		NIM_BOOL LOC2;
		NI TMP2552;
		nimln(216, "filter_tmpl.nim");
		LOC2 = llstreamreadline_159248(p.Inp, &p.X);
		if (!LOC2) goto LA1;
		nimln(217, "filter_tmpl.nim");
		nimln(217, "filter_tmpl.nim");
		TMP2552 = addInt(p.Info.Line, ((NI16) 1));
		if (TMP2552 < -32768 || TMP2552 > 32767) raiseOverflow();
		p.Info.Line = (NI16)(TMP2552);
		nimln(218, "filter_tmpl.nim");
		parseline_193151(&p);
	} LA1: ;
	nimln(219, "filter_tmpl.nim");
	newline_193038(&p);
	nimln(220, "filter_tmpl.nim");
	result = p.Outp;
	nimln(221, "filter_tmpl.nim");
	llstreamclose_159238(p.Inp);
	popFrame();
	return result;
}
N_NOINLINE(void, filter_tmplInit)(void) {
	nimfr("filter_tmpl", "filter_tmpl.nim")
	popFrame();
}

N_NOINLINE(void, filter_tmplDatInit)(void) {
}
