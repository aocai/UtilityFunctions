//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//int solution(std::vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//	int currentMax = 0;
//	int sum = 0;
//	int currentMin = A[1];
//	int index1, index2, index3;
//	int prevEnd = 0;
//
//	for (int i = 2; i < A.size() - 1; ++i)
//	{
//		if (sum + std::max(currentMin, A[i]) > 0)
//		{
//			if (currentMin > A[i])
//			{
//				sum += currentMin;
//				currentMin = A[i];
//				index2 = i;
//			}
//			else
//			{
//				sum += A[i];
//			}
//
//			if (sum > currentMax)
//			{
//				index1 = prevEnd + 1;
//				index3 = i;
//				currentMax = sum;
//			}
//		}
//		else {
//			prevEnd = i;
//			sum = 0;
//			currentMin = A[i+1];
//			i += 1;
//		}
//	}
//	if (index1 > 0)
//	{
//		index1 -= 1;
//	}
//	else
//	{
//		for (int i = 1; i < index2; ++i)
//		{
//			if (A[i] < 0)
//			{
//				index1 = i;
//			}
//			else
//				break;
//		}
//	}
//	if (index3 < A.size() - 1)
//	{
//		index3 += 1;
//	}
//	else {
//		for (int i = A.size() - 2; i > index2; --i)
//		{
//			if (A[i] < 0)
//			{
//				index3 = i;
//			}
//			else
//				break;
//		}
//	}
//}