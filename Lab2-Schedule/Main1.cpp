/*
	Carter Theesfeld
	C++ Fall 2022
	Due: September 14, 2022
	Lab Name: Lab 2 Exploring Output
	Description: This lab is designed to get you familiar output to the command prompt
	using C++.
*/
#include <string>
#include <iostream>

int main()
{
	const std:: string m = "Monday\t \t";
	const std:: string tues = "Tuesday \t";
	const std::string w = "Wednesday \t";
	const std::string thur = "Thursday \t";
	const std::string f = "Friday \t \t";
	const std::string cis = "10:00 \t C++ 162";
	const std::string psy = "11:30 \t Introduction to Psychology 111 ";
	const std::string py = "7:50 \t Python Programing 189";
	const std::string mus =	"8:00 \t Music Appreciation 100";

	std::cout << m << mus;
	std::cout << std::endl << m << cis;
	std::cout << std::endl << tues << py;
	std::cout << std::endl << tues << cis;
	std::cout << std::endl << tues << psy;
	std::cout << std::endl << w << cis;
	std::cout << std::endl << w << mus;
	std::cout << std::endl << thur << py;
	std::cout << std::endl << thur << cis;
	std::cout << std::endl << thur << psy;
	std::cout << std::endl << f << mus;
	std::cout << std::endl << f << cis;
}