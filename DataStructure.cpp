#include <iostream>
#include "stack.h"

// Stack

int main()
{
	Stack myStack;

	myStack.PrintInfo();

	while (true)
	{
		myStack.PrintStack();

		int command{};

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
			case PUSH:
			{
				int value;
				std::cout << "\tpush value >> ";
				std::cin >> value;
				myStack.Push(value);
				break;
			}

			case POP:
				myStack.Pop();
				break;

			default:
				std::cout << "잘못된 명령어 입니다." << std::endl;
				break;
		}
	}
}
