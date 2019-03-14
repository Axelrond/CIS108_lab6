#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<Windows.h>

//Everything built fine with 0 errors, but will not run! :( it keeps saying:
//Unable to start program
//The system cannot find the file specified

using namespace std;
int main()
{

	Beep(220, 300);


	cout << " / _ / _ / _ / _ / _ / _ / _ / _ / , -',  ,. -,-,--/|\n";
	cout << " / _ / _ / _ / _ / _ / _ / _ / , -' //  /-| / /--/ /\n";
	cout << " / _ / _ / _ / _ / _ / _ / , -' `-''--'  `' '--/ /\n";
	cout << " / _ / _ / _ / _ / _ / _, :................../ /\n";
	cout << " |________, '                     |/\n";
	cout << " """""""""""""""""""""""" \n";
	cout << " \n";
	cout << " \n";

	char msg[] = "Invention, my dear friends, is 93 % perspiration, 6 % electricity, 4 % evaporation, and 2 % butterscotch ripple\n";
	string key_command;
	vector<int> v;
	vector<string> SortApp;
	vector<string>::iterator itr;
	char sort_array;

	struct SortBot {

		int key;
		string data;
		SortBot(int key, string data) {

			this->key = key;

			this->data = data;
		}
	};

	int main(); {
		std::vector<SortBot> vec;

		vec.push_back(SortBot(9, "Blues"));

		vec.push_back(SortBot(8, "Country"));

		vec.push_back(SortBot(7, "Eletronic"));

		vec.push_back(SortBot(6, "Folk"));

		vec.push_back(SortBot(5, "HipHop"));

		vec.push_back(SortBot(4, "Jazz"));

		vec.push_back(SortBot(2, "Latin"));

		vec.push_back(SortBot(3, "Pop"));

		vec.push_back(SortBot(1, "Rock"));

		sort(vec.begin(), vec.end(), [](const SortBot& lhs, const SortBot& rhs) {
			return lhs.key < rhs.key;
		});
		for (auto it = vec.begin(); it != vec.end(); it++) {
			cout << it->data << endl;
		}
	};

	return 0;
}

	// looks cute, might delete later...
