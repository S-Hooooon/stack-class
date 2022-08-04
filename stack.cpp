#include "stack.h"
#include <iostream>

void Stack::PrintInfo()
{
	std::cout << "<STACK>" << std::endl;
	std::cout << "[1] Push" << std::endl;
	std::cout << "[2] Pop" << std::endl;
	std::cout << "--------" << std::endl;
}

void Stack::PrintStack()
{
	std::cout << "---- STACK ----" << std::endl;

	if (topIndex < 0)
	{
		std::cout << "---- EMPTY ----" << std::endl;
		return;
	}

	for (int i = topIndex; i >= 0; i--)
	{
		std::cout << container[i] << std::endl;
	}

	std::cout << "---------------" << std::endl;
}

void Stack::Push(int value)
{
	if (topIndex >= STACK_SIZE - 1)
	{
		std::cout << "Stack is Full !!" << std::endl;
		return;
	}
	container[++topIndex] = value;
}

void Stack::Pop()
{
	if (topIndex < 0)
	{
		std::cout << "Stack is Empty !!" << std::endl;
		return;
	}

	std::cout << "Pop : " << container[topIndex--] << std::endl;
}