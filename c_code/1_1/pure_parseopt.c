/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct toptparser418607 toptparser418607;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct toptparser418607 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
typedef NU8 TY114118[32];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initoptparser_418619)(NimStringDesc* cmdline, toptparser418607* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, nosparamCount)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_86662)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nosparamStr)(NI i);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, parseword_418802)(NimStringDesc* s, NI i, NimStringDesc** w, TY114118 delim);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, handleshortoption_418876)(toptparser418607* p);
N_NIMCALL(void, nponext)(toptparser418607* p);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser418607* p);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_67623, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
STRING_LITERAL(TMP7024, "", 0);
STRING_LITERAL(TMP7027, "", 0);
static NIM_CONST TY114118 TMP7028 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY114118 TMP7029 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TFrame* frameptr_12037;
extern TNimType NTI1009; /* TObject */
TNimType NTI418607; /* TOptParser */
extern TNimType NTI142; /* string */
extern TNimType NTI105; /* int */
extern TNimType NTI133; /* bool */
TNimType NTI418605; /* TCmdLineKind */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
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
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, initoptparser_418619)(NimStringDesc* cmdline, toptparser418607* Result) {
	nimfr("initOptParser", "parseopt.nim")
	nimln(47, "parseopt.nim");
	(*Result).Pos = 0;
	nimln(48, "parseopt.nim");
	(*Result).Inshortstate = NIM_FALSE;
	nimln(49, "parseopt.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		nimln(50, "parseopt.nim");
		unsureAsgnRef((void**) &(*Result).Cmd, copyString(cmdline));
	}	goto LA1;
	LA3: ;
	{
		NI i_418632;
		NI HEX3Atmp_418634;
		NI res_418636;
		nimln(52, "parseopt.nim");
		unsureAsgnRef((void**) &(*Result).Cmd, copyString(((NimStringDesc*) &TMP7024)));
		i_418632 = 0;
		HEX3Atmp_418634 = 0;
		nimln(53, "parseopt.nim");
		HEX3Atmp_418634 = nosparamCount();
		nimln(1301, "system.nim");
		res_418636 = 1;
		nimln(1302, "system.nim");
		while (1) {
			NimStringDesc* LOC7;
			NimStringDesc* LOC8;
			NimStringDesc* LOC9;
			nimln(1302, "system.nim");
			if (!(res_418636 <= HEX3Atmp_418634)) goto LA6;
			nimln(1301, "system.nim");
			i_418632 = res_418636;
			nimln(54, "parseopt.nim");
			nimln(54, "parseopt.nim");
			LOC7 = 0;
			nimln(54, "parseopt.nim");
			nimln(54, "parseopt.nim");
			LOC8 = 0;
			LOC8 = nosparamStr(i_418632);
			LOC9 = 0;
			LOC9 = quoteifcontainswhite_86662(LOC8);
			LOC7 = rawNewString((*Result).Cmd->Sup.len + LOC9->Sup.len + 1);
appendString(LOC7, (*Result).Cmd);
appendString(LOC7, LOC9);
appendChar(LOC7, 32);
			unsureAsgnRef((void**) &(*Result).Cmd, LOC7);
			nimln(1304, "system.nim");
			res_418636 = addInt(res_418636, 1);
		} LA6: ;
	}	LA1: ;
	nimln(55, "parseopt.nim");
	(*Result).Kind = ((NU8) 0);
	nimln(56, "parseopt.nim");
	unsureAsgnRef((void**) &(*Result).Key, copyString(((NimStringDesc*) &TMP7027)));
	nimln(57, "parseopt.nim");
	unsureAsgnRef((void**) &(*Result).Val, copyString(((NimStringDesc*) &TMP7027)));
	popFrame();
}
N_NIMCALL(NI, parseword_418802)(NimStringDesc* s, NI i, NimStringDesc** w, TY114118 delim) {
	NI result;
	nimfr("parseWord", "parseopt.nim")
	result = 0;
	nimln(61, "parseopt.nim");
	result = i;
	nimln(62, "parseopt.nim");
	{
		nimln(62, "parseopt.nim");
		if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		nimln(63, "parseopt.nim");
		result = addInt(result, 1);
		nimln(64, "parseopt.nim");
		while (1) {
			nimln(64, "parseopt.nim");
			nimln(730, "system.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA5;
			nimln(65, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			(*w) = addChar((*w), s->data[result]);
			nimln(66, "parseopt.nim");
			result = addInt(result, 1);
		} LA5: ;
		nimln(67, "parseopt.nim");
		{
			nimln(67, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA8;
			nimln(67, "parseopt.nim");
			result = addInt(result, 1);
		}		LA8: ;
	}	goto LA1;
	LA3: ;
	{
		nimln(69, "parseopt.nim");
		while (1) {
			nimln(69, "parseopt.nim");
			nimln(730, "system.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			if (!!(((delim[((NU8)(s->data[result]))/8] &(1<<(((NU8)(s->data[result]))%8)))!=0))) goto LA11;
			nimln(70, "parseopt.nim");
			if ((NU)(result) > (NU)(s->Sup.len)) raiseIndexError();
			(*w) = addChar((*w), s->data[result]);
			nimln(71, "parseopt.nim");
			result = addInt(result, 1);
		} LA11: ;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, handleshortoption_418876)(toptparser418607* p) {
	NI i;
	nimfr("handleShortOption", "parseopt.nim")
	nimln(74, "parseopt.nim");
	i = (*p).Pos;
	nimln(75, "parseopt.nim");
	(*p).Kind = ((NU8) 3);
	nimln(76, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
	(*p).Key = addChar((*p).Key, (*p).Cmd->data[i]);
	nimln(77, "parseopt.nim");
	i = addInt(i, 1);
	nimln(78, "parseopt.nim");
	(*p).Inshortstate = NIM_TRUE;
	nimln(79, "parseopt.nim");
	while (1) {
		nimln(730, "system.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA1;
		nimln(80, "parseopt.nim");
		i = addInt(i, 1);
		nimln(81, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
	} LA1: ;
	nimln(82, "parseopt.nim");
	{
		nimln(730, "system.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(61)))) goto LA4;
		nimln(83, "parseopt.nim");
		i = addInt(i, 1);
		nimln(84, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
		nimln(85, "parseopt.nim");
		while (1) {
			nimln(730, "system.nim");
			if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
			if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA6;
			nimln(85, "parseopt.nim");
			i = addInt(i, 1);
		} LA6: ;
		nimln(86, "parseopt.nim");
		i = parseword_418802((*p).Cmd, i, &(*p).Val, TMP7028);
	}	LA4: ;
	nimln(87, "parseopt.nim");
	{
		nimln(87, "parseopt.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!((NU8)((*p).Cmd->data[i]) == (NU8)(0))) goto LA9;
		nimln(87, "parseopt.nim");
		(*p).Inshortstate = NIM_FALSE;
	}	LA9: ;
	nimln(88, "parseopt.nim");
	(*p).Pos = i;
	popFrame();
}
N_NIMCALL(void, nponext)(toptparser418607* p) {
	NI i;
	nimfr("next", "parseopt.nim")
	nimln(94, "parseopt.nim");
	i = (*p).Pos;
	nimln(95, "parseopt.nim");
	while (1) {
		nimln(730, "system.nim");
		if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA1;
		nimln(95, "parseopt.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(96, "parseopt.nim");
	(*p).Pos = i;
	nimln(97, "parseopt.nim");
	(*p).Key = setLengthStr((*p).Key, 0);
	nimln(98, "parseopt.nim");
	(*p).Val = setLengthStr((*p).Val, 0);
	nimln(99, "parseopt.nim");
	{
		if (!(*p).Inshortstate) goto LA4;
		nimln(100, "parseopt.nim");
		handleshortoption_418876(p);		nimln(101, "parseopt.nim");
		goto BeforeRet;
	}	LA4: ;
	nimln(102, "parseopt.nim");
	if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
	switch (((NU8)((*p).Cmd->data[i]))) {
	case 0:
	{
		nimln(104, "parseopt.nim");
		(*p).Kind = ((NU8) 0);
	}	break;
	case 45:
	{
		nimln(106, "parseopt.nim");
		i = addInt(i, 1);
		nimln(107, "parseopt.nim");
		{
			nimln(107, "parseopt.nim");
			if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
			if (!((NU8)((*p).Cmd->data[i]) == (NU8)(45))) goto LA10;
			nimln(108, "parseopt.nim");
			(*p).Kind = ((NU8) 2);
			nimln(109, "parseopt.nim");
			i = addInt(i, 1);
			nimln(110, "parseopt.nim");
			i = parseword_418802((*p).Cmd, i, &(*p).Key, TMP7029);
			nimln(111, "parseopt.nim");
			while (1) {
				nimln(730, "system.nim");
				if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA12;
				nimln(111, "parseopt.nim");
				i = addInt(i, 1);
			} LA12: ;
			nimln(112, "parseopt.nim");
			{
				nimln(730, "system.nim");
				if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
				if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(61)))) goto LA15;
				nimln(113, "parseopt.nim");
				i = addInt(i, 1);
				nimln(114, "parseopt.nim");
				while (1) {
					nimln(730, "system.nim");
					if ((NU)(i) > (NU)((*p).Cmd->Sup.len)) raiseIndexError();
					if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA17;
					nimln(114, "parseopt.nim");
					i = addInt(i, 1);
				} LA17: ;
				nimln(115, "parseopt.nim");
				(*p).Pos = parseword_418802((*p).Cmd, i, &(*p).Val, TMP7028);
			}			goto LA13;
			LA15: ;
			{
				nimln(117, "parseopt.nim");
				(*p).Pos = i;
			}			LA13: ;
		}		goto LA8;
		LA10: ;
		{
			nimln(119, "parseopt.nim");
			(*p).Pos = i;
			nimln(120, "parseopt.nim");
			handleshortoption_418876(p);		}		LA8: ;
	}	break;
	default:
	{
		nimln(122, "parseopt.nim");
		(*p).Kind = ((NU8) 1);
		nimln(123, "parseopt.nim");
		(*p).Pos = parseword_418802((*p).Cmd, i, &(*p).Key, TMP7028);
	}	break;
	}
	BeforeRet: ;	popFrame();
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser418607* p) {
	NimStringDesc* result;
	NI TMP7030;
	NimStringDesc* LOC1;
	nimfr("cmdLineRest", "parseopt.nim")
	result = 0;
	nimln(128, "parseopt.nim");
	nimln(128, "parseopt.nim");
	nimln(128, "parseopt.nim");
	nimln(128, "parseopt.nim");
	nimln(128, "parseopt.nim");
	TMP7030 = subInt((*p).Cmd->Sup.len, 1);
	LOC1 = 0;
	LOC1 = copyStrLast((*p).Cmd, (*p).Pos, (NI32)(TMP7030));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	popFrame();
	return result;
}N_NOINLINE(void, pureparseoptInit)(void) {
	nimfr("parseopt", "parseopt.nim")
	popFrame();
}

N_NOINLINE(void, pureparseoptDatInit)(void) {
static TNimNode* TMP7032[6];
static TNimNode* TMP7033[4];
NI TMP7035;
static char* NIM_CONST TMP7034[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongoption", 
"cmdShortOption"};
static TNimNode TMP7022[12];
NTI418607.size = sizeof(toptparser418607);
NTI418607.kind = 17;
NTI418607.base = (&NTI1009);
NTI418607.flags = 2;
TMP7032[0] = &TMP7022[1];
TMP7022[1].kind = 1;
TMP7022[1].offset = offsetof(toptparser418607, Cmd);
TMP7022[1].typ = (&NTI142);
TMP7022[1].name = "cmd";
TMP7032[1] = &TMP7022[2];
TMP7022[2].kind = 1;
TMP7022[2].offset = offsetof(toptparser418607, Pos);
TMP7022[2].typ = (&NTI105);
TMP7022[2].name = "pos";
TMP7032[2] = &TMP7022[3];
TMP7022[3].kind = 1;
TMP7022[3].offset = offsetof(toptparser418607, Inshortstate);
TMP7022[3].typ = (&NTI133);
TMP7022[3].name = "inShortState";
TMP7032[3] = &TMP7022[4];
NTI418605.size = sizeof(NU8);
NTI418605.kind = 14;
NTI418605.base = 0;
NTI418605.flags = 3;
for (TMP7035 = 0; TMP7035 < 4; TMP7035++) {
TMP7022[TMP7035+5].kind = 1;
TMP7022[TMP7035+5].offset = TMP7035;
TMP7022[TMP7035+5].name = TMP7034[TMP7035];
TMP7033[TMP7035] = &TMP7022[TMP7035+5];
}
TMP7022[9].len = 4; TMP7022[9].kind = 2; TMP7022[9].sons = &TMP7033[0];
NTI418605.node = &TMP7022[9];
TMP7022[4].kind = 1;
TMP7022[4].offset = offsetof(toptparser418607, Kind);
TMP7022[4].typ = (&NTI418605);
TMP7022[4].name = "kind";
TMP7032[4] = &TMP7022[10];
TMP7022[10].kind = 1;
TMP7022[10].offset = offsetof(toptparser418607, Key);
TMP7022[10].typ = (&NTI142);
TMP7022[10].name = "key";
TMP7032[5] = &TMP7022[11];
TMP7022[11].kind = 1;
TMP7022[11].offset = offsetof(toptparser418607, Val);
TMP7022[11].typ = (&NTI142);
TMP7022[11].name = "val";
TMP7022[0].len = 6; TMP7022[0].kind = 2; TMP7022[0].sons = &TMP7032[0];
NTI418607.node = &TMP7022[0];
}

