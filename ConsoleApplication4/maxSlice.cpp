//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//int maximumSlice(std::vector<int> input)
//{
//	int currentMax;
//	int sum = 0;
//	for (int i = 0; i < input.size(); ++i)
//	{
//		if (sum + input[i] > 0)
//		{
//			sum += input[i];
//			currentMax = std::max(currentMax, sum);
//		}
//		else
//		{
//			sum = 0;
//		}
//	}
//	return currentMax;
//}
//
//int dynamicMaximumSlice(std::vector<int> input)
//{
//	int maxEnding = 0;
//	int maxSlice = 0;
//	for (int i = 0; i < input.size(); ++i)
//	{
//		maxEnding = std::max(0, maxEnding + input[i]);
//		maxSlice = std::max(maxSlice, maxEnding);
//	}
//	return maxSlice;
//}
//
//
//void main()
//{
//	std::vector<int> inputVector;
//	for (int i = 0; i < 1000; ++i)
//	{
//		inputVector.push_back(rand() % 6000 - 3000);
//	}
//	int result = maximumSlice(inputVector);
//	int dynamicResult = dynamicMaximumSlice(inputVector);
//	std::cout << result << " " << dynamicResult;
//}