#include "BinaryMaxHeap.h"
#include <iostream>

BinaryMaxHeap::BinaryMaxHeap(int *array, int length) : heap(length)
{
	for (int i = 0; i < length; ++i)
	{
		heap[i] = array[i];
	}
	heapify();
}

BinaryMaxHeap::BinaryMaxHeap(const std::vector<int> &vector) : heap(vector)
{
	heapify();
}

BinaryMaxHeap::BinaryMaxHeap()
{

}

void BinaryMaxHeap::upHeap(int index)
{
	if (index == 0)
		return;
	int parent = (index - 1) / 2;
	if (heap[parent] < heap[index])
	{
		std::swap(heap[parent], heap[index]);
		upHeap(parent);
	}
}

void BinaryMaxHeap::downHeap(int index)
{
	int child1 = 2 * index + 1;
	if (child1 >= heap.size())
		return;

	int maxChild;
	int child2 = 2 * index + 2;
	if (child2 < heap.size() && heap[child2] > heap[child1])
	{
		maxChild = child2;
	}
	else
	{
		maxChild = child1;
	}

	if (heap[index] < heap[maxChild])
	{
		std::swap(heap[index], heap[maxChild]);
		downHeap(maxChild);
	}
}

void BinaryMaxHeap::heapify()
{
	for (int i = heap.size() / 2; i >= 0; --i)
	{
		downHeap(i);
	}
}

int BinaryMaxHeap::getMax()
{
	return heap[0];
}

void BinaryMaxHeap::insert(int value)
{
	heap.push_back(value);
	upHeap(heap.size() - 1);
}

void BinaryMaxHeap::extract()
{
	if (heap.size() == 0)
		return;

	heap[0] = heap[heap.size() - 1];
	heap.pop_back();
	downHeap(0);
}

void BinaryMaxHeap::printHeap()
{
	for (int i = 0; i < heap.size(); ++i)
	{
		std::cout << heap[i] << " ";
	}
}