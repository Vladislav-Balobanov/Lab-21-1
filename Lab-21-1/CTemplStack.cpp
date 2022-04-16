#include "CTemplStack.h"
#include "EStackException.h"
#include <iostream>
#include <exception>

template<class T>
inline CTemplStack<T>::CTemplStack()
{
	_size = 1;
	_top = _size--;
	_stack = new T[_size];
}

template<class T>
CTemplStack<T>::CTemplStack(size_t size)
{
	_size = size;
	_top = _size--;
	_stack = new T[_size];
}

template<class T>
CTemplStack<T>::~CTemplStack()
{
	delete[] _stack;
}

template<class T>
bool CTemplStack<T>::push(T object)
{
	try
	{
		if (_size <= 0)
			throw EStackEmpty("Stack is empty!");
		_stack[_top] = object;
	}
	catch (const EStackEmpty& Exc)
	{
		return true;
	}
}

template<class T>
T CTemplStack<T>::pop()
{
	if (_size <= 0)
		throw EStackEmpty("Stack is Empty!");
	else if (_top >= _size)
		throw EStackOverflow("Stack Overflow!");
	return _stack[_top];
}

template<class T>
size_t CTemplStack<T>::getSizeOfStack()
{
	return _size;
}
