#include<iostream>

using namespace std;

template <typename t>
class Stack
{
	struct set
	{
		t data;
		set* right;
		set* left;
	};
	set *root;
	int size;
	
  //constructor 
    Stack()
    {
    	root =NULL;
    	size=0;
	}
};
