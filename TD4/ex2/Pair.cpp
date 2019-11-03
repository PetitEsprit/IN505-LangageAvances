#include "Pair.hpp"

template<class T>

Pair<T>::Pair(T n, T m) : n(n), m(m) {}
Pair<T>::~Pair() {}
T Pair<T>::getN() {return n;}
T Pair<T>::getM() {return m;}
T Pair<T>::getMax()
{
	return (n < m ? m : n);
}
