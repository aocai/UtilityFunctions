//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int solution(int N, string &S, string &T)
//{
//	//A-Z = 65-90
//	int half = N / 2;
//	int nw = half*half;
//	int ne = nw;
//	int sw = nw;
//	int se = nw;
//	int i = 0;
//	while (i < S.length())
//	{
//		int len = 0;
//		//32 = space
//		while (i + len + 1 < S.length() && S[i + len + 1] != 32)
//		{
//			len += 1;
//		}
//		if (stoi(S.substr(i, len)) <= half)
//		{
//			if (S[i + len] < 65 + half)
//				nw -= 1;
//			else
//				ne -= 1;
//		}
//		else
//		{
//			if (S[i + len] < 65 + half)
//				sw -= 1;
//			else
//				se -= 1;
//		}
//		i = i + len + 1;
//	}
//
//	int d_nw = 0;
//	int d_ne = 0;
//	int d_sw = 0;
//	int d_se = 0;
//	int j = 0;
//	while (j < T.length())
//	{
//		int len = 0;
//		while (j + len + 1 < T.length() && T[j + len + 1] != 32)
//		{
//			len += 1;
//		}
//		if (stoi(T.substr(j, len)) <= half)
//		{
//			if (T[j + len] < 65 + half)
//				d_nw += 1;
//			else
//				d_ne += 1;
//		}
//		else
//		{
//			if (T[j + len] < 65 + half)
//				d_sw += 1;
//			else
//				d_se += 1;
//		}
//		j = j + len + 1;
//	}
//
//	if ((d_nw > se) || (d_ne > sw) || (d_sw > ne) || (d_se > nw))
//	{
//		return -1;
//	}
//
//	int minHalves = min(min(nw + ne, sw + se), min(nw + sw, ne + se));
//
//	return 2 * minHalves - (d_nw + d_ne + d_sw + d_se);
//}
//
//int main()
//{
//	int N = 4;
//	string S = "1B 1C 4B 1D 2A";
//	string T = "3B 2D";
//	int result = solution(N, S, T);
//	cout << result;
//}