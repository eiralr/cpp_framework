#include <iostream>

using namespace std;
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
				cout << stack_arr_[current_] << endl;
			} else {
				cout << "Max entries count exceeded, please delete the latest one!\n" << endl;
			}
		}
		
		void Pop_ () 
		{
			if (current_ > 0) {
				current_ --;
				cout << stack_arr_[current_] << endl;
			}
		}
};

int main () 
{
	Stack stack;
	stack.Push_(5);
	stack.Push_(4);
	stack.Pop_();
	stack.Push_(3);
	stack.Pop_();
	stack.Pop_();

//	cout << stack_arr_[current_] << endl;




	return 0;
}
