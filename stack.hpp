#include <iostream>
#include <vector>

//constexpr int max_num = 10;

class Stack {
	private:
		std::vector<int> stack_data_;
	public:
		Stack () {}
		~Stack() {}

		void Push (int new_value)
		{
			stack_data_.push_back(new_value);
		}

		void Pop () 
		{
			if (stack_data_.empty())
			{
				std::cout << "Stack is empty.\n" << std::endl;
			} else{
				stack_data_.pop_back();
			}
		}

		void Head () 
		{
			std::cout << stack_data_.back() << std::endl;
		}
};
