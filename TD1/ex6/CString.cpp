#include "CString.hpp"
#include <string.h>
#include <stdlib.h>
#include <iostream>


int CString::nbstring = 0;

CString::CString() : size(0)
{
	CString::nbstring++;
	ptr = (char*)malloc(1);
	ptr[0] = '\0';
}
CString::CString(char c) : size(1)
{
	CString::nbstring++;
	ptr = (char*)malloc(2);
	ptr[0] = c; ptr[1] = '\0';
}

CString::CString(const char* s)
{
	CString::nbstring++;
	int len = strlen(s);
	size = len;
	ptr = (char*)malloc(len+1);
	strcpy(ptr, s);
	ptr[len] = '\0';
}

CString::CString(CString &cs)
{
	CString::nbstring++;
	size = cs.getSize();
	ptr = cs.getString();
}

CString::~CString()
{
	CString::nbstring--;
	free(ptr);
	std::cout << "Destruction de CString\n";
}

bool CString::plusGrandQue(CString &cs)
{
	return strcmp(ptr,cs.getString()) > 0 ? true : false;
}

CString& CString::plusGrand(CString &cs)
{
	if(this->getSize() > cs.getSize()) return *this;
	else return cs;
}

bool CString::infOuEgale(CString &cs)
{
	return strcmp(ptr,cs.getString()) <= 0 ? true : false;
}

CString& CString::plus(char c)
{
	size++;
	int len = size + 1;
	ptr = (char*)realloc(ptr, len);
	ptr[size-1] = c; ptr[size] = '\0';
	return *this;
}

CString& CString::operator=(CString &cs)
{
	if(this != &cs)
	{
		free(ptr);
		size = cs.getSize();
		ptr = (char*)malloc(size+1);
		strcpy(ptr, cs.getString());
		ptr[size] = '\0';
	}
	return *this;
}

CString& CString::operator+(char c)
{
	return CString::plus(c);
}

char& CString::operator[](unsigned int i)
{
	int ii = (i < size) ? i : size;
	return ptr[ii];
}

ostream& operator<<(ostream &flux, CString const& ch)
{
	flux << ch.ptr <<endl;
	return flux;
}

int CString::getSize() { return size;}
int CString::getNbString() {return CString::nbstring;}
char* CString::getString()
{
	char *buf = (char*)malloc(size+1);
	strcpy(buf, ptr);
	buf[size] = '\0'; 
	return buf;
}
