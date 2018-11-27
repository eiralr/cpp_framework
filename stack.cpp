#include <cstdio>
#include <iostream>

constexpr int max_num = 10;

class Stack {
	private:
		int current_;
		int * first_;
	public:
		Stack () {
			first_ = new int[max_num];
			current_ = 0;
		}

		~Stack() {
			delete first_;
		}
};

int main () {

}
