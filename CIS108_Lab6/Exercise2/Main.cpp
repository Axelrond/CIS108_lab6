#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<Windows.h>
#include<conio.h>
#include<stack>

#pragma warning( disable : 4129; once : 4018; once : 4615; )

using namespace std;

void reverse_string(char *string_flip);

int main()

{
	Beep(225, 500);
	Beep(300, 500);
	Beep(450, 800);

	Beep(225, 500);
	Beep(300, 500);
	Beep(450, 800);

	Beep(450, 400);
	Beep(525, 800);
	Beep(475, 175);
	Beep(525, 175);
	Beep(475, 175);
	Beep(525, 175);
	Beep(450, 250);
	Beep(300, 500);

	cout << "	         _____________, -.___     _ \n";
	cout << "		|____{ {]_]_][_] \n";
	cout << "		|___ `-----.__\ \_]_]_    . ` \n";
	cout << "		|`-----.____} }]_]_]_, \n";
	cout << "		|_____________ / {_]_]_]_], ` \n";
	cout << "		                   `-' \n";

	char willy[] = "Invention, my dear friends, is 93% perspiration, 6% electricity, 4% evaporation, and 2% butterscotch ripple \n";

	cout << willy << endl;

	reverse_string(willy);

	void Pause();
	{
		std::cout << "Press Enter to close program...";
		std::cin.clear();
		std::cin.sync();
		std::cin.get();
	}

	return 0;
}

	void reverse_string(char *string_flip)

	{
		stack<char> first_string;

		for (int i = 0; i < strlen(string_flip); i++)

			first_string.push(string_flip[i]);

		for (int i = 0; i < strlen(string_flip); i++)

		{
			cout << first_string.top(); first_string.pop();
		}

		cout << " \n" << endl;
	}