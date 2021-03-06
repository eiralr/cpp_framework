#include <iostream>
#include <vector>

template <typename T> class Stack {
	public:
		Stack () {}
		~Stack() {}

		void Push (T new_value)
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

		T Head () 
		{
			return stack_data_.back();
		}

	private:
		std::vector<T> stack_data_;

};
