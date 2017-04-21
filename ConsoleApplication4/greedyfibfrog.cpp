//#include <vector>
//#include <unordered_map>
//#include <utility>
//#include <iostream>
//using namespace std;
//
//int finished = 0;
//int jumps = 0;
//
//void attemptJump(int position, vector<int> &leaves, unordered_map<int, bool> &fibHash)
//{
//	if (position == leaves.front())
//	{
//		finished = 1;
//	}
//	if (position < leaves.front())
//	{
//		for (int i = 0; i < leaves.size() && leaves[i] > position && !finished; ++i)
//		{
//			if (fibHash.find(leaves[i] - position) != fibHash.end())
//			{
//				jumps += 1;
//				attemptJump(leaves[i], leaves, fibHash);
//			}
//		}
//		if (jumps > 0 && !finished)
//		{
//			jumps -= 1;
//		}
//	}
//}
//
//void jump(int position, vector<int> &leaves, unordered_map<int, bool> &fibHash) {
//	attemptJump(position, leaves, fibHash);
//}
//
//int solution(vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//
//	vector<int> fibVector;
//	fibVector.push_back(0);
//	fibVector.push_back(1);
//	int i = 1;
//	while (fibVector[i] + fibVector[i - 1] <= 100000)
//	{
//		fibVector.push_back(fibVector[i] + fibVector[i - 1]);
//		++i;
//	}
//
//	unordered_map<int, bool> fibHash;
//	for (int i = 1; i < fibVector.size(); ++i)
//	{
//		fibHash.insert(make_pair(fibVector[i], true));
//	}
//
//
//	vector<int> leaves;
//	leaves.push_back(A.size());
//	for (int i = A.size() - 1; i >= 0; --i)
//	{
//		if (A[i] == 1)
//		{
//			leaves.push_back(i);
//		}
//	}
//
//	jump(-1, leaves, fibHash);
//
//	return jumps ? jumps : -1;
//}
//
//int main()
//{
//	vector<int> A = { 1,1,0,0,0 };
//	int result = solution(A);
//	cout << result;
//}