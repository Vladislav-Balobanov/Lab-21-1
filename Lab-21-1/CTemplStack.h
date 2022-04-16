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
	bool push(T object);
	// �������� �� �����:
	T pop();
	// �������� ������ �����:
	size_t getSizeOfStack();
private:
	// ������ � �����:
	T* _stack;
	// ������ �������� ��������:
	ushort _top;
};

