#include <iostream>
#include <vector>

class LinkedListNode
{
	private:
		int val;
		LinkedListNode *next;

	public:
		LinkedListNode(int v, LinkedListNode *n)
			: val(v), next(n) {}

		int getVal()
		{
			return val;
		}

		LinkedListNode* getNext()
		{
			return next;
		}
}

class LinkedList
{
	private:
		LinkedListNode *head;
		LinkedListNode *tail;
		int size;

	public:
		LinkedList()
		{
			head = nullptr;
			tail = nullptr;
			size = 0;
		}

		int getSize()
		{
			return size;
		}

		bool isEmpty()
		{
			return size == 0;
		}

		void push_front(int val)
		{
			head = new LinkedListNode(val, head);
			if (isEmpty())
			{
				tail = head;
			}
			size++;
		}

		void push_back(int val)
		{
			tail.next = new LinkedListNode(val, tail.next);




int main()
{

}
