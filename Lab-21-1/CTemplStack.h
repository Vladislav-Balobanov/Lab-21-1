#pragma once
#include <iostream>

#define ushort unsigned short

/// <summary>
/// ����� ����������� ����.
/// </summary>
/// <typeparam name="T"></typeparam>
template <class T>
class CTemplStack
{
public:
	// ����������� �� ���������:
	CTemplStack();
	// ����������� �� ������� �����:
	CTemplStack(size_t size = 1);
	// ����������:
	~CTemplStack();

	///////////////////////////
	// ������ ������ �� ������:
	///////////////////////////

	// @Short
	// ���������� � ����:
	bool addToStack(T object);
	// �������� �� �����:
	T extractFromStack();
	// �������� ������ �����:
	size_t getSizeOfStack();
protected:
	void createObject();
private:
	// ������ � �����:
	T* _stack;
	// ������ �����:
	size_t _size;
	// ������ �������� ��������:
	ushort _top;
};

