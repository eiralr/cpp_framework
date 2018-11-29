#include "stack.hpp"

Stack::Stack () {}
Stack::~Stack() {}

void Stack::Push (int new_value)
{
	stack_data_.push_back(new_value);
}

void Stack::Pop () 
{
	if (stack_data_.empty())
	{
		std::cout << "Stack is empty.\n" << std::endl;
	} else{
		stack_data_.pop_back();
	}
}

int Stack::Head () 
{
	std::cout << stack_data_.back() << std::endl;
	return stack_data_.back();
}

