#include <windows.h>

LPCWSTR strgen() {
	srand(GetTickCount());
	WCHAR string[32];
	for (int i = 0; i < 32; i++) {
		string[i] = (WCHAR)(rand() % 256) + 1;
	}
	return string;
}

//change 32 or 256 to any number (special thanks to getmbr)
//if you're pankoza, go away
