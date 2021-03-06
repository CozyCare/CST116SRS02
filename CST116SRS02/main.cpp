// CST116SRS02
// Part 0: Output

#include "stdafx.h"
#include <iostream>
#include <iomanip>




int main()
{
	std::cout.imbue(std::locale("en-US"));

	double west = 36364.87;
	double midwest = 12431.33;
	double east = 127690.50;
	double south = 9200.00;

	std::cout << std::setw(10) << std::right << "West: " << std::left << "$ " << 
		std::setprecision(2) << std::fixed << west << "\n";

	std::cout << std::setw(10) << std::right << "Midwest: " << std::left << "$ " <<
		std::setprecision(2) << std::fixed << midwest << "\n";

	std::cout << std::setw(10) << std::right << "East: " << std::left << "$ " <<
		std::setprecision(2) << std::fixed << east << "\n";

	std::cout << std::setw(10) << std::right << "South: " << std::left << "$ " <<
		std::setprecision(2) << std::fixed << south << "\n";


    return 0;
}

