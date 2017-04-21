//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int solution(int K, vector<int> &C, vector<int> &D)
//{
//	//find total number of different socks possible (<=50)
//	int uniquePairs = 0;
//	for (int i = 0; i < C.size(); ++i)
//	{
//		uniquePairs = max(uniquePairs, C[i]);
//	}
//	for (int i = 0; i < D.size(); ++i)
//	{
//		uniquePairs = max(uniquePairs, D[i]);
//	}
//
//	//find occurrance of each clean sock
//	vector<int> pair(uniquePairs + 1, 0);
//	for (int i = 0; i < C.size(); ++i)
//	{
//		pair[C[i]] += 1;
//	}
//
//	//for each pair of clean sock, increase counter. Add all single socks to singleSock pool
//	//reset pair vector for re-use
//	int counter = 0;
//	vector<int> singleSock;
//	for (int i = 1; i < pair.size(); ++i)
//	{
//		if (pair[i] > 0)
//		{
//			counter += pair[i] / 2;
//			if (pair[i] % 2 == 1)
//			{
//				singleSock.push_back(i);
//			}
//			pair[i] = 0;
//		}
//	}
//
//	if (K == 0)
//		return counter;
//
//	//find occurrance of each dirty sock. Reuse pair vector
//	for (int i = 0; i < D.size(); ++i)
//	{
//		pair[D[i]] += 1;
//	}
//
//	//pair all single socks with a dirty sock if available
//	int washedSocks = 0;
//	for (int i = 0; i < singleSock.size(); ++i)
//	{
//		if (pair[singleSock[i]] > 0)
//		{
//			pair[singleSock[i]] -= 1;
//			if (washedSocks < K)
//			{
//				washedSocks += 1;
//				counter += 1;
//			}
//			else {
//				return counter;
//			}
//		}
//	}
//
//	//find total number of dirty sock pairs left
//	int dirtyPairs = 0;
//	for (int i = 0; i < pair.size(); ++i)
//	{
//		dirtyPairs += pair[i] / 2;
//	}
//
//	//return counter plus total dirty pairs able to fit into the machine
//	return counter + min(dirtyPairs, (K - washedSocks) / 2);
//}
//
//int main()
//{
//	int K = 5;
//	vector<int> C = { 1,1,2 };
//	vector<int> D = { 2,2,3 };
//	int result = solution(K, C, D);
//	cout << result;
//}