#include <iostream>

using namespace std;
#define MAX 13

bool chess_board[MAX][MAX];

bool is_attacked_row(int& i, int& j, int& n) {
	int y;
	for(y = i - 1; y >= 0; y--)
		if (chess_board[y][j])
			return true;
	for(y = i + 1; y < n; y++)
		if (chess_board[y][j])
			return true;
	return false;
}

bool is_attacked_column(int& i, int& j, int& n) {
	int x;
	for(x = j - 1; x >= 0; x--)
		if (chess_board[i][x])
			return true;
	for(x = j + 1; x < n; x++)
		if (chess_board[i][x])
			return true;
	return false;
}

bool is_attacked_diagonal(int &i, int &j, int& n) {
	int x,y;
	// up right
	for(y = i - 1; y >= 0; y--)
		for(x = j + 1; x < n; x++)
			if (chess_board[y][x])
				return true;
	// up left
	for(y = i - 1; y >= 0; y--)
		for(x = j - 1; x >= 0; x--)
			if (chess_board[y][x])
				return true;

	// down right
	for(y = i + 1; y < n; y++)
		for (x = j + 1; x < n; x++)
			if (chess_board[y][x])
				return true;

	// down left
	for(y = i + 1; y < n; y++)
		for(x = j - 1; x < n; x--)
			if (chess_board[y][x])
				return true;

	return false;
}

bool is_solution(int &n) {
	int queens=0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (chess_board[i][j]) {
				if (is_attacked_row(i, j, n) || is_attacked_column(i, j, n) || is_attacked_diagonal(i, j, n)) {
					return false;
				}
				queens++;
			}
		}
	}
	return queens == n;
}

void print_chess_board(int &n) {
	int i,j;
	for(i = 0; i < n; i++) {
		cout<<i+1<<" : ";
		for(j = 0; j + 1 < n; j++) {
			cout<<chess_board[i][j]<<" ";
		}
		cout<<chess_board[i][j]<<"\n";
	}
}

void n_queens(int placed, int& n, bool& printed_solution) {
	if (placed == n) {
		if (is_solution(n)) {
			print_chess_board(n);
			printed_solution = true;
		}
	} else {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				chess_board[i][j] = true;
				n_queens(placed+1, n, printed_solution);
				chess_board[i][j] = false;
				n_queens(placed+1, n, printed_solution);
			}
		}
	}
}

int main() {
	int n;
	while(cin>>n) {
		bool printed_solution = false;
		n_queens(0, n, printed_solution);
		if (printed_solution == false)
			cout<<"No Solution.\n";
	}
	return 0;
}