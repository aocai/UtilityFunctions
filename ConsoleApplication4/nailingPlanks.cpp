//#include <vector>
//#include <algorithm>
//#include <utility>
//#include <iostream>
//using namespace std;
//
//int function(pair<int, int> pairA, pair<int, int> pairB)
//{
//	return (pairA.first < pairB.first);
//}
//
//int solution(vector<int> &A, vector<int> &B, vector<int> &C)
//{
//	vector<pair<int, int>> CPair;
//	for (int i = 0; i < C.size(); ++i)
//	{
//		CPair.push_back(make_pair(C[i], i));
//	}
//	sort(CPair.begin(), CPair.end());
//
//	int maxNails = 0;
//	for (int i = 0; i < A.size(); ++i)
//	{
//		int indexA = CPair.size(); 
//		int earliestNail = CPair.size();
//		int begin = 0;
//		int end = CPair.size() - 1;
//		while (begin <= end)
//		{
//			int mid = (begin + end) / 2;
//			if (A[i] <= CPair[mid].first)
//			{
//				end = mid - 1;
//				indexA = mid;
//			}
//			else
//			{
//				begin = mid + 1;
//			}
//		}
//
//		for (int j = indexA; j < CPair.size() && B[i] >= CPair[j].first; ++j)
//		{
//			earliestNail = min(earliestNail, CPair[j].second);
//			if (maxNails >= earliestNail)
//				break;
//		}
//
//		if (earliestNail == CPair.size())
//		{
//			return -1;
//		}
//
//		maxNails = max(maxNails, earliestNail);
//	}
//	return maxNails + 1;
//}
//
//int main()
//{
//	vector<int> A = {1,4,5,8};
//	vector<int> B = {4,5,9,10};
//	vector<int> C = {4,6,7,10,2};
//	int result = solution(A, B, C);
//	cout << result;
//}