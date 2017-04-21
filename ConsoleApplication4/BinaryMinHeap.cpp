#include "BinaryMinHeap.h"
#include <iostream>

BinaryMinHeap::BinaryMinHeap(int *array, int length) : heap(length)
{
	for (int i = 0; i < length; ++i)
	{
		heap[i] = array[i];
	}
	heapify();
}

BinaryMinHeap::BinaryMinHeap(const std::vector<int> &vector) : heap(vector)
{
	heapify();
}

BinaryMinHeap::BinaryMinHeap()
{

}

void BinaryMinHeap::upHeap(int index)
{
	if (index == 0)
		return;
	int parent = (index - 1) / 2;
	if (heap[parent] > heap[index])
	{
		std::swap(heap[parent], heap[index]);
		upHeap(parent);
	}
}

void BinaryMinHeap::downHeap(int index)
{
	int child1 = 2 * index + 1;
	if (child1 >= heap.size())
		return;

	int minChild;
	int child2 = 2 * index + 2;
	if (child2 < heap.size() && heap[child2] < heap[child1])
	{
		minChild = child2;
	}
	else
	{
		minChild = child1;
	}

	if (heap[index] > heap[minChild])
	{
		std::swap(heap[index], heap[minChild]);
		downHeap(minChild);
	}
}

void BinaryMinHeap::heapify()
{
	for (int i = heap.size() / 2; i >= 0; --i)
	{
		downHeap(i);
	}
}

int BinaryMinHeap::getMin()
{
	return heap[0];
}

void BinaryMinHeap::insert(int value)
{
	heap.push_back(value);
	upHeap(heap.size() - 1);
}

void BinaryMinHeap::extract()
{
	if (heap.size() == 0)
		return;

	heap[0] = heap[heap.size() - 1];
	heap.pop_back();
	downHeap(0);
}

void BinaryMinHeap::printHeap()
{
	for (int i = 0; i < heap.size(); ++i)
	{
		std::cout << heap[i] << " ";
	}
}