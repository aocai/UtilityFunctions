//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <limits.h>
//using namespace std;
//
//int solution(vector<int> &A)
//{
//	sort(A.begin(), A.end());
//	if (A.front() >= 0)
//	{
//		return 2 * A[0];
//	}
//	int minSum = INT_MAX;
//	int absSum = 0;
//	int begin = 0;
//	int end = A.size() - 1;
//	while (begin <= end)
//	{
//		absSum = (abs(A[begin] + A[end]));
//		if (abs(A[begin]) >= abs(A[end]))
//		{
//			begin += 1;
//		}
//		else if (abs(A[begin]) < abs(A[end]))
//		{
//			end -= 1;
//		}
//		minSum = min(minSum, absSum);
//	}
//	return minSum;
//}
//
//
//
//int main()
//{
//	vector<int> A = { -8,4,5,-10,3 };
//	int result = solution(A);
//	cout << result;
//}