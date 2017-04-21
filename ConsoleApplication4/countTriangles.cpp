//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
////int n3solution(vector<int> &A)
////{
////	int counter = 0;
////	if (A.size() < 3)
////	{
////		return 0;
////	}
////
////	for (unsigned int i = 2; i < A.size(); ++i)
////	{
////		for (unsigned int j = 0; j < i - 1; ++j)
////		{
////			for (unsigned int k = j + 1; k < i; ++k)
////			{
////				if (A[j] + A[k] > A[i] &&
////					A[j] + A[i] > A[k] &&
////					A[k] + A[i] > A[j])
////				{
////					counter += 1;
////				}
////			}
////		}
////	}
////	return counter;
////}
//
//int solution(vector<int> &A)
//{
//	if (A.size() < 3)
//		return 0;
//	int count = 0;
//	sort(A.begin(), A.end());
//	for (int i = 0; i < A.size() - 2; ++i)
//	{
//		int k = i + 2;
//		for (int j = i + 1; j < A.size() - 1; ++j)
//		{
//			while (k < A.size() && A[i] + A[j] > A[k])
//				k += 1;
//			count += k - j - 1;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	vector<int> A = { 10,2,5,1,8,12 };
//	int result = solution(A);
//	cout << result;
//}