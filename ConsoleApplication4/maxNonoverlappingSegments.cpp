//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<int> &A, vector<int> &B)
//{
//	if (A.size() < 2)
//		return A.size();
//	int lastIndex = 0;
//	int counter = 1;
//	for (int i = 1; i < A.size(); ++i)
//	{
//		if (A[i] > B[lastIndex])
//		{
//			counter += 1;
//			lastIndex = i;
//		}
//	}
//	return counter;
//}
//
//int main()
//{
//	vector<int> A = { 1,3,7,9,9 };
//	vector<int> B = { 5,6,8,9,10 };
//	int result = solution(A, B);
//	cout << result;
//	return 1;
//}