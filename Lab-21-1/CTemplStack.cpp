#include "CTemplStack.h"

template<class T>
inline CTemplStack<T>::CTemplStack()
{
	_size = 1;
	_stack = new T[_size];
}