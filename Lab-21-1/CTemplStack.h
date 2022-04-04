#pragma once
#include <iostream>

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
	bool extractFromStack(T object);
	// Получить размер стэка:
	size_t getSizeOfStack();
protected:
	void createObject();
private:
	// Объект в стэке:
	T* _stack;
	// Размер стэка:
	size_t _size;
};

