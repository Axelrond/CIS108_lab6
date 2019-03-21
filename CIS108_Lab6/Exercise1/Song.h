#pragma once

typedef enum genre

{

	Blues, 
	Country, 
	Electronic, 
	Folk, 
	HipHop, 
	Jazz, 
	Latin, 
	Pop, 
	Rock

} _genre;

struct Song

{

	char title[64];

	char artist[32];

	char album[64];

	int track;

	int year;

	genre _genre;

};
