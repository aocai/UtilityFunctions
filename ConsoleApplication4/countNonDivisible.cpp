//#include <vector>
//using namespace std;
//
//void copyVector(std::vector<int> &B, int start, int end, std::vector<int> &A)
//{
//	for (int i = start; i < end; ++i)
//	{
//		A[i] = B[i];
//	}
//}
//
//void mergeSortMerge(std::vector<int> &A, int start, int middle, int end, std::vector<int> &B)
//{
//	int i = start;
//	int j = middle;
//	for (int k = start; k < end; ++k)
//	{
//		if (i < middle && (j >= end || A[i] <= A[j]))
//		{
//			B[k] = A[i];
//			i += 1;
//		}
//		else
//		{
//			B[k] = A[j];
//			j += 1;
//		}
//	}
//}
//
//void mergeSortSplitter(std::vector<int> &A, int start, int end, std::vector<int> &B)
//{
//	if (end - start < 2)
//	{
//		return;
//	}
//	int middle = (end + start) / 2;
//	mergeSortSplitter(A, start, middle, B);
//	mergeSortSplitter(A, middle, end, B);
//	mergeSortMerge(A, start, middle, end, B);
//	copyVector(B, start, end, A);
//}
//
//void mergeSort(std::vector<int> &input)
//{
//	std::vector<int> workVector(input.size(), 0);
//	mergeSortSplitter(input, 0, input.size(), workVector);
//
//}
//
//vector<int> solution(vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//	vector<int> workVector = A;
//	mergeSort(workVector);
//
//	vector<int> vec(workVector.back() + 1, 0);
//	for (int i = 0; i < A.size(); ++i)
//	{
//		vec[A[i]] += 1;
//	}
//
//	vector<int> result(workVector.back() + 1, 0);
//
//	int i = 1;
//	while (i < vec.size())
//	{
//		if (vec[i] != 0)
//		{
//			int index = i;
//			while (index < vec.size())
//			{
//				if (vec[index] != 0)
//				{
//					result[index] += vec[i];
//				}
//				index += i;
//			}
//		}
//		i += 1;
//	}
//
//	vector<int> ret;
//	for (int i = 0; i < A.size(); ++i)
//	{
//		ret.push_back(A.size() - result[A[i]]);
//	}
//
//	return ret;
//}