/* Generated by Nim Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <dirent.h>

#include <sys/types.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo194537 tlineinfo194537;
typedef struct tlinkedlist124040 tlinkedlist124040;
typedef struct tlistentry124034 tlistentry124034;
typedef struct stringtableobj127812 stringtableobj127812;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq127810 keyvaluepairseq127810;
typedef struct keyvaluepair127808 keyvaluepair127808;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo194537  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tlinkedlist124040  {
tlistentry124034* Head;
tlistentry124034* Tail;
NI Counter;
};
typedef NIM_CHAR TY102558[256];
typedef N_NIMCALL_PTR(void, TY2889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY2894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2889 marker;
TY2894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct keyvaluepair127808 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj127812  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq127810* Data;
NU8 Mode;
};
struct  tlistentry124034  {
  TNimObject Sup;
tlistentry124034* Prev;
tlistentry124034* Next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct keyvaluepairseq127810 {
  TGenericSeq Sup;
  keyvaluepair127808 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_124224)(tlinkedlist124040* list, NimStringDesc* data);
N_NIMCALL(void, prependstr_124424)(tlinkedlist124040* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_204282)(NimStringDesc* dir, tlineinfo194537 info);
N_NIMCALL(stringtableobj127812*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_114499)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, addpackage_204151)(stringtableobj127812* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_204026)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_73828, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_204074)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj127812* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(stringtableobj127812* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addbabelpath_204199)(NimStringDesc* p, tlineinfo194537 info);
N_NIMCALL(void, message_196962)(tlineinfo194537 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1263, ".", 1);
STRING_LITERAL(TMP1264, "..", 2);
STRING_LITERAL(TMP1265, "head", 4);
extern tlinkedlist124040 searchpaths_165122;
extern NI gverbosity_165127;
extern tlinkedlist124040 lazypaths_165123;

N_NIMCALL(void, addpath_204015)(NimStringDesc* path, tlineinfo194537 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_124224(&searchpaths_165122, path);
		if (!!(LOC3)) goto LA4;
		prependstr_124424(&searchpaths_165122, path);
	}
	LA4: ;
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

N_NIMCALL(NI, versionsplitpos_204026)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = (NI64)(s->Sup.len - 2);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (1 < result);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result -= 1;
		} LA2: ;
	}
	{
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA7;
		result = s->Sup.len;
	}
	LA7: ;
	return result;
}

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_204074)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1265))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i = 0;
	j = 0;
	vera = 0;
	verb = 0;
	{
		while (1) {
			NI ii;
			NI jj;
			ii = npuParseInt(a, &vera, i);
			jj = npuParseInt(b, &verb, j);
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = (ii <= 0);
				if (LOC9) goto LA10;
				LOC9 = (jj <= 0);
				LA10: ;
				if (!LOC9) goto LA11;
				result = (0 < jj);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera < verb)) goto LA15;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb < vera)) goto LA18;
				result = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i += ii;
			j += jj;
			{
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				i += 1;
			}
			LA22: ;
			{
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				j += 1;
			}
			LA26: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, addpackage_204151)(stringtableobj127812* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_204026(p);
	name = copyStrLast(p, 0, (NI64)(x - 1));
	{
		NimStringDesc* version;
		if (!(x < p->Sup.len)) goto LA3;
		version = copyStr(p, (NI64)(x + 1));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = nstGet(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_204074(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1265));
	}
	LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, addbabelpath_204199)(NimStringDesc* p, tlineinfo194537 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_124224(&searchpaths_165122, p);
		if (!!(LOC3)) goto LA4;
		{
			if (!(1 <= gverbosity_165127)) goto LA8;
			message_196962(info, ((NU16) 269), p);
		}
		LA8: ;
		prependstr_124424(&lazypaths_165123, p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_204282)(NimStringDesc* dir, tlineinfo194537 info) {
	stringtableobj127812* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI64)(dir->Sup.len - 1);
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += 1;
	}
	LA3: ;
	{
		NU8 k_204314;
		NimStringDesc* p_204315;
		DIR* d_204329;
		k_204314 = 0;
		p_204315 = 0;
		d_204329 = opendir(dir->data);
		{
			int LOC43;
			if (!!((d_204329 == NIM_NIL))) goto LA8;
			{
				while (1) {
					struct dirent* x_204331;
					NimStringDesc* y_204333;
					x_204331 = readdir(d_204329);
					{
						if (!(x_204331 == NIM_NIL)) goto LA14;
						goto LA10;
					}
					LA14: ;
					y_204333 = cstrToNimstr(((NCSTRING) ((*x_204331).d_name)));
					{
						NIM_BOOL LOC18;
						struct stat s_204335;
						NU8 k_204337;
						LOC18 = 0;
						LOC18 = !(eqStrings(y_204333, ((NimStringDesc*) &TMP1263)));
						if (!(LOC18)) goto LA19;
						LOC18 = !(eqStrings(y_204333, ((NimStringDesc*) &TMP1264)));
						LA19: ;
						if (!LOC18) goto LA20;
						memset((void*)&s_204335, 0, sizeof(s_204335));
						y_204333 = HEX2F_114499(dir, y_204333);
						{
							int LOC24;
							LOC24 = 0;
							LOC24 = lstat(y_204333->data, &s_204335);
							if (!(LOC24 < ((NI32) 0))) goto LA25;
							goto LA10;
						}
						LA25: ;
						k_204337 = ((NU8) 0);
						{
							NIM_BOOL LOC29;
							LOC29 = 0;
							LOC29 = S_ISDIR(s_204335.st_mode);
							if (!LOC29) goto LA30;
							k_204337 = ((NU8) 2);
						}
						LA30: ;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = S_ISLNK(s_204335.st_mode);
							if (!LOC34) goto LA35;
							k_204337 = (k_204337 + 1);
						}
						LA35: ;
						k_204314 = k_204337;
						p_204315 = y_204333;
						{
							NIM_BOOL LOC39;
							LOC39 = 0;
							LOC39 = (k_204314 == ((NU8) 2));
							if (!(LOC39)) goto LA40;
							LOC39 = !(((NU8)(p_204315->data[pos]) == (NU8)(46)));
							LA40: ;
							if (!LOC39) goto LA41;
							addpackage_204151(packages, p_204315);
						}
						LA41: ;
					}
					LA20: ;
				}
			} LA10: ;
			LOC43 = 0;
			LOC43 = closedir(d_204329);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_204325;
		p_204325 = 0;
		{
			NimStringDesc* key_204343;
			NimStringDesc* val_204345;
			key_204343 = 0;
			val_204345 = 0;
			{
				NI h_204347;
				NI HEX3Atmp_204349;
				NI res_204351;
				h_204347 = 0;
				HEX3Atmp_204349 = 0;
				HEX3Atmp_204349 = ((*packages).Data->Sup.len-1);
				res_204351 = 0;
				{
					while (1) {
						if (!(res_204351 <= HEX3Atmp_204349)) goto LA48;
						h_204347 = res_204351;
						{
							NimStringDesc* res_204353;
							if (!!((*packages).Data->data[h_204347].Field0 == 0)) goto LA51;
							key_204343 = (*packages).Data->data[h_204347].Field0;
							val_204345 = (*packages).Data->data[h_204347].Field1;
							{
								if (!eqStrings(val_204345, ((NimStringDesc*) &TMP1265))) goto LA55;
								res_204353 = key_204343;
							}
							goto LA53;
							LA55: ;
							{
								NimStringDesc* LOC58;
								LOC58 = 0;
								LOC58 = rawNewString(key_204343->Sup.len + val_204345->Sup.len + 1);
appendString(LOC58, key_204343);
appendChar(LOC58, 45);
appendString(LOC58, val_204345);
								res_204353 = LOC58;
							}
							LA53: ;
							p_204325 = res_204353;
							addbabelpath_204199(p_204325, info);
						}
						LA51: ;
						res_204351 += 1;
					} LA48: ;
				}
			}
		}
	}
}

N_NIMCALL(void, babelpath_204384)(NimStringDesc* path, tlineinfo194537 info) {
	addpathrec_204282(path, info);
	addbabelpath_204199(path, info);
}
N_NOINLINE(void, HEX00_babelcmdInit)(void) {
}

N_NOINLINE(void, HEX00_babelcmdDatInit)(void) {
}

