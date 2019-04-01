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
				cout <<"The fianl result is: Visitor team is winning " << totalTeamTwoScore << " - " << totalTeamOneScore << endl;
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





//#include <iostream>
//using namespace std;
//
//const int MAX_NUMBER_SCORES = 18;
//
//void inputScores(int a[], int size, int& numberUsed);
//
//int main()
//{
//	int baseballGame[MAX_NUMBER_SCORES], numberUsed;
//	inputScores(baseballGame, MAX_NUMBER_SCORES, numberUsed);
//
//
//	system("pause");
//	return 0;
//
//}
//
//void inputScores(int a[], int size, int& numberUsed)
//{
//	
//	int next = 0, index = 0, total= 0, sum =0, number =0;
//
//
//	
//	while ((next >= 0) && (index < size))
//	{
//		if ((index + 1) % 2 != 0) {
//			cout << "Enter team 1 score:\n";
//		}
//		else {
//			cout << "Enter team 2 score:\n";
//		}
//		cin >> next;
//		a[index] = next;
//		number = index;
//		if ((number + 1) % 2 == 0) {
//
//			for (int i = 0; i <= number; i += 2)
//				total = total + a[i];
//			for (int i = 1; i <= number; i += 2)
//				sum = sum + a[i];
//			if (total > sum) {
//				cout << "After inning " << index << " Home team is winning " << total << " - " << sum << endl;
//			
//			}
//			else if (sum > total) {
//				cout << "After inning " << index << " Visitor team is winning " << sum << " - " << total << endl;
//			
//			}
//
//		}
//	
//		index++;
//
//	}
//	
//	numberUsed = index;
//
//	for (int i = 0; i < numberUsed; i +=2)
//		total = total + a[i];
//		cout << total << endl;
//
//		for (int i = 1; i < numberUsed; i += 2)
//			sum = sum + a[i];
//		cout << sum << endl;
//
//		if (total > sum) {
//			cout << "Team 1 is the winner!\n";
//		}
//		else {
//			cout << "Team 2 is the winner!\n";
//		}
//}

