//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int solution(string &S)
//{
//	//a-z = 97-122
//	//A-Z = 65-90
//	//0-9 = 48-57
//	int maxLen = 0;
//	for (int i = 0; i < S.length(); ++i)
//	{
//		int letters = 0;
//		int digits = 0;
//		int j = i;
//		int badString = 0;
//		while (j < S.length() && S[j] != 32)
//		{
//			if (S[j] < 48 || (S[j] < 65 && S[j] > 57) || (S[j] < 97 && S[j] >90) || S[j] > 122)
//			{
//				badString = 1;
//				while (j < S.length() && S[j] != 32)
//				{
//					++j;
//				}
//				break;
//			}
//			if ((S[j] >= 65 && S[j] <= 90) || (S[j] >= 97 && S[j] <= 122))
//			{
//				letters += 1;
//			}
//			else if (S[j] >= 48 && S[j] <= 57)
//			{
//				digits += 1;
//			}
//			++j;
//		}
//		if (!badString && letters % 2 == 0 && digits % 2 == 1)
//		{
//			maxLen = max(maxLen, j - i);
//		}
//		i = j;
//	}
//	return maxLen ? maxLen : -1;
//}
//
//int main()
//{
//	string S = "zxcasdqwe123";
//	int result = solution(S);
//	cout << result;
//}