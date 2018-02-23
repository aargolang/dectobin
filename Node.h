class node
{
public:
	node();
	~node();

	int getData();
	node *getNext();
	void setData(int dat);
	void setNext(node *next);

private:
	int dat;
	node *pNext;
};