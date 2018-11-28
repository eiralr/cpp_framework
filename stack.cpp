#include <cstdio>
#include <iostream>

constexpr int max_num = 10;

class Stack {
	private:
		int current_;
		int * stack_arr_;
	public:
		Stack () {
			stack_arr_ = new int[max_num];
			current_ = 0;
		}

		~Stack() {
			delete stack_arr_;
		}

		void Push_ (int new_value)
		{
			if (current_ < max_num) {
				current_++;
				stack_arr_[current_] = new_value;
			}
		}
		
		void Pop_ () 
		{
			if (current_ > 0) {
				current_ --;
			}
		}

};

int main () {

	return 0;
}
