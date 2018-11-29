#include <iostream>
#include <vector>

//constexpr int max_num = 10;

class Stack {
	public:
		Stack ();
		~Stack();

		void Push (int new_value);	
		void Pop (); 
		int Head (); 
	
	private:
		std::vector<int> stack_data_;

};
