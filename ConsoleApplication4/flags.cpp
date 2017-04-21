//#include <vector>
//#include <iostream>
//using namespace std;
//
//int goodPeaks(vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//	vector<int> peaks(A.size(), -1);
//	int nextPeak = -1;
//	int peakNumber = 0;
//	for (int i = A.size() - 2; i > 0; --i)
//	{
//		if (A[i] > A[i + 1] && A[i] > A[i - 1])
//		{
//			nextPeak = i;
//			peakNumber += 1;
//		}
//		peaks[i] = nextPeak;
//	}
//	peaks[0] = nextPeak;
//
//	if (peakNumber < 2)
//	{
//		return peakNumber;
//	}
//
//	int lastPeak;
//	for (int i = A.size() - 1; i >= 0; --i)
//	{
//		if (A[i] != -1)
//		{
//			lastPeak = i;
//			break;
//		}
//	}
//
//	int viablePeaks = peakNumber;
//	while (viablePeaks * (viablePeaks - 1) > lastPeak - peaks[0])
//	{
//		viablePeaks -= 1;
//	}
//	for (int j = viablePeaks; j >= 2; --j)
//	{
//		int flags = j;
//		int position = 0;
//		while (position < peaks.size() && peaks[position] != -1 && flags > 0)
//		{
//			flags -= 1;
//			position = peaks[position] + j;
//		}
//		if (flags == 0)
//		{
//			return j;
//		}
//	}
//	return -1;
//}
//
//int mehPeaks(vector<int> &A) {
//	// write your code in C++11 (g++ 4.8.2)
//	vector<int> peaks;
//	for (int i = 1; i < A.size() - 1; ++i)
//	{
//		if (A[i] > A[i - 1] && A[i] > A[i + 1])
//		{
//			peaks.push_back(i);
//		}
//	}
//	if (peaks.size() < 2)
//	{
//		return peaks.size();
//	}
//
//	int viablePeaks = peaks.size();
//	while (viablePeaks * (viablePeaks - 1) > peaks.back() - peaks.front())
//	{
//		viablePeaks -= 1;
//	}
//
//	for (int j = viablePeaks; j >= 2; --j)
//	{
//		int currentPeak = peaks[0];
//		int flags = j - 1;
//		for (int k = 1; k < peaks.size() && flags > 0; k++)
//		{
//			if (peaks[k] - currentPeak >= j)
//			{
//				flags -= 1;
//				currentPeak = peaks[k];
//			}
//		}
//		if (flags == 0)
//		{
//			return j;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	vector<int> input = { 0,0,0,0,0,1,0,1,0,1 };
//	int result = goodPeaks(input);
//	std::cout << result;
//}