//#include "PriorityQueue.h"
//#include <iostream>
//
//PriorityQueue::PriorityQueue(const std::vector<QueueNode> &vector) : heap(vector)
//{
//	heapify();
//}
//
//PriorityQueue::PriorityQueue()
//{
//
//}
//
//void PriorityQueue::upHeap(int index)
//{
//	if (index == 0)
//		return;
//	int parent = (index - 1) / 2;
//	if (heap[parent].priority > heap[index].priority)
//	{
//		std::swap(heap[parent], heap[index]);
//		upHeap(parent);
//	}
//}
//
//void PriorityQueue::downHeap(int index)
//{
//	int child1 = 2 * index + 1;
//	if (child1 >= heap.size())
//		return;
//
//	int minChild;
//	int child2 = 2 * index + 2;
//	if (child2 < heap.size() && heap[child2].priority < heap[child1].priority)
//	{
//		minChild = child2;
//	}
//	else
//	{
//		minChild = child1;
//	}
//
//	if (heap[index].priority > heap[minChild].priority)
//	{
//		std::swap(heap[index], heap[minChild]);
//		downHeap(minChild);
//	}
//}
//
//void PriorityQueue::heapify()
//{
//	for (int i = heap.size() / 2; i >= 0; --i)
//	{
//		downHeap(i);
//	}
//}
//
//QueueNode PriorityQueue::getHighestPriority()
//{
//	return heap[0];
//}
//
//void PriorityQueue::insert(QueueNode node)
//{
//	heap.push_back(node);
//	upHeap(heap.size() - 1);
//}
//
//void PriorityQueue::extract()
//{
//	if (heap.size() == 0)
//		return;
//
//	heap[0] = heap[heap.size() - 1];
//	heap.pop_back();
//	downHeap(0);
//}
//
//int PriorityQueue::searchQueue(int x, int y)
//{
//	for (int i = 0; i < heap.size(); ++i)
//	{
//		if (heap[i].x == x && heap[i].y == y)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//void PriorityQueue::decreasePriority(int index, int newPriority)
//{
//	heap[index].priority = newPriority;
//	upHeap(index);
//}
//
//void PriorityQueue::printHeap()
//{
//	for (int i = 0; i < heap.size(); ++i)
//	{
//		std::cout << heap[i].priority << " ";
//	}
//}