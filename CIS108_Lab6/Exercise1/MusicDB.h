#pragma once
#include "Song.h"


namespace MusicDB

{
    bool song_query();

	void load();

	void show_help();

	void save();

	int print_songs();

	void show_data(int);

	void print_song(int);

	void add_song();

}