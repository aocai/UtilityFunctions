//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include "PriorityQueue.h"
//
//using namespace std;
//
//struct dijkQNode
//{
//	int x, y;
//};
//
//bool operator==(const dijkQNode &lhs, const dijkQNode &rhs)
//{
//	return ((lhs.x == rhs.x) && (lhs.y == rhs.y));
//}
//
//vector<pair<int, int>> getNeighbours(const vector<vector<double>> &maze, int x, int y)
//{
//	vector<pair<int, int>> neighbours;
//	if (x > 0 && maze[x - 1][y] != -1)
//		neighbours.push_back(make_pair(x - 1, y));
//	if (x < maze[0].size() - 1 && maze[x + 1][y] != -1)
//		neighbours.push_back(make_pair(x + 1, y));
//	if (y > 0 && maze[x][y - 1] != -1)
//		neighbours.push_back(make_pair(x, y - 1));
//	if (y < maze.size() - 1 && maze[x][y + 1] != -1)
//		neighbours.push_back(make_pair(x, y + 1));
//	return neighbours;
//}
//
//void dijkstraHelperWithInsert(vector<vector<double>> &maze, PriorityQueue<dijkQNode> &pQueue, int x, int y, int x2, int y2)
//{
//	//a work 2D vector which doubles as a visited vector
//	vector<vector<double>> workMaze(maze.size(), vector<double>(maze[0].size(), DBL_MAX));
//	workMaze[x][y] = 0;
//
//	//vector to store the result
//	vector<vector<pair<int, int>>> cameFrom(maze.size(), vector<pair<int, int>>(maze[0].size(), { -1,-1 }));
//
//	while (!pQueue.empty())
//	{
//		//get closest
//		double prio = pQueue.getHighestPriority();
//		dijkQNode qNode = pQueue.getHighestPriorityNode();
//		pQueue.extract();
//
//		//skip current node if old or already visited
//		if (prio > workMaze[qNode.x][qNode.y])
//			continue;
//
//		//this is the goal node or no path available
//		if ((qNode.x == 9 && qNode.y == 9) || prio == DBL_MAX)
//		{
//			//print the result
//			if (qNode.x == x2 && qNode.y == y2)
//			{
//				cout << "Goal found! Total cost = " << workMaze[9][9] << endl;
//				cout << x2 << "," << y2;
//				while (cameFrom[x2][y2].first != -1)
//				{
//					workMaze[x2][y2] = 0;
//					cout << " <- " << cameFrom[x2][y2].first << "," << cameFrom[x2][y2].second;
//					int newX = cameFrom[x2][y2].first;
//					int newY = cameFrom[x2][y2].second;
//					x2 = newX;
//					y2 = newY;
//				}
//				cout << endl;
//				for (int i = 0; i < 10; ++i)
//				{
//					for (int j = 0; j < 10; ++j)
//					{
//						if (workMaze[i][j] == DBL_MAX)
//							cout << "X ";
//						else if (workMaze[i][j] == 0)
//							cout << "@ ";
//						else
//							cout << "X ";
//					}
//					cout << endl;
//				}
//			}
//			return;
//		}
//
//		//get neighbours of current node
//		vector<pair<int, int>> neighbours = getNeighbours(maze, qNode.x, qNode.y);
//		for (int i = 0; i < neighbours.size(); ++i)
//		{
//			int nX = neighbours[i].first;
//			int nY = neighbours[i].second;
//			
//			//calculate new cost
//			double cost = workMaze[qNode.x][qNode.y] + maze[nX][nY];
//			
//			//if new lower cost is found, update the work vector and insert a new node into queue with lower cost
//			if (cost < workMaze[nX][nY])
//			{
//				workMaze[nX][nY] = cost;
//				pQueue.insert(dijkQNode{ nX, nY }, cost);
//				cameFrom[nX][nY] = { qNode.x, qNode.y };
//			}
//		}
//	}
//}
//
//void dijkstraWithInsert(vector<vector<double>> &maze, int x, int y, int x2, int y2)
//{
//	PriorityQueue<dijkQNode> pQueue = PriorityQueue<dijkQNode>();
//	
//	//insert the source node
//	pQueue.insert(dijkQNode{ x, y }, 0);
//
//	dijkstraHelperWithInsert(maze, pQueue, x, y, x2, y2);
//}
//
//void dijkstraHelperWithDecreasePriority(vector<vector<double>> &maze, PriorityQueue<dijkQNode> &pQueue, int x, int y, int x2, int y2)
//{
//	//a work 2D vector which doubles as a visited vector
//	vector<vector<double>> workMaze(maze.size(), vector<double>(maze[0].size(), DBL_MAX));
//	workMaze[x][y] = 0;
//
//	//store the result
//	vector<vector<pair<int, int>>> cameFrom(maze.size(), vector<pair<int, int>>(maze[0].size(), { -1,-1 }));
//
//	while (!pQueue.empty())
//	{
//		//get closest
//		double prio = pQueue.getHighestPriority();
//		dijkQNode qNode = pQueue.getHighestPriorityNode();
//		pQueue.extract();
//
//		//this is the goal node or no path available
//		if ((qNode.x == x2 && qNode.y == y2) || prio == DBL_MAX)
//		{
//			//print the result
//			if (qNode.x == x2 && qNode.y == y2)
//			{
//				cout << "Goal found! Total cost = " << workMaze[9][9] << endl;
//				cout << x2 << "," << y2;
//				while (cameFrom[x2][y2].first != -1)
//				{
//					workMaze[x2][y2] = 0;
//					cout << " <- " << cameFrom[x2][y2].first << "," << cameFrom[x2][y2].second;
//					int newX = cameFrom[x2][y2].first;
//					int newY = cameFrom[x2][y2].second;
//					x2 = newX;
//					y2 = newY;
//				}
//				cout << endl;
//				for (int i = 0; i < 10; ++i)
//				{
//					for (int j = 0; j < 10; ++j)
//					{
//						if (workMaze[i][j] == DBL_MAX)
//							cout << "X ";
//						else if (workMaze[i][j] == 0)
//							cout << "@ ";
//						else
//							cout << "X ";
//					}
//					cout << endl;
//				}
//			}
//			return;
//		}
//
//		//get the neighbours of current node
//		vector<pair<int, int>> neighbours = getNeighbours(maze, qNode.x, qNode.y);
//		for (int i = 0; i < neighbours.size(); ++i)
//		{
//			int nX = neighbours[i].first;
//			int nY = neighbours[i].second;
//
//			//calculate new cost
//			double cost = workMaze[qNode.x][qNode.y] + maze[nX][nY];
//
//			//if a new lower cost is found, update the work vector and queue
//			if (cost < workMaze[nX][nY])
//			{
//				workMaze[nX][nY] = cost;
//				pQueue.decreasePriority(dijkQNode{ nX, nY }, cost);
//				cameFrom[nX][nY] = {qNode.x, qNode.y};
//			}
//		}
//	}
//}
//
//void dijkstraWithDecreasePriority(vector<vector<double>> &maze, int x, int y, int x2, int y2)
//{
//	PriorityQueue<dijkQNode> pQueue = PriorityQueue<dijkQNode>();
//
//	//insert all reachable nodes with priority of infinity(sort of)
//	for (int i = 0; i < maze.size(); ++i)
//	{
//		for (int j = 0; j < maze[i].size(); ++j)
//		{
//			if (maze[i][j] != -1)
//			{
//				dijkQNode qNode = { i, j };
//				pQueue.insert(qNode, DBL_MAX);
//			}
//		}
//	}
//	pQueue.insert(dijkQNode{ x, y }, 0);
//	dijkstraHelperWithDecreasePriority(maze, pQueue, x, y, x2, y2);
//}
//
//int main()
//{
//	vector<vector<double>> maze = {
//		{ 1, 3, 1, 2, 1,-1, 2, 2, 1, 1 },
//		{ 2, 5, 1, 2, 1,-1, 1, 9,-1, 3 },
//		{ 1, 1, 2, 5, 2,-1, 1,-1, 1, 1 },
//		{-1,-1,-1,-1, 1,-1, 6,-1, 1, 3 },
//		{ 1, 3, 2, 2, 1,-1, 3,-1, 1, 4 },
//		{ 2,-1,-1,-1,-1,-1, 1,-1, 1, 1 },
//		{ 1, 9, 1, 2, 2, 5, 1,-1, 4, 1 },
//		{ 2, 4, 1,-1, 2, 1, 2,-1, 1, 1 },
//		{ 1, 1, 1,-1, 1, 3, 1,-1, 2, 8 },
//		{ 1, 3, 1,-1, 1, 3, 1,-1, 3, 1 }
//	};
//
//	dijkstraWithInsert(maze, 0, 0, 9, 9);
//	//dijkstraWithDecreasePriority(maze, 0, 0, 9, 9);
//
//	return 1;
//}