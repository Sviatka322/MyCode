#pragma once
#include <iostream>

class Stack
{
private:
	const int n;
	int* stack;
	int i = 0;

public:
	Stack(int size = 10) : n(size), stack(new int[n]) {};

	void push(int element)
	{
		if (i < n)
		{
			stack[i] = element;
			i++;
		}
		else
		{
			std::cout << "Stack is full" << '\n';
		}
	}

	void top()
	{
		if (i > 0)
		{
			std::cout << stack[i - 1] << '\n';
		}
		else
		{
			std::cout << "stack is empty" << '\n';
		}
	}

	int pop()
	{
		if (i > 0)
		{
			i--;
			return stack[i];
		}
		else
		{
			return -1;
			std::cout << "Stack is empty, error -1" << '\n';
		}
	}

	~Stack()
	{
		delete[] stack;
	}

};
