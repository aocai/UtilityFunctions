//#include <math.h>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int shittySolution(vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//	vector<int> peaks;
//	for (int i = 1; i < A.size() - 1; ++i)
//	{
//		if (A[i] > A[i - 1] && A[i] > A[i + 1])
//		{
//			peaks.push_back(i);
//			i += 1;
//		}
//	}
//
//	if (peaks.size() == 0)
//		return 0;
//
//	int j = 1;
//	vector<int> segments;
//	while (j*j < A.size() && j <= peaks.size())
//	{
//		if (A.size() % j == 0)
//		{
//			segments.push_back(j);
//			segments.push_back(A.size() / j);
//		}
//		j += 1;
//	}
//	if (j*j == A.size())
//	{
//		segments.push_back(j);
//	}
//
//	int maxSeg = 0;
//	for (int k = 0; k < segments.size(); ++k)
//	{
//		int flag;
//		for (int l = 0; l < segments[k]; ++l)
//		{
//			flag = 0;
//			int begin = l*(A.size() / segments[k]);
//			int end = begin + (A.size() / segments[k]);
//
//			for (int m = 0; m < peaks.size(); ++m)
//			{
//				if (begin <= peaks[m] && end > peaks[m])
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (!flag)
//			{
//				break;
//			}
//
//		}
//		if (flag)
//		{
//			maxSeg = max(maxSeg, segments[k]);
//		}
//	}
//	return maxSeg;
//}
//
//
//int betterSolution(vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//	vector<int> peaks;
//	for (int i = 1; i < A.size() - 1; ++i)
//	{
//		if (A[i] > A[i - 1] && A[i] > A[i + 1])
//		{
//			peaks.push_back(i);
//			i += 1;
//		}
//	}
//
//	if (peaks.size() == 0)
//		return 0;
//
//	int j = 1;
//	vector<int> segments;
//	while (j*j < A.size() && j <= peaks.size())
//	{
//		if (A.size() % j == 0)
//		{
//			segments.push_back(j);
//			segments.push_back(A.size() / j);
//		}
//		j += 1;
//	}
//	if (j*j == A.size())
//	{
//		segments.push_back(j);
//	}
//
//	int maxSeg = 0;
//	for (int i = 0; i < segments.size(); ++i)
//	{
//		int flag;
//		for (int j = 0; j < segments[i]; ++j)
//		{
//			flag = 0;
//			int begin = j*(A.size() / segments[i]);
//			int end = begin + (A.size() / segments[i]);
//			for (int k = ((j == 0) ? begin + 1 : begin); k < ((j == segments[i] - 1) ? end - 1 : end); ++k)
//			{
//				if (A[k] > A[k - 1] && A[k] > A[k + 1])
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (!flag)
//			{
//				break;
//			}
//		}
//		if (flag)
//		{
//			maxSeg = max(maxSeg, segments[i]);
//		}
//	}
//	return maxSeg;
//}