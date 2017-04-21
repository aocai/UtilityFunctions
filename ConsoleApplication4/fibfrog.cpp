//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> &A)
//{
//	A.push_back(1);
//
//	vector<int> fibs;
//	vector<int> reached(A.size(), 0);
//	fibs.push_back(0);
//	fibs.push_back(1);
//
//	int i = 2;
//	int tempFib = 1;
//	while (tempFib <= A.size())
//	{
//		fibs.push_back(tempFib);
//
//		if (tempFib - 1 == A.size())
//		{
//			return 1;
//		}
//
//		if (tempFib - 1 < A.size() && A[tempFib - 1] == 1)
//		{
//			reached[tempFib - 1] = 1;
//		}
//
//		i++;
//		tempFib = fibs[i - 1] + fibs[i - 2];
//	}
//
//	for (int i = 0; i < A.size(); ++i)
//	{
//		if (reached[i] == 0)
//			continue;
//
//		int currentJumps = reached[i];
//		for (int j = 2; j < fibs.size(); ++j)
//		{
//			int temp = i + fibs[j];
//			if (temp < A.size() && A[temp] == 1)
//			{
//				if (reached[temp] == 0)
//				{
//					reached[temp] = currentJumps + 1;
//				}
//				else
//				{
//					reached[temp] = min(reached[temp], currentJumps + 1);
//				}
//			}
//		}
//	}
//	return reached.back() ? reached.back() : -1;
//}
//
//int main()
//{
//	vector<int> A = { 0,0,0,1,1,0,1,0,0,0,0 };
//	int result = solution(A);
//	cout << result;
//}