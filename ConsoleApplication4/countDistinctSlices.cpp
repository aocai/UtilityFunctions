//#include <vector>
//#include <iostream>
//using namespace std;
//
//int solution(int M, vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//	vector<int> MVector(M + 1, -1);
//	int begin = 0;
//	int counter = 0;
//	for (int i = 0; i < A.size(); ++i)
//	{
//		if (MVector[A[i]] == -1)
//		{
//			MVector[A[i]] = i;
//		}
//		else
//		{
//			int newbegin = MVector[A[i]] + 1;
//			for (int i = begin; i < newbegin - 1; ++i)
//			{
//				MVector[A[i]] = -1;
//			}
//			MVector[A[newbegin - 1]] = i;
//			begin = newbegin;
//		}
//
//		counter += (i - begin + 1);
//		if (counter >= 1000000000)
//			return 1000000000;
//	}
//	return counter;
//}
//
//int main()
//{
//	int M = 6;
//	vector<int> A = {3,4,5,5,2};
//	int result = solution(M, A);
//	cout << result;
//}