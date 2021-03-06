/* Generated by Nim Compiler v0.10.0 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, addescaped_388866)(NimStringDesc** result, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP4627, "&lt;", 4);
STRING_LITERAL(TMP4628, "&gt;", 4);
STRING_LITERAL(TMP4629, "&amp;", 5);
STRING_LITERAL(TMP4630, "&quot;", 6);
STRING_LITERAL(TMP4631, "&#x27;", 6);
STRING_LITERAL(TMP4632, "&#x2F;", 6);

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, addescaped_388866)(NimStringDesc** result, NimStringDesc* s) {
	{
		NIM_CHAR c_388871;
		NI i_388875;
		NI l_388877;
		c_388871 = 0;
		i_388875 = 0;
		l_388877 = s->Sup.len;
		{
			while (1) {
				if (!(i_388875 < l_388877)) goto LA3;
				c_388871 = s->data[i_388875];
				switch (((NU8)(c_388871))) {
				case 60:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4627));
				}
				break;
				case 62:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4628));
				}
				break;
				case 38:
				{
					(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TMP4629));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4630));
				}
				break;
				case 39:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4631));
				}
				break;
				case 47:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4632));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c_388871);
				}
				break;
				}
				i_388875 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NimStringDesc*, escape_388893)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(s->Sup.len);
	addescaped_388866(&result, s);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void) {
}

