#ifndef _CSTRING_H
#define _CSTRING_H

#include <iostream>

using namespace std;

class CString
{
	int size;
	char *ptr;
	static int nbstring;
	public:
		CString();
		CString(const char* s);
		CString(const char c);
		CString(CString &cs);
		~CString();
	bool plusGrandQue(CString &cs);
	CString& plusGrand(CString &cs);
	bool infOuEgale(CString &cs);
	CString& plus(char c);
	int getSize();
	static int getNbString();
	char* getString();
	CString& operator=(CString &cs);
	CString& operator+(char c);
	char& operator[](unsigned int i);
	friend ostream& operator<<(ostream &flux, CString const& ch);
};
#endif
