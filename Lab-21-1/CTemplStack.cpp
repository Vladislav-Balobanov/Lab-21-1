#include "CTemplStack.h"
#include <iostream>
#include <exception>

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

template<class T>
bool CTemplStack<T>::addToStack(T object)
{
	try
	{
		if (_size == 0)
			throw std::out_of_range;

		_stack[_size - 1] = object;
		return true;
	}
	catch (std::out_of_range ex)
	{
		return false;
	}
}