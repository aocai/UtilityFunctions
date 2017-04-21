//#include <string>
//#include <iostream>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <list>
//#include <ctime>
//#include <algorithm>
//
//using namespace std;
//
//////rotate a 2D vector 90 degrees clockwise
////void rotate(vector<vector<int>> &matrix, int N)
////{
////	for (int layer = 0; layer < N / 2; ++layer)
////	{
////		for (int i = layer; i < N - 1 - layer; ++i)
////		{
////			int temp;
////			temp = matrix[layer][i];
////			matrix[layer][i] = matrix[N - 1 - i][layer];
////			matrix[N - 1 - i][layer] = matrix[N - 1 - layer][N - 1 - i];
////			matrix[N - 1 - layer][N - 1 - i] = matrix[i][N - 1 - layer];
////			matrix[i][N - 1 - layer] = temp;
////		}
////	}
////}
////
//////helper for stackSort
////void stackSortRecursive(int i, stack<int> &t)
////{
////	if (t.empty() || t.top() <= i)
////	{
////		t.push(i);
////		return;
////	}
////	int top;
////	if (t.top() > i)
////	{
////		top = t.top();
////		t.pop();
////		stackSortRecursive(i, t);
////	}
////	t.push(top);
////}
////
//////sort a stack using only one extra stack
////void stackSort(stack<int> &s)
////{
////	stack<int> t;
////	while (!s.empty())
////	{
////		int i = s.top();
////		stackSortRecursive(i, t);
////		s.pop();
////	}
////	while (!t.empty())
////	{
////		cout << t.top() << " ";
////		t.pop();
////	}
////}
//
//struct BSTNode
//{
//	int value;
//	BSTNode *leftChild;
//	BSTNode *rightChild;
//};
//
//struct TreeNode
//{
//	int value;
//	TreeNode *leftChild;
//	TreeNode *rightChild;
//	TreeNode *parent;
//};
//
////helper for createrSortedBST
//BSTNode* BSTHelper(const vector<int> &arr, int start, int end)
//{
//	if (end < start)
//		return NULL;
//	int middle = (start + end) / 2;
//	BSTNode *node = new BSTNode;
//	node->value = arr[middle];
//	node->leftChild = BSTHelper(arr, start, middle - 1);
//	node->rightChild = BSTHelper(arr, middle + 1, end);
//	return node;
//}
//
////create a tree from sorted vector
//BSTNode* createSortedBST(const vector<int> &arr)
//{
//	return BSTHelper(arr, 0, arr.size() - 1);
//}
//
////helper for createTree
//TreeNode* createTreeHelper(const vector<int> &arr)
//{
//	int index = 0;
//	queue<TreeNode *> treeQueue;
//	TreeNode *root = new TreeNode();
//	root->value = arr[index++];
//	treeQueue.push(root);
//
//	while (index < arr.size())
//	{
//		TreeNode *left = new TreeNode();
//		left->value = arr[index];
//		left->parent = treeQueue.front();
//		treeQueue.front()->leftChild = left;
//		treeQueue.push(left);
//		index++;
//
//		if (index < arr.size())
//		{
//			TreeNode *right = new TreeNode();
//			right->value = arr[index];
//			right->parent = treeQueue.front();
//			treeQueue.front()->rightChild = right;
//			treeQueue.push(right);
//			index++;
//		}
//		treeQueue.pop();
//	}
//	return root;
//}
//
////create a tree (not BST) from a vector
//TreeNode* createTree(const vector<int> &arr)
//{
//	if (arr.size() == 0)
//		return NULL;
//
//	return createTreeHelper(arr);
//}
//
//void preorderTraversal(BSTNode *node)
//{
//	if (!node)
//		return;
//	cout << node->value << " ";
//	cout << "left child of node " << node->value << " is: ";
//	preorderTraversal(node->leftChild);
//	cout << "right child of node " << node->value << " is: ";
//	preorderTraversal(node->rightChild);
//}
//
//void inorderTraversal(BSTNode *node)
//{
//	if (!node)
//		return;
//	preorderTraversal(node->leftChild);
//	cout << node->value << " ";
//	preorderTraversal(node->rightChild);
//}
//
//void postorderTraversal(BSTNode *node)
//{
//	if (!node)
//		return;
//	preorderTraversal(node->leftChild);
//	preorderTraversal(node->rightChild);
//	cout << node->value << " ";
//}
//
//void preorderTraversal(TreeNode *node)
//{
//	if (!node)
//		return;
//	cout << node->value << " ";
//	preorderTraversal(node->leftChild);
//	preorderTraversal(node->rightChild);
//}
//
//void inorderTraversal(TreeNode *node)
//{
//	if (!node)
//		return;
//	preorderTraversal(node->leftChild);
//	cout << node->value << " ";
//	preorderTraversal(node->rightChild);
//}
//
//void postorderTraversal(TreeNode *node)
//{
//	if (!node)
//		return;
//	preorderTraversal(node->leftChild);
//	preorderTraversal(node->rightChild);
//	cout << node->value << " ";
//}
//
////helper for BSTLevelLinkedList
//void BSTLevelLinkedListHelper(BSTNode *node, vector<list<BSTNode *>> &result, int level)
//{
//	if (!node)
//		return;
//	if (level >= result.size())
//	{
//		list<BSTNode *> newList;
//		result.push_back(newList);
//	}
//	result[level].push_back(node);
//	BSTLevelLinkedListHelper(node->leftChild, result, level + 1);
//	BSTLevelLinkedListHelper(node->rightChild, result, level + 1);
//}
//
////create linkedlist level by level from tree
//vector<list<BSTNode *>> BSTLevelLinkedList(BSTNode *node)
//{
//	vector<list<BSTNode *>> result;
//	BSTLevelLinkedListHelper(node, result, 0);
//	return result;
//}
//
////print the tree
//void printBSTLinkedList(vector< list<BSTNode *>> l)
//{
//	for (int i = 0; i < l.size(); ++i)
//	{
//		for (BSTNode * node : l[i])
//		{
//			cout << node->value << " ";
//		}
//		cout << endl;
//	}
//}
//
////helper for BSTLevelLinkedList
//void TreeLevelLinkedListHelper(TreeNode *node, vector<list<TreeNode *>> &result, int level)
//{
//	if (!node)
//		return;
//	if (level >= result.size())
//	{
//		list<TreeNode *> newList;
//		result.push_back(newList);
//	}
//	result[level].push_back(node);
//	TreeLevelLinkedListHelper(node->leftChild, result, level + 1);
//	TreeLevelLinkedListHelper(node->rightChild, result, level + 1);
//}
//
////create linkedlist level by level from tree
//vector<list<TreeNode *>> TreeLevelLinkedList(TreeNode *node)
//{
//	vector<list<TreeNode *>> result;
//	TreeLevelLinkedListHelper(node, result, 0);
//	return result;
//}
//
////print the tree
//void printTreeLinkedList(vector< list<TreeNode *>> l)
//{
//	for (int i = 0; i < l.size(); ++i)
//	{
//		for (TreeNode * node : l[i])
//		{
//			cout << node->value << " ";
//		}
//		cout << endl;
//	}
//}
//
////helper for checkBST
//bool checkBSTHelper(BSTNode *node, int &lastValue)
//{
//	if (!node)
//		return true;
//	if (!checkBSTHelper(node->leftChild, lastValue))
//		return false;
//	if (node->value < lastValue)
//	{
//		cout << "not a BST!" << endl;
//		return false;
//	}
//	lastValue = node->value;
//	if (!checkBSTHelper(node->rightChild, lastValue))
//		return false;
//	return true;
//}
////check if tree is BST
//bool checkBST(BSTNode *node)
//{
//	int lastValue = INT_MIN;
//	if (checkBSTHelper(node, lastValue))
//	{
//		cout << "Input tree is a BST!";
//		return true;
//	}
//	cout << "Input tree is not a BST!";
//	return false;
//}
//
////helper for checkBST2
//bool checkBST2Helper(BSTNode *node, int &leftMax, int &rightMin)
//{
//	if (!node)
//		return true;
//	if (node->value < leftMax || node->value >= rightMin)
//		return false;
//	if (!checkBST2Helper(node->leftChild, leftMax, node->value))
//		return false;
//	if (!checkBST2Helper(node->rightChild, node->value, rightMin))
//		return false;
//	return true;
//}
////check if tree is BST
//bool checkBST2(BSTNode *node)
//{
//	int leftMax = INT_MIN;
//	int rightMin = INT_MAX;
//	if (checkBST2Helper(node, leftMax, rightMin))
//	{
//		cout << "Input tree is a BST!";
//		return true;
//	}
//	cout << "Input tree is not a BST!";
//	return false;
//}
//
////get the next node (in-order)
//TreeNode* nextNode(TreeNode *node)
//{
//	if (!node)
//		return NULL;
//
//	if (node->rightChild)
//	{
//		TreeNode *child = node->rightChild;
//		while (child->leftChild)
//		{
//			cout << "old child = " << child->value << " ";
//			child = child->leftChild;
//		}
//		return child;
//	}
//	else
//	{
//		TreeNode *parent = node;
//		while (parent->parent && parent->leftChild != node)
//		{
//			parent = parent->parent;
//		}
//		return parent; // could be null
//	}
//}
//
//bool covers(TreeNode *n1, TreeNode *n2)
//{
//	if (n1 == NULL)
//		return false;
//	if (n1 == n2)
//		return true;
//	return (covers(n1->leftChild, n2) || covers(n1->rightChild, n2));
//}
//
////return most common ancestor given 2 nodes with parent pointers
//TreeNode* mostCommonAncestor(TreeNode *n1, TreeNode *n2)
//{
//	if (!n1)
//		return n2;
//	if (!n2)
//		return n1;
//	if (n1 == n2 || covers(n1->leftChild, n2) || covers(n1->rightChild, n2))
//		return n1;
//	while (n1->parent)
//	{
//		if (n1->parent->rightChild == n1)
//		{
//			if (covers(n1->parent->leftChild, n2))
//			{
//				return n1->parent;
//			}
//		}
//		else
//		{
//			if (covers(n1->parent->rightChild, n2))
//			{
//				return n1->parent;
//			}
//		}
//		n1 = n1->parent;
//	}
//	return n1;
//}
//
//bool covers(BSTNode *n1, BSTNode *n2)
//{
//	if (!n1)
//		return false;
//	if (n1 == n2)
//		return true;
//	return (covers(n1->leftChild, n2) || covers(n1->rightChild, n2));
//}
//
////helper for mostCommonAncestor without parent pointers
//BSTNode* mostCommonAncestorHelper(BSTNode *root, BSTNode *n1, BSTNode *n2)
//{
//	if (!root)
//		return NULL;
//	if (root == n1 || root == n2)
//		return root;
//
//	bool n1Left = covers(root->leftChild, n1);
//	bool n2Left = covers(root->leftChild, n2);
//
//	if (n1Left == n2Left)
//		mostCommonAncestorHelper(n1Left ? root->leftChild : root->rightChild, n1, n2);
//	else
//		return root;
//}
//
////return most common ancestor given 2 nodes without parent pointers
//BSTNode* mostCommonAncestor(BSTNode *root, BSTNode *n1, BSTNode *n2)
//{
//	if (!root)
//		return NULL;
//	if (!n1 || n1 == n2)
//		return n2;
//	if (!n2)
//		return n1;
//	return mostCommonAncestorHelper(root, n1, n2);
//}
//
////helper function for pathSum
//void pathSumHelper(BSTNode *node, int sum, vector<int> &path, int level)
//{
//	if (!node)
//		return;
//
//	if (level >= path.size())
//		path.push_back(node->value);
//	else
//		path[level] = node->value;
//
//	int tempSum = 0;
//	for (int i = level; i >= 0; --i)
//	{
//		tempSum += path[i];
//		if (tempSum == sum)
//		{
//			cout << "path found! From: " << path[i];
//			for (int j = i + 1; j <= level; ++j)
//			{
//				cout << "-> " << path[j];
//			}
//			cout << endl;
//		}
//	}
//	pathSumHelper(node->leftChild, sum, path, level + 1);
//	pathSumHelper(node->rightChild, sum, path, level + 1);
//}
//
////given a tree, find if theres a path in the tree with value equal to sum
//void pathSum(BSTNode *root, int sum)
//{
//	if (!root)
//		return;
//
//	vector<int> path;
//	pathSumHelper(root, sum, path, 0);
//}
//
////print a binary representation of an integer recursively
//void printBinary(int i)
//{
//	if (i / 2 != 0)
//	{
//		printBinary(i / 2);
//	}
//	cout << i % 2;
//}
//
////print a binary representation of a double between 0 and 1
//string printBinary(double d)
//{
//	string str;
//	if (d == 0)
//	{
//		str.append("0");
//		return str;
//	}
//	str.append("0.");
//	while (d > 0)
//	{
//		if (str.length() >= 32)
//			return "ERROR";
//		d *= 2;
//		if (d >= 1)
//		{
//			str.append("1");
//			d -= 1;
//		}
//		else
//			str.append("0");
//	}
//	return str;
//}
//
////insert M into N from index i to j where i < j
//int bitInsert(int N, int M, int i, int j)
//{
//	cout << "N : ";
//	printBinary(N);
//	cout << endl;
//
//	cout << "M : ";
//	printBinary(M);
//	cout << endl;
//
//	int x = (~0) << j;
//	int y = ~((~0) << i);
//	int mask = x | y;
//
//	int newN = N & mask;
//	int newM = M << i;
//
//	int ret = newN | newM;
//	cout << "Result : ";
//	printBinary(ret);
//	cout << endl;
//
//	return ret;
//}
//
//bool isNumber(string s) {
//	if (s.length() == 0)
//		return false;
//
//	int index = 0;
//	while (s[index] == ' ')
//		index++;
//	if (s[index] == 'e')
//		return false;
//
//	int specialIndex = -1;
//	int containDigits = 0;
//	for (index; index < s.length() && s[index] != ' '; ++index)
//	{
//		if (specialIndex == -1 && (s[index] == '.' || s[index] == 'e'))
//		{
//			specialIndex = index;
//			continue;
//		}
//		if (s[index] >= '0' && s[index] <= '9')
//		{
//			containDigits = 1;
//			continue;
//		}
//		return false;
//	}
//	if (specialIndex != -1 && s[index - 1] == 'e')
//		return false;
//	if (index != s.length())
//	{
//		while (s[index] == ' ')
//			index++;
//		if (index != s.length())
//			return false;
//	}
//	if (!containDigits)
//		return false;
//	return true;
//}
//
//int main()
//{
//	vector<int> arr(100, 0);
//	for (int i = 0; i < 100; ++i)
//	{
//		arr[i] = i;
//	}
//	sort(arr.begin(), arr.end());
//	//for (int i = 0; i < arr.size(); ++i)
//	//{
//	//	cout << arr[i] << " ";
//	//}
//	//cout << endl;
//
//	BSTNode *root = createSortedBST(arr);
//	TreeNode *root2 = createTree(arr);
//
//	//preorderTraversal(root);
//	//inorderTraversal(root);
//	//postorderTraversal(root);
//
//	//checkBST(root);
//	//checkBST2(root);
//
//	//vector<list<BSTNode *>> result = BSTLevelLinkedList(root);
//	//printBSTLinkedList(result);
//
//	//vector<list<TreeNode *>> result2 = TreeLevelLinkedList(root2);
//	//printTreeLinkedList(result2);
//
//	if (isNumber("3."))
//	{
//		cout << "number";
//	}
//	else
//		cout << "not number";
//}