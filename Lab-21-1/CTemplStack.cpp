#include "CTemplStack.h"

template<class T>
inline CTemplStack<T>::CTemplStack()
{
	_size = 1;
	_stack = new T[_size];
}

template<class T>
CTemplStack<T>::CTemplStack(size_t size)
{
	_size = size;
	_stack = new T[_size];
}

template<class T>
CTemplStack<T>::~CTemplStack()
{
	delete[] _stack;
}