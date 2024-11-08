#pragma once
#include <string>
#include <iostream>
#include "Instruments.h"
#include <fstream>
#include <unordered_map>

class Compression_Station
{
	int id;
	std::string name;
	int number_of_workshops;
	int effectiveness;
public:
	static int MaxID_CS;
	int number_of_active_workshops;
	int workshops_effectivenes = (number_of_active_workshops * 100) / number_of_workshops;

	Compression_Station();

	void update_workshops_effectiveness(Compression_Station&);
	void change_number_of_active_workshops(Compression_Station&);
	std::string get_pipe_name(const Compression_Station& CS) { return CS.name; };

	friend std::ostream& operator << (std::ostream& out, const Compression_Station& CS);
	friend std::istream& operator >> (std::istream& in, std::unordered_map<int, Compression_Station>&);
	friend std::ofstream& operator << (std::ofstream& out, const Compression_Station& CS);
	friend std::ifstream& operator >> (std::ifstream& in, std::unordered_map<int, Compression_Station>&);
};

