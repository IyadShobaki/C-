/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Week 10 Lab
	3 / 31 / 2019 */
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
char game[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
char player = 'X';
char ans;
vector<int> xVector;
vector<int> oVector;
void fillArray();
void play();
void resetArray();
void endGame();
bool xWin ;
bool oWin ;
bool againstComputer;

int main()
{
	double x =0 ;
	double o = 0;
	double t = 0;
	int numberOfGames = 0;
	do {
		cout << "Would you like to play against the Computer or against another person? C for computer\n";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'C')
			againstComputer = true;
		else
			againstComputer = false;

		numberOfGames++;
		int attempt = 0;
		resetArray();
		fillArray();
		while (attempt < 9) {
			play();
			fillArray();
			if (player == 'X') {
				player = 'O';
			}
			else {
				player = 'X';
			}
			endGame();
			if (xWin == true) {
				cout << "Player X the winner!" << endl;
				x++;
				break;
			}
			else if (oWin == true) {
				cout << "Player O the winner!" << endl;
				o++;
				break;
			}
			attempt++;
		}

		if (xWin == false && oWin == false) {
			cout << "The result is tied!" << endl;
			t++;

		}
		cout << "X player numbers are: ";
		for (int i = 0; i < xVector.size(); i++) {

			cout << xVector[i] << " ";

		}
		cout << endl << "O player numbers are: ";
		for (int i = 0; i < oVector.size(); i++) {
			cout << oVector[i] << " ";
		}

		cout << endl << "Would you like to play again? Y or N" << endl;
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'N') {
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(2);
			cout << "Number of games " << numberOfGames << endl;
			cout << "X player won " << (x / numberOfGames) * 100 << " %\n";
			cout << "O player won " <<  (o / numberOfGames) * 100 << " %\n";
			cout << "Tied games " << (t / numberOfGames) * 100 << " %\n";
			cout << "Thank you!" << endl;

		}

	} while (ans == 'Y');
	
	
	
	system("pause");
	return 0;


}
void fillArray()
{
	system("cls");
	cout << "Tic Tac Toe Game" << endl;
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			
			cout <<"\t" << game[i][j] << "\t|";
			
		}
		cout << endl;
		cout << endl;
		cout << endl;
		
		
	}
}
void resetArray() {
	xWin = false;
	oWin = false;

	xVector.clear();
	oVector.clear();

	game[0][0] = '1';
	game[0][1] = '2';
	game[0][2] = '3';
	game[1][0] = '4';
	game[1][1] = '5';
	game[1][2] = '6';
	game[2][0] = '7';
	game[2][1] = '8';
	game[2][2] = '9';
}
void play()
{
	int number;
		cout << "Player " << player << " Enter a number from 1 - 9: ";
		if (againstComputer == true && player == 'O') {
			number = rand() % 9 + 1;
		}
		else {
			cin >> number;
			
		}
		
		

			if (number == 1) {
				if (game[0][0] == '1') {
					game[0][0] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
			if (number == 2) {
				if (game[0][1] == '2') {
					game[0][1] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
			if (number == 3) {
				if (game[0][2] == '3') {
					game[0][2] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
			if (number == 4) {
				if (game[1][0] == '4') {
					game[1][0] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
			if (number == 5) {
				if (game[1][1] == '5') {
					game[1][1] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
			if (number == 6) {
				if (game[1][2] == '6') {
					game[1][2] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
			if (number == 7) {
				if (game[2][0] == '7') {
					game[2][0] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
			if (number == 8) {
				if (game[2][1] == '8') {
					game[2][1] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
			if (number == 9) {
				if (game[2][2] == '9') {
					game[2][2] = player;
					if (player == 'X') {
						xVector.push_back(number);
					}
					else {
						oVector.push_back(number);
					}
				}

				else {
					cout << "Box not available. Try again" << endl;
					play();
				}

			}
		
	
		

}
void endGame() {
	
		if ((game[0][0] == 'X' && game[0][1] == 'X' && game[0][2] == 'X')||
			(game[1][0] == 'X' && game[1][1] == 'X' && game[1][2] == 'X')
			|| (game[2][0] == 'X' && game[2][1] == 'X' && game[2][2] == 'X') || 
			(game[0][0] == 'X' && game[1][0] == 'X' && game[2][0] == 'X')
			|| (game[0][1] == 'X' && game[1][1] == 'X' && game[2][1] == 'X') || 
			(game[0][2] == 'X' && game[1][2] == 'X' && game[2][2] == 'X')
			|| (game[0][0] == 'X' && game[1][1] == 'X' && game[2][2] == 'X') || 
			(game[0][2] == 'X' && game[1][1] == 'X' && game[2][0] == 'X')) {
			xWin = true;
			
		}
		else if ((game[0][0] == 'O' && game[0][1] == 'O' && game[0][2] == 'O') || (game[1][0] == 'O' && game[1][1] == 'O' && game[1][2] == 'O')
			|| (game[2][0] == 'O' && game[2][1] == 'O' && game[2][2] == 'O') || (game[0][0] == 'O' && game[1][0] == 'O' && game[2][0] == 'O')
			|| (game[0][1] == 'O' && game[1][1] == 'O' && game[2][1] == 'O') || (game[0][2] == 'O' && game[1][2] == 'O' && game[2][2] == 'O')
			|| (game[0][0] == 'O' && game[1][1] == 'O' && game[2][2] == 'O')|| (game[0][2] == 'O' && game[1][1] == 'O' && game[2][0] == 'O')) {
			oWin = true;
			
		}
	

}
