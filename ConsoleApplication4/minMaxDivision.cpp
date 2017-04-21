//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//int minimumKRequired(int sumMidBound, vector<int> &A)
//{
//	int kRequired = 1;
//	int currentSum = A[0];
//
//	for (int i = 1; i < A.size(); ++i)
//	{
//		int temp = currentSum + A[i];
//		if (temp <= sumMidBound)
//		{
//			currentSum = temp;
//		}
//		else
//		{
//			currentSum = A[i];
//			kRequired += 1;
//		}
//	}
//	return kRequired;
//}
//
//int solution(int K, int M, vector<int> &A)
//{
//	int total = 0;
//	int maxA = 0;
//	for (int i = 0; i < A.size(); ++i)
//	{
//		total += A[i];
//		maxA = max(maxA, A[i]);
//	}
//
//	if (K == 1)
//	{
//		return total;
//	}
//	if (K >= A.size())
//	{
//		return maxA;
//	}
//
//	int sumUpperBound = total;
//	int sumLowerBound = maxA;
//	int result;
//	while (sumLowerBound <= sumUpperBound)
//	{
//		int	sumMidBound = (sumLowerBound + sumUpperBound) / 2;
//		int kRequired = minimumKRequired(sumMidBound, A);
//		if (kRequired <= K)
//		{
//			sumUpperBound = sumMidBound - 1;
//			result = sumMidBound;
//		}
//		else
//		{
//			sumLowerBound = sumMidBound + 1;
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	int K = 3;
//	int M = 35;
//	vector<int> A = { 1,3,5,8,25,1,6,13,14,35,2,4,9,11,5,18,12 };
//	int result = solution(K, M, A);
//	cout << result;
//}