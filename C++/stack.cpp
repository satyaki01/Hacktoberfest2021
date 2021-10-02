/* C++ program to implement basic stack
operations */
#include <bits/stdc++.h>

using namespace std;

#define SIZE 1000

class Stack {
	int top;

public:
	int a[SIZE]; 

	Stack() { top = -1; }
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack::push(int x)
{
	if (top >= (SIZE - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

int main()
{
	class Stack s;
	
	int ch;
	
	while(1)	
	{
		cout<<"\n Stack Menu";
		cout<<"\n\n1.Push\n2.Pop\n3.Display\n4.Exit";
		cout<<"\n\nEnter your choice(1-4):";
		cin>>ch;
		
		switch(ch)
		{
			case 1:int n;
			 cout<<"enter element to push";
			 cin>>n;
			         s.push(n);
					break;
			case 2: cout<<s.pop() << " Popped from stack\n";
					break;
			case 3: while(!s.isEmpty())
	{
		cout<<s.peek()<<" ";
		s.pop();
	}
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}


	return 0;
}

