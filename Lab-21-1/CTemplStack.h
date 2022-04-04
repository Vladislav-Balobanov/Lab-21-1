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
	bool delFromStack(T object);
	// �������� ������ �����:
	size_t getSizeOfStack();
protected:
	void createObject();
private:
	// ������ � �����:
	T _object;
	// ������ �����:
	size_t _size;
};

