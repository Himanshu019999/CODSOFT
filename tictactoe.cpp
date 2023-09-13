#include <iostream>
using namespace std;
//positions mentioned
char square[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
void tie()
{
	system("cls");
	cout << "Tic Tac Toe v1" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << square[i][j] << " ";
		}
		cout << endl;
	}
}
void Input()
{
	int a;
	cout << "input the number of the field: ";
	cin >> a;

	if (a == 1)
		square[0][0] = player;
	else if (a == 2)
		square[0][1] = player;
	else if (a == 3)
		square[0][2] = player;
	else if (a == 4)
		square[1][0] = player;
	else if (a == 5)
		square[1][1] = player;
	else if (a == 6)
		square[1][2] = player;
	else if (a == 7)
		square[2][0] = player;
	else if (a == 8)
		square[2][1] = player;
	else if (a == 9)
		square[2][2] = player;
}
void togglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Win()
{
	//first player performance
	if (square[0][0] == 'X' && square[0][1] == 'X' && square[0][2] == 'X')
		return 'X';
	if (square[1][0] == 'X' && square[1][1] == 'X' && square[1][2] == 'X')
		return 'X';
	if (square[2][0] == 'X' && square[2][1] == 'X' && square[2][2] == 'X')
		return 'X';

	if (square[0][0] == 'X' && square[1][0] == 'X' && square[2][0] == 'X')
		return 'X';
	if (square[0][1] == 'X' && square[1][1] == 'X' && square[2][1] == 'X')
		return 'X';
	if (square[0][2] == 'X' && square[1][2] == 'X' && square[2][2] == 'X')
		return 'X';

	if (square[0][0] == 'X' && square[1][1] == 'X' && square[2][2] == 'X')
		return 'X';
	if (square[2][0] == 'X' && square[1][1] == 'X' && square[0][2] == 'X')
		return 'X';

	//second player performance
	if (square[0][0] == 'O' && square[0][1] == 'O' && square[0][2] == 'O')
		return 'O';
	if (square[1][0] == 'O' && square[1][1] == 'O' && square[1][2] == 'O')
		return 'O';
	if (square[2][0] == 'O' && square[2][1] == 'O' && square[2][2] == 'O')
		return 'O';

	if (square[0][0] == 'O' && square[1][0] == 'O' && square[2][0] == 'O')
		return 'O';
	if (square[0][1] == 'O' && square[1][1] == 'O' && square[2][1] == 'O')
		return 'O';
	if (square[0][2] == 'O' && square[1][2] == 'O' && square[2][2] == 'O')
		return 'O';

	if (square[0][0] == 'O' && square[1][1] == 'O' && square[2][2] == 'O')
		return 'O';
	if (square[2][0] == 'O' && square[1][1] == 'O' && square[0][2] == 'O')
		return 'O';

	return '/';
}
int main()
{
	tie();
	while (1)
	{
		Input();
		tie();
		if (Win() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		togglePlayer();
	}
	system("pause");
	return 0;
}