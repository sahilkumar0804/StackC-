#include<iostream>

using namespace std;

//Stack class...
template <typename t=int> class Stack 
{
	
	struct stack{
		t data;
		stack *next;
	};
	stack* head;
	int SIZE;
    public:
    //constructor
	Stack()
	{
		head=NULL; 
		SIZE=0;
	}
	
	 //function declartions...
	void push(t data);
	t pop();
	t top();
	bool empty();
	int size();	
	void swap(Stack,Stack);
};

// function body...
template <typename t>
   void Stack <t> ::push(t data)
   {
   	   stack * temp =new stack();
   	   temp->data=data;
   	   if(head==NULL)
   	        {
			   head=temp;
			 head->next=NULL;
   	        }
   	    else
   	     {
   	         temp->next=head;
			 head=temp;	
		   }
		   SIZE++;
   }
   
   
  template <typename t>
   t Stack<t>::pop()
    {
    	if(head==NULL)
    	    return -1;
    	    
         t data=head->data;
    	 stack * temp =head;
    	 head=head->next;
    	 delete(temp);
    	 SIZE--;
    	 return data;
    	 
	} 
	
	
	 template <typename t>
   t Stack<t>::top()
   {
   	  if(head==NULL)
   	    return -1;
   	    
   	    return head->data;
   }
   
    template <typename t>
   bool Stack<t>::empty()
   {
   	if(head==NULL)
   	   return true;
   	  return false;
   }
   
   
   template <typename t>
   int Stack<t>::size()
   {
   	   return SIZE;
   }
   
   template <typename t>
   void Stack<t>::swap(Stack a ,Stack b)
   {
   	        //Stack swap...
   	        stack temp;
   	        temp= a->head;
   	        a->head=b->head;
   	        //Size of stack swwap...
   	        b->head=temp;
   	        int s=a->SIZE;
   	        a->SIZE=b->SIZE;
   	        b->SIZE=s;
   	        
   }

//main function ..
int main()
{
	Stack<> s;
   	s.push(10);
	s.push(20);
	cout<<s.top()<<endl;
	cout<<s.top()<<endl;
	cout<<s.empty()<<endl;
	cout<<s.size()<<endl;
	
	return 0;
}

