#pragma once
#include <iostream>

#define ushort unsigned short

/// <summary>
/// Класс реализующий стэк.
/// </summary>
/// <typeparam name="T"></typeparam>
template <class T>
class CTemplStack
{
public:
	// Конструктор по умолчанию:
	CTemplStack();
	// Конструктор по размеру стэка:
	CTemplStack(size_t size = 1);
	// Деструктор:
	~CTemplStack();

	///////////////////////////
	// Методы работы со стэком:
	///////////////////////////

	// @Short
	// Добавление в стэк:
	bool addToStack(T object);
	// Удаление из стэка:
	T extractFromStack();
	// Получить размер стэка:
	size_t getSizeOfStack();
protected:
	void createObject();
private:
	// Объект в стэке:
	T* _stack;
	// Размер стэка:
	size_t _size;
	// Индекс верхнего элемента:
	ushort _top;
};

