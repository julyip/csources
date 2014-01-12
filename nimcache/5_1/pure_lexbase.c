/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tbaselexer291016 tbaselexer291016;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tstream143629 tstream143629;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY113118[32];
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
struct tbaselexer291016 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tstream143629* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY143630) (tstream143629* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY143634) (tstream143629* s);
typedef N_NIMCALL_PTR(void, TY143638) (tstream143629* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY143643) (tstream143629* s);
typedef N_NIMCALL_PTR(NI, TY143647) (tstream143629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY143653) (tstream143629* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY143659) (tstream143629* s);
struct tstream143629 {
  TNimObject Sup;
TY143630 Closeimpl;
TY143634 Atendimpl;
TY143638 Setpositionimpl;
TY143643 Getpositionimpl;
TY143647 Readdataimpl;
TY143653 Writedataimpl;
TY143659 Flushimpl;
};
N_NIMCALL(void, close_291034)(tbaselexer291016* l);
N_NOCONV(void, dealloc_4011)(void* p);
N_NIMCALL(void, close_143675)(tstream143629* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_291071)(tbaselexer291016* l);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, readdata_143731)(tstream143629* s, void* buffer, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4007)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_291812)(tbaselexer291016* l, NI pos);
N_NIMCALL(NI, handlecr_291049)(tbaselexer291016* l, NI pos);
N_NIMCALL(NI, handlelf_291055)(tbaselexer291016* l, NI pos);
N_NIMCALL(void, skiputf8bom_292413)(tbaselexer291016* l);
N_NIMCALL(void, open_291026)(tbaselexer291016* l, tstream143629* input, NI buflen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_4001)(NI size);
N_NIMCALL(NI, getcolnumber_291044)(tbaselexer291016* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_291039)(tbaselexer291016* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY113118 newlines_291011 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP4633, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP4636, "0 <= toCopy ", 12);
STRING_LITERAL(TMP4644, "s < L.bufLen ", 13);
STRING_LITERAL(TMP4648, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP4654, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP4656, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP4657, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP4658, "0 < bufLen ", 11);
STRING_LITERAL(TMP4659, "not (input == nil) ", 19);
STRING_LITERAL(TMP4663, "", 0);
STRING_LITERAL(TMP4664, "\012", 1);
STRING_LITERAL(TMP4665, "^\012", 2);
extern TFrame* frameptr_12037;
extern TNimType NTI1009; /* TObject */
TNimType NTI291016; /* TBaseLexer */
extern TNimType NTI105; /* int */
extern TNimType NTI144; /* cstring */
extern TNimType NTI143627; /* PStream */
extern TNimType NTI133; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, close_291034)(tbaselexer291016* l) {
	nimfr("close", "lexbase.nim")
	nimln(66, "lexbase.nim");
	dealloc_4011(((void*) ((*l).Buf)));	nimln(67, "lexbase.nim");
	close_143675((*l).Input);	popFrame();
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
static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(void, fillbuffer_291071)(tbaselexer291016* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP4634;
	NI TMP4635;
	NI TMP4639;
	NI TMP4640;
	NI LOC13;
	NI TMP4641;
	NI TMP4642;
	nimfr("FillBuffer", "lexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(77, "lexbase.nim");
	{
		nimln(77, "lexbase.nim");
		nimln(77, "lexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(77, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4633));	}	LA3: ;
	nimln(78, "lexbase.nim");
	nimln(78, "lexbase.nim");
	nimln(78, "lexbase.nim");
	TMP4634 = subInt((*l).Buflen, (*l).Sentinel);
	TMP4635 = subInt((NI32)(TMP4634), 1);
	tocopy = (NI32)(TMP4635);
	nimln(79, "lexbase.nim");
	{
		nimln(79, "lexbase.nim");
		nimln(79, "lexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(79, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4636));	}	LA7: ;
	nimln(80, "lexbase.nim");
	{
		NI TMP4637;
		NI TMP4638;
		nimln(706, "system.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(81, "lexbase.nim");
		nimln(81, "lexbase.nim");
		TMP4637 = addInt((*l).Sentinel, 1);
		nimln(81, "lexbase.nim");
		TMP4638 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI32)(TMP4637)])), (NI32)(TMP4638));	}	LA11: ;
	nimln(83, "lexbase.nim");
	nimln(84, "lexbase.nim");
	nimln(83, "lexbase.nim");
	nimln(84, "lexbase.nim");
	nimln(84, "lexbase.nim");
	TMP4639 = addInt((*l).Sentinel, 1);
	TMP4640 = mulInt((NI32)(TMP4639), 1);
	LOC13 = 0;
	LOC13 = readdata_143731((*l).Input, ((void*) (&(*l).Buf[tocopy])), (NI32)(TMP4640));
	TMP4641 = divInt(LOC13, 1);
	charsread = (NI32)(TMP4641);
	nimln(85, "lexbase.nim");
	nimln(85, "lexbase.nim");
	TMP4642 = addInt(tocopy, charsread);
	s = (NI32)(TMP4642);
	nimln(86, "lexbase.nim");
	{
		NI TMP4643;
		nimln(86, "lexbase.nim");
		nimln(86, "lexbase.nim");
		TMP4643 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI32)(TMP4643))) goto LA16;
		nimln(87, "lexbase.nim");
		(*l).Buf[s] = 0;
		nimln(88, "lexbase.nim");
		(*l).Sentinel = s;
	}	goto LA14;
	LA16: ;
	{
		nimln(91, "lexbase.nim");
		s = subInt(s, 1);
		nimln(92, "lexbase.nim");
		while (1) {
			nimln(93, "lexbase.nim");
			{
				nimln(93, "lexbase.nim");
				nimln(93, "lexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(93, "lexbase.nim");
				hiddenraiseassert_76017(((NimStringDesc*) &TMP4644));			}			LA22: ;
			nimln(94, "lexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(94, "lexbase.nim");
				LOC25 = 0;
				nimln(702, "system.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(94, "lexbase.nim");
				nimln(730, "system.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(94, "lexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(95, "lexbase.nim");
			{
				nimln(702, "system.nim");
				if (!(0 <= s)) goto LA29;
				nimln(97, "lexbase.nim");
				(*l).Sentinel = s;
				nimln(98, "lexbase.nim");
				goto LA19;
			}			goto LA27;
			LA29: ;
			{
				NI TMP4645;
				NI TMP4646;
				void* LOC32;
				NI TMP4649;
				NI LOC37;
				NI TMP4650;
				NI TMP4653;
				nimln(102, "lexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(103, "lexbase.nim");
				nimln(103, "lexbase.nim");
				TMP4645 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI32)(TMP4645);
				nimln(104, "lexbase.nim");
				nimln(104, "lexbase.nim");
				nimln(104, "lexbase.nim");
				TMP4646 = mulInt((*l).Buflen, 1);
				LOC32 = 0;
				LOC32 = realloc_4007(((void*) ((*l).Buf)), (NI32)(TMP4646));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(105, "lexbase.nim");
				{
					NI TMP4647;
					nimln(105, "lexbase.nim");
					nimln(105, "lexbase.nim");
					nimln(105, "lexbase.nim");
					TMP4647 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI32)(TMP4647) == oldbuflen))) goto LA35;
					nimln(105, "lexbase.nim");
					hiddenraiseassert_76017(((NimStringDesc*) &TMP4648));				}				LA35: ;
				nimln(106, "lexbase.nim");
				nimln(107, "lexbase.nim");
				nimln(106, "lexbase.nim");
				nimln(107, "lexbase.nim");
				TMP4649 = mulInt(oldbuflen, 1);
				LOC37 = 0;
				LOC37 = readdata_143731((*l).Input, ((void*) (&(*l).Buf[oldbuflen])), (NI32)(TMP4649));
				TMP4650 = divInt(LOC37, 1);
				charsread = (NI32)(TMP4650);
				nimln(108, "lexbase.nim");
				{
					NI TMP4651;
					NI TMP4652;
					nimln(108, "lexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(109, "lexbase.nim");
					nimln(109, "lexbase.nim");
					TMP4651 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI32)(TMP4651)] = 0;
					nimln(110, "lexbase.nim");
					nimln(110, "lexbase.nim");
					TMP4652 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI32)(TMP4652);
					nimln(111, "lexbase.nim");
					goto LA19;
				}				LA40: ;
				nimln(112, "lexbase.nim");
				nimln(112, "lexbase.nim");
				TMP4653 = subInt((*l).Buflen, 1);
				s = (NI32)(TMP4653);
			}			LA27: ;
		} LA19: ;
	}	LA14: ;
	popFrame();
}
N_NIMCALL(NI, fillbaselexer_291812)(tbaselexer291016* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "lexbase.nim")
	result = 0;
	nimln(115, "lexbase.nim");
	{
		nimln(115, "lexbase.nim");
		nimln(115, "lexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(115, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4654));	}	LA3: ;
	nimln(116, "lexbase.nim");
	{
		NI TMP4655;
		nimln(116, "lexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(117, "lexbase.nim");
		nimln(117, "lexbase.nim");
		TMP4655 = addInt(pos, 1);
		result = (NI32)(TMP4655);
	}	goto LA5;
	LA7: ;
	{
		nimln(119, "lexbase.nim");
		fillbuffer_291071(l);		nimln(120, "lexbase.nim");
		(*l).Bufpos = 0;
		nimln(121, "lexbase.nim");
		result = 0;
	}	LA5: ;
	nimln(122, "lexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}
N_NIMCALL(NI, handlecr_291049)(tbaselexer291016* l, NI pos) {
	NI result;
	nimfr("HandleCR", "lexbase.nim")
	result = 0;
	nimln(125, "lexbase.nim");
	{
		nimln(125, "lexbase.nim");
		nimln(125, "lexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(125, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4656));	}	LA3: ;
	nimln(126, "lexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(127, "lexbase.nim");
	result = fillbaselexer_291812(l, pos);
	nimln(128, "lexbase.nim");
	{
		nimln(128, "lexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(129, "lexbase.nim");
		result = fillbaselexer_291812(l, result);
	}	LA7: ;
	popFrame();
	return result;
}
N_NIMCALL(NI, handlelf_291055)(tbaselexer291016* l, NI pos) {
	NI result;
	nimfr("HandleLF", "lexbase.nim")
	result = 0;
	nimln(132, "lexbase.nim");
	{
		nimln(132, "lexbase.nim");
		nimln(132, "lexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(132, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4657));	}	LA3: ;
	nimln(133, "lexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(134, "lexbase.nim");
	result = fillbaselexer_291812(l, pos);
	popFrame();
	return result;
}
N_NIMCALL(void, skiputf8bom_292413)(tbaselexer291016* l) {
	nimfr("skip_UTF_8_BOM", "lexbase.nim")
	nimln(137, "lexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(137, "lexbase.nim");
		LOC3 = 0;
		nimln(137, "lexbase.nim");
		LOC4 = 0;
		nimln(137, "lexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(137, "lexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(137, "lexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(138, "lexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(139, "lexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}	LA7: ;
	popFrame();
}
N_NIMCALL(void, open_291026)(tbaselexer291016* l, tstream143629* input, NI buflen) {
	NI TMP4660;
	void* LOC9;
	NI TMP4661;
	nimfr("open", "lexbase.nim")
	nimln(142, "lexbase.nim");
	{
		nimln(142, "lexbase.nim");
		nimln(142, "lexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(142, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4658));	}	LA3: ;
	nimln(143, "lexbase.nim");
	{
		nimln(143, "lexbase.nim");
		nimln(143, "lexbase.nim");
		nimln(143, "lexbase.nim");
		if (!!(!((input == NIM_NIL)))) goto LA7;
		nimln(143, "lexbase.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4659));	}	LA7: ;
	nimln(144, "lexbase.nim");
	unsureAsgnRef((void**) &(*l).Input, input);
	nimln(145, "lexbase.nim");
	(*l).Bufpos = 0;
	nimln(146, "lexbase.nim");
	(*l).Buflen = buflen;
	nimln(147, "lexbase.nim");
	nimln(147, "lexbase.nim");
	nimln(147, "lexbase.nim");
	TMP4660 = mulInt(buflen, 1);
	LOC9 = 0;
	LOC9 = alloc_4001((NI32)(TMP4660));
	(*l).Buf = ((NCSTRING) (LOC9));
	nimln(148, "lexbase.nim");
	nimln(148, "lexbase.nim");
	TMP4661 = subInt(buflen, 1);
	(*l).Sentinel = (NI32)(TMP4661);
	nimln(149, "lexbase.nim");
	(*l).Linestart = 0;
	nimln(150, "lexbase.nim");
	(*l).Linenumber = 1;
	nimln(151, "lexbase.nim");
	fillbuffer_291071(l);	nimln(152, "lexbase.nim");
	skiputf8bom_292413(l);	popFrame();
}
N_NIMCALL(NI, getcolnumber_291044)(tbaselexer291016* l, NI pos) {
	NI result;
	NI TMP4662;
	nimfr("getColNumber", "lexbase.nim")
	result = 0;
	nimln(155, "lexbase.nim");
	nimln(155, "lexbase.nim");
	nimln(155, "lexbase.nim");
	TMP4662 = subInt(pos, (*l).Linestart);
	if ((NI32)(TMP4662) == (-2147483647 -1)) raiseOverflow();
	result = (NI32)abs((NI32)(TMP4662));
	popFrame();
	return result;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(NimStringDesc*, getcurrentline_291039)(tbaselexer291016* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "lexbase.nim")
	result = 0;
	i = 0;
	nimln(159, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TMP4663));
	nimln(160, "lexbase.nim");
	i = (*l).Linestart;
	nimln(161, "lexbase.nim");
	while (1) {
		nimln(161, "lexbase.nim");
		nimln(730, "system.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(162, "lexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(163, "lexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(164, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP4664));
	nimln(165, "lexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(166, "lexbase.nim");
		nimln(166, "lexbase.nim");
		LOC6 = 0;
		nimln(166, "lexbase.nim");
		nimln(166, "lexbase.nim");
		LOC7 = 0;
		LOC7 = getcolnumber_291044(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 2);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP4665));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}	LA4: ;
	popFrame();
	return result;
}N_NOINLINE(void, purelexbaseInit)(void) {
	nimfr("lexbase", "lexbase.nim")
	popFrame();
}

N_NOINLINE(void, purelexbaseDatInit)(void) {
static TNimNode* TMP4772[8];
static TNimNode TMP4631[9];
NTI291016.size = sizeof(tbaselexer291016);
NTI291016.kind = 17;
NTI291016.base = (&NTI1009);
NTI291016.flags = 2;
TMP4772[0] = &TMP4631[1];
TMP4631[1].kind = 1;
TMP4631[1].offset = offsetof(tbaselexer291016, Bufpos);
TMP4631[1].typ = (&NTI105);
TMP4631[1].name = "bufpos";
TMP4772[1] = &TMP4631[2];
TMP4631[2].kind = 1;
TMP4631[2].offset = offsetof(tbaselexer291016, Buf);
TMP4631[2].typ = (&NTI144);
TMP4631[2].name = "buf";
TMP4772[2] = &TMP4631[3];
TMP4631[3].kind = 1;
TMP4631[3].offset = offsetof(tbaselexer291016, Buflen);
TMP4631[3].typ = (&NTI105);
TMP4631[3].name = "bufLen";
TMP4772[3] = &TMP4631[4];
TMP4631[4].kind = 1;
TMP4631[4].offset = offsetof(tbaselexer291016, Input);
TMP4631[4].typ = (&NTI143627);
TMP4631[4].name = "input";
TMP4772[4] = &TMP4631[5];
TMP4631[5].kind = 1;
TMP4631[5].offset = offsetof(tbaselexer291016, Linenumber);
TMP4631[5].typ = (&NTI105);
TMP4631[5].name = "LineNumber";
TMP4772[5] = &TMP4631[6];
TMP4631[6].kind = 1;
TMP4631[6].offset = offsetof(tbaselexer291016, Sentinel);
TMP4631[6].typ = (&NTI105);
TMP4631[6].name = "sentinel";
TMP4772[6] = &TMP4631[7];
TMP4631[7].kind = 1;
TMP4631[7].offset = offsetof(tbaselexer291016, Linestart);
TMP4631[7].typ = (&NTI105);
TMP4631[7].name = "lineStart";
TMP4772[7] = &TMP4631[8];
TMP4631[8].kind = 1;
TMP4631[8].offset = offsetof(tbaselexer291016, Fileopened);
TMP4631[8].typ = (&NTI133);
TMP4631[8].name = "fileOpened";
TMP4631[0].len = 8; TMP4631[0].kind = 2; TMP4631[0].sons = &TMP4772[0];
NTI291016.node = &TMP4631[0];
}
