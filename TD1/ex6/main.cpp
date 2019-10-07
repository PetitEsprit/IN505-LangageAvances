/*
  1.surcharge du =
  2.copie cstring dans une autre via realloc et strcpy
  sinon copie champs à champs -> perte de donné facile via désalloc
  3.surchage << et +
  4. variable de classe ,static int nbString 
*/

#include "CString.hpp"
#include <iostream>

int main()
{
	using namespace std;
	CString s1( "toto" ), s2( 'q' ), s3;
	//cout << "nbrChaines: " << CString::getNbString() << '\n' ;
	//afficher le nombre de chaines créées
	//s3 = s1.plus( ‘w’ ) ;
	cout << "s3 = " << s3.getString() << '\n' ;
	if( s1.plusGrandQue(s2) ) // si s1 > s2 au sens alphabétique
		cout << "plus grand" << endl ;
	if( s1.infOuEgale(s2) ) // si s1 <= s2 au sens alphabétique
		cout << "plus petit" << endl ;
	//s3 = s1.plusGrand( s2 ) ;// retourner s1 si s1>s2, s2 sinon
}
