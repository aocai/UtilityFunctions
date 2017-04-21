//#include <iostream>
//#include <vector>
//#include "BinaryMinHeap.h"
//#include "BinaryMaxHeap.h"
//
//using namespace std;
//
//vector<int> minHeapSort(vector<int> input)
//{
//	vector<int> ret(input.size());
//	BinaryMinHeap minHeap = BinaryMinHeap(input);
//	for (int i = 0; i < input.size(); ++i)
//	{
//		ret[i] = minHeap.getMin();
//		minHeap.extract();
//	}
//	return ret;
//}
//
//vector<int> maxHeapSort(vector<int> input)
//{
//	vector<int> ret(input.size());
//	BinaryMaxHeap maxHeap = BinaryMaxHeap(input);
//	for (int i = 0; i < input.size(); ++i)
//	{
//		ret[i] = maxHeap.getMax();
//		maxHeap.extract();
//	}
//	return ret;
//}
//
//int main()
//{
//	vector<int> input(100);
//	for (int i = 0; i < input.size(); ++i)
//	{
//		input[i] = rand() % 100;
//	}
//
//	vector<int> minSorted = minHeapSort(input);
//	vector<int> maxSorted = maxHeapSort(input);
//
//	for (int i = 0; i < minSorted.size(); ++i)
//	{
//		cout << minSorted[i] << " ";
//	}
//	cout << endl;
//
//	for (int j = 0; j < maxSorted.size(); ++j)
//	{
//		cout << maxSorted[j] << " ";
//	}
//
//	return 1;
//}