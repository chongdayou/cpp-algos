#include <iostream>
#include <vector>

class LinkedListNode
{
	public:
		int val;
		LinkedListNode *next;

		LinkedListNode(int v, LinkedListNode *n)
			: val(v), next(n) {}
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
			LinkedListNode *node = new LinkedListNode(val, nullptr);
			if (isEmpty())
			{
				tail = node;
				head = node;
				size++;
				return;
			}

			tail->next = node;
			tail = tail->next;
			size++;
		}

		void removeByIndex(int index)
		{
			if (index >= this->size || index < 0)
			{
				return;
			}

			LinkedListNode *cur = this->head;
			LinkedListNode *prev = nullptr;
			for (int i = 0; i < index; i++)
			{
				prev = cur;
				cur = cur->next;
			}

			if (index == 0)
			{
				this->head = this->head->next;
			}
			else
			{
				prev->next = cur->next;
			}

			if (index == this->size - 1)
			{
				this->tail = prev;
			}

			delete cur;
			this->size--;
		}

		int getByIndex(int index)
		{
			if (index < 0 || index >= this->size)
			{
				return -1;
			}

			LinkedListNode *cur = this->head;
			int i = 0;
			while (i < index)
			{
				cur = cur->next;
				i++;
			}
			return cur->val;
		}

		~LinkedList()
		{
			LinkedListNode * cur = this->head;
			while (cur != nullptr)
			{
				LinkedListNode *next = cur->next;
				delete cur;
				cur = next;
			}
		}
}


int main()
{

}
