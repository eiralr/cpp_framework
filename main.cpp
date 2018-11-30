#include "stack.hpp"
#include <functional>

void f() { std::cout << "f() called" << std::endl; }
void g() {std::cout << "g() called" << std::endl; }
void incr (int a) {std :: cout << ++ a << std :: endl; }
void add (int a, int b) {std :: cout << a + b << std :: endl;}

int main () 
{
	std::function<void()> f_wrapper = f;
	std::function<void()> g_wrapper = g;
	auto add_bind = std::bind(add, 3, 6);
	auto incr_bind = std::bind(incr, 6);

	Stack<std::function <void()>> stack;
	stack.Push(f_wrapper);
	stack.Push(g_wrapper);
	stack.Head()();
	stack.Push(incr_bind);
	stack.Push(add_bind);
	stack.Head()();
	stack.Pop();
	stack.Head()();

	return 0;
}
