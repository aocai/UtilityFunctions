//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//void copyVector(vector<int> &B, vector<int> &A, int begin, int end)
//{
//	for (int i = begin; i <= end; ++i)
//	{
//		A[i] = B[i];
//	}
//}
//
//void mergeSortMerger(vector<int> &A, int begin, int mid, int end, vector<int> &B)
//{
//	int i = begin;
//	int j = mid + 1;
//	int k;
//	for (k = begin; k <= end && i <= mid && j <= end; ++k)
//	{
//		if (A[i] <= A[j])
//		{
//			B[k] = A[i];
//			++i;
//		}
//		else
//		{
//			B[k] = A[j];
//			++j;
//		}
//	}
//	if (i <= mid)
//	{
//		while (i <= mid)
//		{
//			B[k] = A[i];
//			++i;
//			++k;
//		}
//	}
//	else
//	{
//		while (j <= end)
//		{
//			B[k] = A[j];
//			++j;
//			++k;
//		}
//	}
//}
//
//void mergeSortSplitter(vector<int> &A, int begin, int end, vector<int> &B)
//{
//	if (end - begin < 1)
//		return;
//
//	int mid = (begin + end) / 2;
//	mergeSortSplitter(A, begin, mid, B);
//	mergeSortSplitter(A, mid + 1, end, B);
//	mergeSortMerger(A, begin, mid, end, B);
//	copyVector(B, A, begin, end);
//}
//
//void mergeSort(vector<int> &A)
//{
//	vector<int> B(A.size(), 0);
//	mergeSortSplitter(A, 0, A.size() - 1, B);
//}
//
//int main()
//{
//	vector<int> A = { 3,8,4,2,4,0,5,8,7,3,1,8,9,6,4,1,11,2,0,15,0,3,5,1,12,16,48,7,6,3,2,9,5,4,8,18 };
//	mergeSort(A);
//	for (int i = 0; i < A.size(); ++i)
//	{
//		cout << A[i] << " ";
//	}
//}