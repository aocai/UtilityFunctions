//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> solution(vector<int> &A, vector<int> &B) {
//	// write your code in C++11 (g++ 4.8.2)
//
//	int maxA = 0;
//	for (int i = 0; i < A.size(); ++i)
//	{
//		maxA = max(maxA, A[i]);
//	}
//
//	int maxB = 0;
//	for (int i = 0; i < B.size(); ++i)
//	{
//		maxB = max(maxB, B[i]);
//	}
//
//	int limit = (1 << maxB) - 1;
//	vector<int> fibVector(maxA + 1, 0);
//	fibVector[0] = 1;
//	fibVector[1] = 1;
//
//	for (int i = 2; i < fibVector.size(); ++i)
//	{
//		fibVector[i] = (fibVector[i - 1] + fibVector[i - 2]) & limit;
//	}
//
//	vector<int> result;
//
//	for (int i = 0; i < A.size(); ++i)
//	{
//		result.push_back(fibVector[A[i]] & ((1 << B[i]) - 1));
//	}
//
//	return result;
//}