/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Week 9 Lab
	3 / 20 / 2019 */
#include <iostream>
using namespace std;

const int MAX_NUMBER_SCORES = 8;

int start = 0;
int teamOneScore;
int teamTwoScore;
int totalTeamOneScore = 0;
int totalTeamTwoScore = 0;
int main()
{
	int homeTeam[MAX_NUMBER_SCORES], visitorTeam[MAX_NUMBER_SCORES];


	while (start < 9) {
		int i = 0;
		cout << "Enter the score for Home team:\n";
		cin >> homeTeam[i];
		teamOneScore = homeTeam[i];
		totalTeamOneScore = totalTeamOneScore + teamOneScore;

		cout << "Enter the score for Visitor team:\n";
		cin >> visitorTeam[i];
		teamTwoScore = visitorTeam[i];
		totalTeamTwoScore = totalTeamTwoScore + teamTwoScore;
		if (start != 8) {
			if (totalTeamOneScore > totalTeamTwoScore) {
				cout << "After inning " << start + 1 << " Home team is winning " << totalTeamOneScore << " - " << totalTeamTwoScore << endl;
			}
			else if (totalTeamTwoScore > totalTeamOneScore) {
				cout << "After inning " << start + 1 << " Visitor team is winning " << totalTeamTwoScore << " - " << totalTeamOneScore << endl;
			}
			else {
				cout << "After inning " << start + 1 << " The scores are tied " << totalTeamOneScore << " - " << totalTeamTwoScore << endl;
			}
		}
		else if (start = 8) {
			if (totalTeamOneScore > totalTeamTwoScore) {
				cout << "The fianl result is: Home team is winning " << totalTeamOneScore << " - " << totalTeamTwoScore << endl;
			}
			else if (totalTeamTwoScore > totalTeamOneScore) {
				cout << "The fianl result is: Visitor team is winning " << totalTeamTwoScore << " - " << totalTeamOneScore << endl;
			}
			else {
				cout << "The fianl result is: scores are tied " << totalTeamOneScore << " - " << totalTeamTwoScore << endl
					<< "Add an extra inning\n";
				start = 7;
			}
		}

		i++;
		start++;
	}

	system("pause");
	return 0;

}