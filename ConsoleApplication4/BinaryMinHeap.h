#pragma once
#include <vector>

class BinaryMinHeap
{
private:
	std::vector<int> heap;
	void upHeap(int index);
	void downHeap(int index);
	void heapify();
public:
	BinaryMinHeap(int *array, int length);
	BinaryMinHeap(const std::vector<int> &vector);
	BinaryMinHeap();

	int getMin();
	void insert(int value);
	void extract();
	void printHeap();
};