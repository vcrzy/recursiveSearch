#include<stdio.h>
using namespace std;

class Node
{

	public:
	int a; 
	Node *next;
	
	static Node *montaNo(int x)
	{
		Node *p;
		p = new Node;
		if(!p)
		return p;
		
		p-> a=x;
		p-> next = 0;
		
		return p;
	}
	
	static int desmontaNo(Node *p)
	{
		int x = p-> a;
		delete p;
		return x;
	}
};


class Stack
{
	public:
	
	Node *top;
	
	Stack()
	{
		top = 0;
	}
	
	bool Push(int x)
	{
		Node *p = Node::montaNo(x);
		
		if(!p)
		return p;
		
		p ->next = top;
		top = p;
		return true;
	
	}
	
	bool Pop(int *x)
	{
		Node *p;
		if(!top)
		return 0;
		
		p = top;
		top = p->next;
		*x = Node::desmontaNo(p);
		return true;
	}
	
};

int main()
{
	Stack a;
	int pop;

a.Push(5);
a.Push(10);


a.Pop(&pop);
printf("O TOPO DA MINHA PILHA CONTEM O VALOR: %i",pop);
}