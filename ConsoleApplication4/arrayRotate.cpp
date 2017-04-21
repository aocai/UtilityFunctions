//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//std::vector<int> arrayRotate(std::vector<int> &A, int K) {
//	// write your code in C++11 (g++ 4.8.2)
//
//	unsigned int index = 0;
//	unsigned int i = 0;
//	unsigned int k = 0;
//	while (i < A.size())
//	{
//		unsigned int kBounded;
//		kBounded = (index + K) % A.size();
//		std::swap(A[k], A[kBounded]);
//		index = kBounded;
//		if (kBounded == k)
//		{
//			kBounded++;
//			index++;
//			k++;
//		}
//		++i;
//		for (int i = 0; i < A.size(); ++i)
//		{
//			std::cout << A[i] << " ";
//		}
//		std::cout << std::endl;
//	}
//	return A;
//}