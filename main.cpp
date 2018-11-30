#include "stack.hpp"
#include <functional>

void f() { std::cout << "f() called" << std::endl; }
void g() {std::cout << "g() called" << std::endl; }

int main () 
{
	std::function<void()> f_wrapper = f;
	std::function<void()> g_wrapper = g;
	Stack<std::function <void()>> stack;

	stack.Push(f_wrapper);
	stack.Push(g_wrapper);
	std::function<void()> head_g = stack.Head();
	head_g();
	stack.Pop();
	std::function<void()> head_f = stack.Head();
	head_f();
//	std::cout << top << std::endl;

	return 0;
}
