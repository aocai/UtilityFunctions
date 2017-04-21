#pragma once

using namespace std;

template <typename T>
struct linkedNode
{
	int index;
	T value;
	linkedNode *next;
};

template <class T>
class linkedList {
private:
	linkedNode<T> *root;
	linkedNode<T> *last;
	int count;

public:
	linkedList() : root(NULL), count(0) {};
	void add(int index, T value) 
	{
		linkedNode<T> *node = new linkedNode<T>{ index, value, NULL };
		if (!root)
		{
			root = node;
			last = root;
		}
		else
		{
			last->next = node;
			last = last->next;
		}
		count++;
	}

	linkedNode<T>* getRoot() { return root; };
	linkedNode<T>* getLast() { return last; };

	void print()
	{
		for (linkedNode<T> *itr = root; itr != NULL; itr = itr->next)
		{
			cout << itr->index << ":" << itr->value << " ";
		}
	}
};