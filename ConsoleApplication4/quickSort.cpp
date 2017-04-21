//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
////void randomizePivot(vector<int> &A, int begin, int end)
////{
////	int index = rand() % (end - begin + 1) + begin;
////	swap(A[index], A[end]);
////}
//
//int lomutoPartition(vector<int> &A, int begin, int end)
//{
//	int index = rand() % (end - begin + 1) + begin;
//	swap(A[index], A[end]);
//
//	int pivot = A[end];
//	int i = begin;
//	for (int j = begin; j < end; ++j)
//	{
//		if (A[j] <= pivot)
//		{
//			swap(A[i], A[j]);
//			++i;
//		}
//	}
//	swap(A[i], A[end]);
//	return i;
//
//	//randomizePivot(A, begin, end);
//	//int pivot = A[end];
//	//int i = end;
//	//for (int j = begin; j < i; ++j)
//	//{
//	//	if (A[j] > pivot)
//	//	{
//	//		swap(A[j], A[--i]);
//	//		--j;
//	//	}
//	//}
//	//swap(A[i], A[end]);
//	//return i;
//}
//
//void lomutoQuickSort(vector<int> &A, int begin, int end)
//{ 
//	if (begin < end)
//	{
//		int p = lomutoPartition(A, begin, end);
//		lomutoQuickSort(A, begin, p - 1);
//		lomutoQuickSort(A, p + 1, end);
//	}
//}
//
//int HoarePartition(vector<int> &A, int begin, int end)
//{
//	//int index = rand() % (end - begin + 1) + begin;
//	//swap(A[index], A[begin]);
//
//	int pivot = A[begin];
//	cout << "pivot = " << pivot;
//	int i = begin - 1;
//	int j = end;
//	while (true)
//	{
//		do 
//		{
//			j--;
//			cout << " j decreased, A[j] = " << A[j];
//		}
//		while (A[j] > pivot);
//
//		do
//		{
//			i++;
//			cout << " i increased, A[i] = " << A[i];
//		}
//		while (A[i] < pivot);
//
//		if (i < j)
//		{
//			swap(A[i], A[j]);
//			cout << " swapped index " << i << " with index " << j;
//		}
//		else
//		{
//			cout << endl;
//			for (int i = 0; i < A.size(); ++i)
//			{
//				cout << A[i] << " ";
//			}
//			cout << " returning " << j + 1 << endl << endl << endl;
//			return j + 1;
//		}
//	}
//}
//
//void HoareQuickSort(vector<int> &A, int begin, int end)
//{
//	if (end - begin >= 2)
//	{
//		int p = HoarePartition(A, begin, end);
//		HoareQuickSort(A, begin, p);
//		HoareQuickSort(A, p, end);
//	}
//}
//
//int main()
//{
//	//vector<int> A = { 3,8,4,2,4,0,5,8,7,3,1,8,9,6,4,1,11,2,0,15,0,3,5,1,12,16,48,7,6,3,2,9,5,4,8,18 };
//	vector<int> A = { 3,2,3,1,1,2 };
//	HoareQuickSort(A, 0, A.size());
//	//lomutoQuickSort(A, 0, A.size() - 1);
//	for (int i = 0; i < A.size(); ++i)
//	{
//		cout << A[i] << " ";
//	}
//}