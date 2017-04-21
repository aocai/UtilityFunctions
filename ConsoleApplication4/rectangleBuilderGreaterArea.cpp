//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<int> &A, int X)
//{
//	if (A.size() < 4)
//		return 0;
//
//	sort(A.begin(), A.end());
//	vector<int> fence;
//	vector<int> squares;
//	for (int i = 1; i < A.size(); ++i)
//	{
//		if (A[i] == A[i - 1])
//		{
//			fence.push_back(A[i]);
//			int count = 0;
//			while (i < A.size() - 1 && A[i] == A[i + 1])
//			{
//				++count;
//				++i;
//			}
//			if (count >= 2)
//			{
//				squares.push_back(A[i]);
//			}
//		}
//	}
//
//	int counter = 0;
//	for (int i = 0; i < fence.size(); ++i)
//	{
//		int begin = i + 1;
//		int end = fence.size() - 1;
//		int index = fence.size();
//		while (begin <= end)
//		{
//			int mid = (begin + end) / 2;
//			if ((long long)fence[mid] * (long long)fence[i] >= (long long)X)
//			{
//				end = mid - 1;
//				index = mid;
//			}
//			else
//			{
//				begin = mid + 1;
//			}
//		}
//		if (index < fence.size())
//		{
//			counter += fence.size() - index;
//		}
//		if (counter > 1000000000)
//			return -1;
//	}
//	
//	for (int i = 0; i < squares.size(); ++i)
//	{
//		if ((long long)squares[i] * (long long)squares[i] >= (long long)X)
//			counter += 1;
//	}
//
//	if (counter > 1000000000)
//		return -1;
//
//	return counter;
//}
//
//int main()
//{
//	int X = 536870912;
//	vector<int> A = { 1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912};
//	int result = solution(A, X);
//	cout << result;
//}