#include "Stack.h"

stack::stack() {
	pHead = nullptr;
	sz = 0;
}
stack::~stack() {
	// TODO: destroy list?
}
void stack::push(int n) {
	node *pTemp = new node();
	pTemp->setData(n);

	if (pHead == nullptr) 
	{
		pHead = pTemp;
	}
	else 
	{
		pTemp->setNext(pHead);
		pHead = pTemp;
	}
	sz++;
}

// precondition: do not pop empty stack!!!
int stack::pop() 
{
	int temp = pHead->getData();
	node *pTemp = pHead;
	if (sz == 1) 
	{
		delete pTemp;
	}
	else 
	{
		pHead = pHead->getNext();
		delete pTemp;
	}
	sz--;
	return temp;
}
int stack::peek() {
	if (pHead != nullptr) {
		return this->pHead->getData();
	}
}
int stack::size() {
	return sz;
}