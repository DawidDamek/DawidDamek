#include "std_lib_facilities.h"



int fib()	// generate the next element of a (Fibbonacci) series:
{
	int v1 = 1, v2 = 2;
	int s = v1 + v2;
	if (s <= 0) s = 1;	
	v1 = v2;
	v2 = s;
	return s;
}

int get_computer_choice()
{
	vector<char> choices = { 'r','p','s' };
	return choices[(fib() % 3)]; // returns "random" element of choices vector
}

int main()
{
	char user_choice = ' ';
	char coputer_choice = ' ';
	char result = ' ';

	int user_wins = 0;
	int computer_wins = 0;

	cout << "Lets begin game of Rock, Paper, Scissors!\n"
		<< "What is your choice?\n"
		<< "r - rock\n"
		<< "p - paper\n"
		<< "s - scissors\n";

	while (cin >> user_choice)
	{

		coputer_choice = get_computer_choice();
		switch (user_choice)
		{
		case'r':
		case'R':
			if (coputer_choice == 'r')
				result = 't';
			else if (coputer_choice == 's')
				result = 'w';
			else if (coputer_choice == 'p')
				result = 'l';
			break;

		case'p':
		case'P':
			if (coputer_choice == 'p')
				result = 't';
			else if (coputer_choice == 'r')
				result = 'w';
			else if (coputer_choice == 's')
				result = 'l';
			break;

		case's':
		case'S':
			if (coputer_choice == 's')
				result = 't';
			else if (coputer_choice == 'p')
				result = 'w';
			else if (coputer_choice == 'r')
				result = 'l';
			break;
		default:
			error("wrong input");
			break;
		}
		cout << "Your choice: " << user_choice << endl
			<< "Computer choice: " << coputer_choice << endl;
		switch (result)
		{
		case 'w':
			user_wins++;
			break;
		case 'l':
			computer_wins++;
			break;
		case 't':
			cout << "Tie game!\n";
			break;

			
		}
		cout << "Score: \nPlayer: " << user_wins
			<< " Computer: " << computer_wins << '\n'
			<< "Wanna play again?(r/p/s)\n";
	}


}