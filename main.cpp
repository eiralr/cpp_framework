#include "stack.hpp"

int main () 
{
	Stack stack;
	stack.Push(5);
	stack.Head();
	stack.Push(4);
	int top = stack.Head();
	std::cout << top << std::endl;

	return 0;
}
