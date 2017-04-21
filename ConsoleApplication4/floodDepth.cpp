//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<int> &A)
//{
//	if (A.size() < 3)
//		return 0;
//
//	int i = 0;
//	while (i < A.size() - 1 && A[i] <= A[i+1])
//	{
//		++i;
//	}
//
//	if (i == A.size())
//	{
//		return 0;
//	}
//
//	int high = A[i];
//	int low = A[i];
//	int maxDepth = 0;
//
//	for (unsigned int j = i + 1; j < A.size(); ++j)
//	{
//		if (A[j] <= low)
//		{
//			low = A[j];
//		}
//		else
//		{
//			if (A[j] >= high)
//			{
//				maxDepth = max(maxDepth, high - low);
//				high = A[j];
//				low = A[j];
//			}
//			else
//			{
//				maxDepth = max(maxDepth, A[j] - low);
//			}
//		}
//	}
//
//	return maxDepth;
//}
//
//int main()
//{
//	vector<int> A = { 1,9,8,7,4,8,7,10,31,2 };
//	int result = solution(A);
//	cout << result;
//}