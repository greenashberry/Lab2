#pragma once
#include <unordered_map>
#include <string>
#include <iostream>
#include "Instruments.h"
#include "Pipe.h"
#include "Compression_Station.h"
#include <fstream>

class Gas_Transportation_System
{
public:
	std::unordered_map<int, Pipe> Pipeline;
	std::unordered_map<int, Compression_Station> CS_system;

	friend std::ostream& operator << (std::ostream& out, const std::unordered_map<int, Pipe>& Pipeline);
	friend std::ostream& operator << (std::ostream& out, const std::unordered_map<int, Compression_Station>& CS_system);
	friend std::ostream& operator << (std::ostream& out, const Gas_Transportation_System& GTS);
	friend std::ofstream& operator << (std::ofstream& out, const std::unordered_map<int, Pipe>& Pipeline);
	friend std::ofstream& operator << (std::ofstream& out, const std::unordered_map<int, Compression_Station>& CS_system);
	friend std::ofstream& operator << (std::ofstream& out, const Gas_Transportation_System& GTS);
	friend std::ifstream& operator >> (std::ifstream& in, Gas_Transportation_System& GTS);

	
};