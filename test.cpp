#include<iostream>

#include "Stack.h"
using namespace std;

//main function ..
int main()
{
	Stack<> s , d;
   	s.push(10);
	s.push(20);
	d.push(30);
	
	s.swap(s,d);
	cout<<s.size();
	cout<<d.size();
	return 0;
}
