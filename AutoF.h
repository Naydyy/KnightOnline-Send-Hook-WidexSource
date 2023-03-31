static	void	MP_AddByte(BYTE *dest, int& iOffset, BYTE byte) { CopyMemory(dest+iOffset, &byte, 1); iOffset ++; }
static	void	MP_AddShort(BYTE *dest, int& iOffset, short value) { CopyMemory(dest+iOffset, &value, 2); iOffset += 2; }
static	void	MP_AddWord(BYTE *dest, int& offset, WORD value) { CopyMemory(dest+offset, &value, 2); offset += 2; }
static	void	MP_AddDword(BYTE *dest, int &iOffset, DWORD dword) { CopyMemory(dest+iOffset, &dword, 4); iOffset += 4; }
static	void	MP_AddFloat(BYTE *dest, int &iOffset, float value) { CopyMemory(dest+iOffset, &value, 4);	iOffset += 4; }
static	BYTE&	Parse_GetByte(const BYTE* buf, int &iOffset) { iOffset ++; return *(BYTE*)(buf+iOffset-1); }
static	short&	Parse_GetShort(const BYTE* buf, int& iOffset) { iOffset += 2; return *(short*)(buf+iOffset-2); }
static  WORD&	Parse_GetWord(const BYTE* buf, int &iOffset) { iOffset += 2; return *(PWORD)(buf+iOffset-2); }
static	DWORD&	Parse_GetDword(const BYTE* buf, int &iOffset) { iOffset += 4; return *(DWORD*)(buf+iOffset-4); }
