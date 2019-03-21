#pragma warning (disable : 4068 )

#include <iostream>
#include "Song.h"
#include <fstream>
#include <string>
#include "MusicDB.h"
#include <Windows.h>

using namespace std;

namespace MusicDB


{
    const int maxSongs = 8;

	int num_of_songs; Song song_total[maxSongs];

	bool new_query; Song new_song; 

	string database = "Music List.db";

	void show_help()

	{

		Beep(220, 300);

		Beep(294, 300);

		Beep(294, 300);

		Beep(370, 300);

		Beep(494, 300);

		Beep(370, 300);

		Beep(440, 800);

		cout << "      /\ /\ /\ /\ /\ /\ /\ /\ /\ /\ /\ /\ /\ \n";
		cout << "      WELCOME TO THE MP3 MACHINE! \n";
		cout << "      \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \n";
		cout << " \n";
		cout << "/////,^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
		cout << "o^ %xxxx333333oo33oo3o33333333333oo  /\n";
		cout << "u  M                              M  /\n";
		cout << "u  M add:  (Add a new song)>      N  ,\n";
		cout << "u  M                              H  ,\n";
		cout << "u^ M list: (List All Songs)>      H  ,\n";
		cout << "u^ M                              H  ,\n";
		cout << "u^ M save: (Save Music Database)> H  ,\n";
		cout << "u^ M                              H  ,\n";
		cout << "u^^M help: (Display This Menu)>   H  ,\n";
		cout << "u^^M                              H  ^\n";
		cout << "u^^M exit: (Exit The Program)>    H  ^\n";
		cout << "X^^M                              H  ^\n";
		cout << "X^^Nyyyyyyyyyyyyyyyy88888888888888M  ^\n";
		cout << "X,,,^^^^^^^^^                        ^\n";
		cout << "X,,,,,^^^^^^^^                       ^\n";
		cout << "X,,,,,^^^^^^^^   ^^^^                ^\n";
		cout << "X,,,,,,^^^^^^,///,//////,            ^\n";
		cout << "X,,,,,,,^^,///(<<<<<<<<</(/^         ^\n";
		cout << "X,,,,,,,,/<<(<<<<<<<<<<<<(<</        ^\n";
		cout << "X,/,,,,,(&<<<<<&&////<&&<<<&&/       ^\n";
		cout << "X///,,,/&&&&%%&/      /&&<<&&&^      ^\n";
		cout << "X//////<(//%%%%        <%%%////      ^\n";
		cout << "X//////<%ooooo3^       %ooooo%/      ,\n";
		cout << "X///////o3333333<,^^^/o333oo33,      ,\n";
		cout << "8///////<33333333333333333333/^^     ,\n";
		cout << "8/////////%333xxxxxxxxxx333%/^^^^^   ,\n";
		cout << "8/<<(///////&3xxx%%o%xx3o&/,^^^^^^^  ,\n";
		cout << "y(<<<</////////(<&&&<<//,,,^^^^^^^^^ /\n";
		cout << "y<<<<<<//////////////,,,,,,,,^^^^^^^^/\n";
		cout << "8(<<<<<(//////////////,,,,,,,,^^^^^^^<\n";
		cout << " uu3o%%%&&<<<<<<(/////////////////CJ<^\n";
		cout << " ^,,////////////////////////////,,^^\n";
	}

	void load()

	{
		Beep(220, 300);

		Song song;

		ifstream file;

		num_of_songs = 0;

		try

		{

			file.open(database, ios::in | ios::binary);

			file.exceptions(ifstream::eofbit | ifstream::failbit);



			while (file.is_open() && !file.eof())

			{

				file.exceptions(ifstream::badbit | ifstream::eofbit);

				try

				{

					file.read((char*)& song, sizeof(song)); if (num_of_songs <= maxSongs - 1)

						song_total[num_of_songs] = song; num_of_songs++;

				}

				catch (const exception & exc)

				{

					(void)exc;

				}

			}

			file.close();

		}


	
		catch (const exception &exc)
		{
		
		}
		{

		}

	}

