//#include <iostream>
//
//using namespace std;
//
//void show_moves(int n, char start_peg, char dest_peg, char temp_peg)
//{
//	if (n == 1)
//	{
//		cout << "Move disk 1 from peg " << start_peg << " to peg " << dest_peg << "\n";
//	}
//	else
//	{
//		show_moves(n - 1, start_peg, temp_peg, dest_peg);
//		cout << "Move disk " << n << " from peg " << start_peg << " to peg " << dest_peg << "\n";
//		show_moves(n - 1, temp_peg, dest_peg, start_peg);
//	}
//}
//
//
//int main()
//{
//	int n = 5;
//	char start_peg = 'L';
//	char dest_peg = 'R';
//	char temp_peg = 'M';
//	show_moves(n, start_peg, dest_peg, temp_peg);
//}