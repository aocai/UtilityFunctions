//#include <vector>
//#include <iostream>
//using namespace std;
//
//int solution(vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//	int end = 0;
//	int counter = 1;
//	int i = 1;
//
//	while (A[i] < 0)
//	{
//		if (A[i] != A[end])
//		{
//			counter += 1;
//		}
//		end += 1;
//		i += 1;
//	}
//
//	for (int j = i; j < A.size(); ++j)
//	{
//		if (A[j] == A[j - 1])
//		{
//			continue;
//		}
//		while (A[j] > abs(A[end]) && end > 0)
//		{
//			end -= 1;
//		}
//		if (A[j] != abs(A[end]))
//		{
//			counter += 1;
//		}
//	}
//
//	return counter;
//}
//
//int main()
//{
//	vector<int> A = {-5,-3,-1,0,3,6};
//	int result = solution(A);
//	cout << result;
//}