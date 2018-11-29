#include <iostream>
#include <vector>

//constexpr int max_num = 10;

class Stack {
	private:
		int current_;
		std::vector<int> stack_ptr_;
	public:
		Stack () {
			stack_ptr_.reserve(1);
			current_ = 0;
		}

		~Stack() {}

		void Push (int new_value)
		{
				current_++;
				stack_ptr_[current_] = new_value;
				std::cout << stack_ptr_[current_] << std::endl;
		}
		
		void Pop () 
		{
			if (current_ > 0) {
				current_ --;
				std::cout << stack_ptr_[current_] << std::endl;
			} else {
				std::cout << "Stack is empty.\n" << std::endl;
			}
		}

		void Head () 
		{
			std::cout << stack_ptr_[current_] << std::endl;
		}
};

int main () 
{
	Stack stack;
	stack.Push(5);
	stack.Push(4);
//	stack.Pop();
	stack.Head();
	stack.Push(3);
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	return 0;
}
