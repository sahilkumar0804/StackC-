#include<iostream>
#include "Stack.h"


	template <typename t>
   Stack<t>::Stack()
	{
		head=NULL; 
		SIZE=0;
	}
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
