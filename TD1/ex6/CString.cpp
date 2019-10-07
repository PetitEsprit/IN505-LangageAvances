#include "CString.hpp"
#include <string.h>
#include <stdlib.h>
#include <iostream>

int CString::nbstring = 0;

CString::CString() : size(0), ptr(nullptr) {CString::nbstring++;}
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
	int len = this->getSize() + 1;
	char buf[len+1];
	strcpy(buf, this->getString());
	buf[len-1] = c; buf[len] = '\0';
	return *(new CString(buf));
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
