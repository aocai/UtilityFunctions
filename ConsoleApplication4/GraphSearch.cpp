//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <unordered_set>
//#include "linkedList.h"
//#include "PriorityQueue.h"
//
//using namespace std;
//
//struct resultNode
//{
//	resultNode *prev;
//	int index;
//};
//
//
//bool depthFirstSearchHelper(vector<linkedList<double>> &adjacencyList, vector<int> &searchedNodes, int position, int goal, stack<int> &depthResult)
//{
//	if (searchedNodes[position])
//		return false;
//	if (position == goal)
//	{
//		return true;
//	}
//	else
//	{
//		searchedNodes[position] = 1;
//		linkedNode<double> *head = adjacencyList[position].getRoot();
//		while (head->next)
//		{
//			if (searchedNodes[head->next->index])
//			{
//				head = head->next;
//				continue;
//			}
//			else
//			{
//				if (depthFirstSearchHelper(adjacencyList, searchedNodes, head->next->index, goal, depthResult))
//				{
//					depthResult.push(head->next->index);
//					return true;
//				}
//				else
//					head = head->next;
//			}
//		}
//	}
//	return false;
//}
//
//bool depthFirstSearch(vector<linkedList<double>> &adjacencyList, int position, int goal, stack<int> &depthResult)
//{
//	vector<int> searchedNodes(adjacencyList.size(), 0);
//	bool result = depthFirstSearchHelper(adjacencyList, searchedNodes, position, goal, depthResult);
//	if (result)
//	{
//		depthResult.push(position);
//		return true;
//	}
//	return false;
//}
//
//bool breadthFirstSearch(vector<linkedList<double>> &adjacencyList, int position, int goal, stack<int> &breadthResult)
//{
//	vector<int> searchedNodes(adjacencyList.size(), 0);
//	queue<resultNode *> todoQueue;
//	queue<resultNode *> doneQueue;
//	
//	resultNode *node = new resultNode{ NULL, position };
//	todoQueue.push(node);
//	while (!todoQueue.empty())
//	{
//		resultNode *node = todoQueue.front();
//		searchedNodes[node->index] = 1;
//		if (node->index == goal)
//		{
//			while (node)
//			{
//				breadthResult.push(node->index);
//				node = node->prev;
//			}
//			while (!todoQueue.empty())
//			{
//				delete todoQueue.front();
//				todoQueue.pop();
//			}
//			while (!doneQueue.empty())
//			{
//				delete doneQueue.front();
//				doneQueue.pop();
//			}
//			return true;
//		}
//		linkedNode<double> *curNode = adjacencyList[node->index].getRoot()->next;
//		while (curNode)
//		{
//			if (!searchedNodes[curNode->index])
//			{
//				resultNode *newNode = new resultNode{ node, curNode->index };
//				todoQueue.push(newNode);
//			}
//			curNode = curNode->next;
//		}
//		doneQueue.push(todoQueue.front());
//		todoQueue.pop();
//	}
//	while (!todoQueue.empty())
//	{
//		delete todoQueue.front();
//		todoQueue.pop();
//	}
//	while (!doneQueue.empty())
//	{
//		delete doneQueue.front();
//		doneQueue.pop();
//	}
//	return false;
//}
//
//
//int main()
//{
//	vector<vector<double>> adjacencyMatrix(20, vector<double>(20));
//	for (int row = 0; row < adjacencyMatrix.size(); ++row)
//	{
//		for (int column = 0; column < adjacencyMatrix[row].size(); ++column)
//		{
//			if (row == column)
//				continue;
//			adjacencyMatrix[row][column] = rand() % 2 ? rand() % 10 : 0;
//		}
//	}
//
//	for (int row = 0; row < adjacencyMatrix.size(); ++row)
//	{
//		for (int column = 0; column < adjacencyMatrix[row].size(); ++column)
//		{
//			cout << adjacencyMatrix[row][column] << " ";
//		}
//		cout << endl;
//	}
//
//	vector<linkedList<double>> adjacencyList(20, linkedList<double>());
//	for (int row = 0; row < adjacencyMatrix.size(); ++row)
//	{
//		adjacencyList[row].add(row, 0);
//		for (int column = 0; column < adjacencyMatrix[row].size(); ++column)
//		{
//			if (adjacencyMatrix[row][column] != 0)
//			{
//				adjacencyList[row].add(column, adjacencyMatrix[row][column]);
//			}
//		}
//	}
//
//	for (int i = 0; i < 20; ++i)
//	{
//		adjacencyList[i].print();
//		cout << endl;
//	}
//
//	bool successful;
//
//	stack<int> depthResult;
//	successful = depthFirstSearch(adjacencyList, 0, 14, depthResult);
//	if (successful)
//	{
//		cout << "Depth First Search traversed through vertices : ";
//		while (!depthResult.empty())
//		{
//			cout << depthResult.top() << " ";
//			depthResult.pop();
//		}
//		cout << endl;
//	}
//
//	stack<int> breadthResult;
//	successful = breadthFirstSearch(adjacencyList, 0, 14, breadthResult);
//	if (successful)
//	{
//		cout << "Breadth First Search traversed through vertices : ";
//		while (!breadthResult.empty())
//		{
//			cout << " " << breadthResult.top();
//			breadthResult.pop();
//		}
//		cout << endl;
//	}
//
//	return 1;
//}