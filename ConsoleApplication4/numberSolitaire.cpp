//#include <vector>
//#include <iostream>
//#include <limits.h>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> &A)
//{
//	if (A.size() == 0)
//	{
//		return 0;
//	}
//
//	if (A.size() == 1)
//	{
//		return A[0];
//	}
//
//	if (A.size() == 2)
//	{
//		return A[0] + A[1];
//	}
//
//	vector<int> dp(A.size(), 0);
//	dp[0] = A[0];
//	for (int i = 1; i < A.size(); ++i)
//	{
//		int localMax = INT_MIN;
//		for (int j = i - 1; j >= 0 && j >= i - 6; --j)
//		{
//			localMax = max(localMax, dp[j]);
//		}
//		dp[i] = localMax + A[i];
//	}
//	return dp[A.size() - 1];
//}
//
//int main()
//{
//	vector<int> A = { 1,-2,0,9,-1,-2 };
//	int result = solution(A);
//	cout << result;
//	return 1;
//}