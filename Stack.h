#include "Node.h"

class stack
{
public:
	stack();
	~stack();

	void push(int n);
	int pop();
	int peek();
	int size();

private:
	node *pHead;
	int sz;
};