//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
//	// write your code in C++11 (g++ 4.8.2)
//	vector<int> vec(N + 1, 0);
//	vector<long> primes;
//
//	for (int i = 2; i < vec.size(); ++i)
//	{
//		if (vec[i] != -1)
//		{
//			int index = i * 2;
//			while (index <= N)
//			{
//				vec[index] = -1;
//				index += i;
//			}
//		}
//	}
//	for (int j = 2; j < vec.size(); ++j)
//	{
//		if (vec[j] != -1)
//			primes.push_back(j);
//		vec[j] = 0;
//	}
//
//	for (int k = 0; k < primes.size(); ++k)
//	{
//		for (int l = k; l < primes.size(); ++l)
//		{
//			if (primes[k] * primes[l] <= N)
//				vec[primes[k] * primes[l]] = 1;
//		}
//	}
//
//	int semiPrimeCount = 0;
//	for (int n = 2; n <= N; ++n)
//	{
//		if (vec[n] == 1)
//		{
//			semiPrimeCount += 1;
//		}
//		vec[n] = semiPrimeCount;
//	}
//
//	vector<int> result;
//
//	for (int m = 0; m < P.size(); ++m)
//	{
//		int count = vec[Q[m]] - vec[P[m] - 1];
//		result.push_back(count);
//	}
//
//	return result;
//}