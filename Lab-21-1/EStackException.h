#pragma once
#include <exception>
#include <iostream>
class EStackException
{
	std::string message;
public:
	EStackException(std::string _message)
	{
		message = _message;
	}
	EStackException(const EStackException& exception)
	{
		message = exception.message;
	}
	~EStackException()
	{
		delete &message;
	}

	const std::string what () const { return message; }
};

 class EStackEmpty : public EStackException
{
public:
	 explicit EStackEmpty(std::string _message) : EStackException(_message) {}
	 explicit EStackEmpty(const EStackEmpty& exception) : EStackException(exception) {}
};

 class EStackOverflow : public EStackException
 {
 public:
	 explicit EStackOverflow(const std::string& _message) : EStackException(_message) {}
	 explicit EStackOverflow(const EStackOverflow& exception) : EStackException(exception) {}

 };

