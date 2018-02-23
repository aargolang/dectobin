#include "Node.h"

node::node() {
	pNext = nullptr;
}
node::~node() {
	// TODO: delete stuff or something
}
int node::getData() {
	return dat;
}
node *node::getNext() {
	return pNext;
}
void node::setData(int n) {
	dat = n;
}
void node::setNext(node *next) {
	pNext = next;
}