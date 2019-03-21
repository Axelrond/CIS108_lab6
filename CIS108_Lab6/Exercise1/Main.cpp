#include <iostream>
#include <string>
#include "conio.h"
#include "MusicDB.h"
#include "Song.h"

using namespace std;

string key_command;

int main()

{

	MusicDB::load();

	int songsInDB = MusicDB::print_songs(); MusicDB::show_help();

	do

	{

		cin >> key_command;

		if (key_command == "add")

			MusicDB::add_song();

		if (key_command == "list")

		{

			cout << "There are " << songsInDB << " songs.\n";

			MusicDB::show_data(songsInDB);

		}

		if (key_command == "save")

		{

			if (MusicDB::song_query())

			{

				MusicDB::save(); MusicDB::load();

				songsInDB = MusicDB::print_songs();

			}

			else

				cout << "There is no new song to save.\n";

		}

		if (key_command == "help")

			MusicDB::show_help();

	} while (key_command != "exit");

	return 0;
}