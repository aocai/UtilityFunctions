//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> &A)
//{
//	if (A.size() == 0)
//	{
//		return 0;
//	}
//	if (A.size() == 1)
//	{
//		return abs(A[0]);
//	}
//	if (A.size() == 2)
//	{
//		return abs(abs(A[0]) - abs(A[1]));
//	}
//
//	int total = 0;
//	vector<int> occurCounter(101, 0);
//	for (int i = 0; i < A.size(); ++i)
//	{
//		A[i] = abs(A[i]);
//		total += A[i];
//		occurCounter[A[i]] += 1;
//	}
//
//	int halfTotal = total/2;
//	vector<int> dp(halfTotal + 1, -1);
//	dp[0] = 0;
//	for (int i = 1; i < occurCounter.size(); ++i)
//	{
//		if (occurCounter[i] == 0)
//			continue;
//
//		if (i >= halfTotal)
//		{
//			return abs(i - (total - i));
//		}
//		for (int j = 0; j <= halfTotal; ++j)
//		{
//			if (dp[j] >= 0)
//			{
//				dp[j] = occurCounter[i];
//			}
//			else if (j - i >= 0 && dp[j - i] > 0)
//			{
//				dp[j] = dp[j - i] - 1;
//			}
//		}
//	}
//
//	for (int k = halfTotal; k >= 0; --k)
//	{
//		if (dp[k] >= 0)
//		{
//			cout << "k = " << k << " total = " << total << endl;
//			return abs(k - (total - k));
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	vector<int> A = { 10,11,12,13,14 };
//	int result = solution(A);
//	cout << result;
//}