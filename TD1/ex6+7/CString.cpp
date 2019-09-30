#include <iostream>

using namespace std;

class CString
{
	public:
		string *s;
		CString(){s = new string();}
		CString(const char* str){s = new string(str);}
		CString(const char c)
		{
			char tmp[1]; tmp[0]= c;
			s = new string(tmp);
		}
		CString& plus(const char c){s += c;}
		bool plusGrandQue(CString s2)
		{
			if(s->compare(s2.getString()) < 0) return true;
			else return false;
		}
		bool infOuEgale(CString s2)
		{
			if(s->compare(s2.getString()) >= 0) return true;
			else return false;
		}
		CString& plusGrand(CString s2)
		{
			if(s->compare(s2.getString()) < 0) return *this;
			else s2;
		}
		string getString(){return *s;}
		void print(){cout << *s;}
};

int main()
{
	CString s('a'), s2('a');
	if(s.infOuEgale(s2)) cout << s.getString();
	s.print();
	return 0;
}
