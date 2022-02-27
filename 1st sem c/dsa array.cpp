#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class stack
{
	int size,top;
	T*STACK;
	

public:
	stack(int);
	bool full();
	bool empty();
	T pop();
	void push(const T&item);
	void display();
	~stack()
	{
		delete []STACK;
	}
};


