#pragma once
#include <iostream>

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
	bool extractFromStack(T object);
	// �������� ������ �����:
	size_t getSizeOfStack();
protected:
	void createObject();
private:
	// ������ � �����:
	T* _stack;
	// ������ �����:
	size_t _size;
};

