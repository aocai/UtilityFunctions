#pragma once
#include <vector>

class BinaryMaxHeap
{
private:
	std::vector<int> heap;
	void upHeap(int index);
	void downHeap(int index);
	void heapify();
public:
	BinaryMaxHeap(int *array, int length);
	BinaryMaxHeap(const std::vector<int> &vector);
	BinaryMaxHeap();

	int getMax();
	void insert(int value);
	void extract();
	void printHeap();
};