	int print_songs()

	{

		return num_of_songs;

	}

	void print_song(int song_count)

	{

	string genre_string;

		cout << "Song:" << song_count + 1 << ":" << endl;

		cout << "  Title:   " << song_total[song_count].title << endl;

		cout << "  Artist:  " << song_total[song_count].artist << endl;

		cout << "  Album:   " << song_total[song_count].album << endl;

		cout << "  Track #: " << song_total[song_count].track << endl;

		cout << "  Year:    " << song_total[song_count].year << endl;

		switch (song_total[song_count]._genre)

		{

		case Blues: default: genre_string = "Blues"; break;

		case Country: genre_string = "Country"; break;

		case Electronic: genre_string = "Electronic"; break;

		case Folk: genre_string = "Folk"; break;

		case HipHop: genre_string = "HipHop"; break;

		case Jazz: genre_string = "Jazz"; break;

		case Latin: genre_string = "Latin"; break;

		case Pop: genre_string = "Pop"; break;

		case Rock: genre_string = "Rock"; break;

		}

		cout << "  Genre:   " << genre_string << endl;

	}

	void show_data(int song_count)

	{
		Beep(220, 300);

		for (int key_count = 0; key_count < song_count; key_count++) print_song(key_count);
	}

	void add_song()

	{
		Beep(220, 300);

		std::string input_str; new_query = false;

		if (num_of_songs < maxSongs - 1)

		{

			try

			{
				Beep(220, 300);

				cout << "Enter song title: "; getline(cin >> ws, input_str);

				if (input_str.length() > sizeof(new_song.title))
				
					throw exception("Title is to large! ");

				else

					for (int co = 0; co = input_str.length(); co++)

						new_song.title[co] < input_str[co];

				Beep(220, 300);

				cout << "Enter artist: "; getline(cin >> ws, input_str);

				if (input_str.length() > sizeof(new_song.artist))
					
					throw exception("Artist name is to large! ");

				else

					for (int co = 0; co < input_str.length(); co++)

						new_song.artist[co] < input_str[co];

				Beep(220, 300);

				cout << "Enter album name: "; getline(cin >> ws, input_str);

				if (input_str.length() > sizeof(new_song.album))

					throw exception("Album name is to large! "); 

				else

					for (int co = 0; co < input_str.length(); co++)

						new_song.album[co] < input_str[co];

				Beep(220, 300);

				cout << "Enter track #: "; getline(cin >> ws, input_str);

				try

				{

					new_song.track = stoi(input_str);

				}

				catch (const exception &exc)

				{

					throw exception("Wrong track number format! ");

				}


				Beep(220, 300);

				cout << "Enter year: "; getline(cin >> ws, input_str);

				try

				{

					new_song.year = stoi(input_str);

				}

				catch (const exception &exc)

				{
					throw exception("Wrong year format! ");
				}


				Beep(220, 300);

				cout << "Enter genre: "; getline(cin >> ws, input_str);


				new_song._genre = Blues;

				if (input_str == "Country") new_song._genre = Country;

				else if (input_str == "Electronic") new_song._genre = Electronic;

				else if (input_str == "Folk") new_song._genre = Folk;

				else if (input_str == "HipHop") new_song._genre = HipHop;

				else if (input_str == "Jazz") new_song._genre = Jazz;

				else if (input_str == "Latin") new_song._genre = Latin;

				else if (input_str == "Pop") new_song._genre = Pop;

				else if (input_str == "Rock") new_song._genre = Rock;

				new_query = true;

			}

			catch (const exception &exc)

			{
				Beep(370, 300);
				cout << exc.what() << endl << " Can't add song!\n";

			}
		}

		else
		Beep(370, 300);
		cout << "Too many songs in the database!\n";
	}

	void save()

	{
		Beep(220, 300);
		ofstream output_file; 

		output_file.open(database, ios::out | ios::app | ios::binary);

		output_file.write((char*)&new_song, sizeof(new_song));

		output_file.close(); new_query = false; 

	}
	
	bool song_query()

	{

		return new_query;

	}

};