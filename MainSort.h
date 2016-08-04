#ifndef _ABSTRACT_SORT
#define _ABSTRACT_SORT

#include <iostream>
#include <vector>
#include <random>
#include <fstream>

class AbstractSort
{
	private:
		template <class T> bool less( T first, T second );
		template <class T> void exch( std::vector<T> list, int first, int second );
		template <class T> void show( std::vector<T> list );

	protected:

	public:
		template <class T> virtual std::vector<T> sort( std::vector<T> );
		template <class T> bool isSorted( std::vector<T> list );
};
#endif