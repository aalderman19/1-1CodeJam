#include "pch.h"
#include "Location.h"


Location::Location(string name, string description):
Name(name), Description(description) // initializer list
{
}

void Location::IntroduceSetting()
{
	cout << "You are at " << Name << endl;
	cout << endl << Description << endl << endl;
}

Location::~Location()
{
}
