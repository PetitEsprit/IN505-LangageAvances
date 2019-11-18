#ifndef PAIR_HPP
#define PAIR_HPP

template<class T>
class Pair
{
	T n; T m;
	public:
		Pair(T n, T m);
		~Pair();
		T getN();
		T getM();
		T getMax();
};

#endif
