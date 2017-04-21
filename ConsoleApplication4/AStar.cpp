#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include "PriorityQueue.h"

using namespace std;

struct AStarQNode
{
	pair<int, int> position;
	double f, g, h;
};

bool operator==(const AStarQNode &lhs, const AStarQNode &rhs)
{
	return ((lhs.position.first == rhs.position.first) && (lhs.position.second == rhs.position.second));
}

//pair hashing function from Boost library
template <class T>
inline void hash_combine(std::size_t & seed, const T & v)
{
	std::hash<T> hasher;
	seed ^= hasher(v) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

struct pair_hash
{
	template <class S, class T>
	size_t operator() (const pair<S, T> &v) const
	{
		size_t seed = 0;
		hash_combine(seed, v.first);
		hash_combine(seed, v.second);
		return seed;
	}
};

double heuristic(pair<int, int> start, pair<int, int> end)
{
	return abs(start.first - end.first) + abs(start.second - end.second);
}

vector<pair<int,int>> getNeighbours(vector<vector<double>> &maze, pair<int,int> position)
{
	vector<pair<int, int>> neighbours;
	if (position.first > 0 && maze[position.first - 1][position.second] != -1)
		neighbours.push_back(make_pair(position.first - 1, position.second));
	if (position.first < 9 && maze[position.first + 1][position.second] != -1)
		neighbours.push_back(make_pair(position.first + 1, position.second));
	if (position.second > 0 && maze[position.first][position.second - 1] != -1)
		neighbours.push_back(make_pair(position.first, position.second - 1));
	if (position.second < 9 && maze[position.first][position.second + 1] != -1)
		neighbours.push_back(make_pair(position.first, position.second + 1));
	return neighbours;
}

void AStar(vector<vector<double>> &maze, pair<int, int> start, pair<int, int> goal, vector<vector<pair<int, int>>> &result)
{
	PriorityQueue<AStarQNode> openQueue;
	//unordered_map<pair<int, int>, double, pair_hash> closedSet;
	vector<vector<int>> inList(maze.size(), vector<int>(maze[0].size(), INT_MAX)); //store priority so far
	AStarQNode startNode{ start, 0, 0, 0 };
	openQueue.insert(startNode, 0);

	while (!openQueue.empty())
	{
		AStarQNode qNode = openQueue.getHighestPriorityNode();
		if (qNode.position == goal)
		{
			cout << "goal found" << endl;
			return;
		}
		openQueue.extract();

		vector<pair<int, int>> neighbours = getNeighbours(maze, qNode.position);
		for (int i = 0; i < neighbours.size(); ++i)
		{
			pair<int, int> p = neighbours[i];
			AStarQNode node;

			double cost = qNode.g + maze[p.first][p.second];
			node.position = p;
			node.g = cost;
			node.h = heuristic(p, goal);
			node.f = node.g + node.h;

			if (node.f >= inList[p.first][p.second])
				continue;

			openQueue.insert(node, node.f);
			inList[p.first][p.second] = node.f;
			result[p.first][p.second] = qNode.position;
		}
		//closedSet.insert(make_pair(qNode.position, qNode.f));
		inList[qNode.position.first][qNode.position.second] = qNode.f;
	}
	cout << "no paths found" << endl;
}

int main()
{
	vector<vector<double>> maze = { 
		{ 1, 1, 1, 1, 1,-1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1,-1, 1, 1,-1, 1 },
		{ 1, 1, 1, 1, 1,-1, 1,-1, 1, 1 },
		{-1,-1,-1,-1, 1,-1, 1,-1, 1, 1 },
		{ 1, 1, 1, 1, 1,-1, 1,-1, 1, 1 },
		{ 1,-1,-1,-1,-1,-1, 1,-1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1,-1, 1, 1 },
		{ 1, 1, 1,-1, 1, 1, 1,-1, 1, 1 },
		{ 1, 1, 1,-1, 1, 1, 1,-1, 1, 1 },
		{ 1, 1, 1,-1, 1, 1, 1,-1, 1, 1 }
	};

	pair<int, int> start = make_pair(0, 0); //pair(y,x)
	pair<int, int> goal = make_pair(9, 9);

	vector<vector<pair<int, int>>> result(10,vector<pair<int,int>>(10, make_pair(-1,-1)));
	AStar(maze, start, goal, result);

	while (start != goal)
	{
		maze[goal.first][goal.second] = 0;
		goal = result[goal.first][goal.second];
	}
	maze[start.first][start.second] = 0;

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (maze[i][j] == -1)
				cout << "x ";
			else
				cout << maze[i][j] << " ";
		}
		cout << endl;
	}

	return 1;
}