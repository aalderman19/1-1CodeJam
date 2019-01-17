#pragma once
#include "pch.h"

class Location
{
public:
	Location(string name, string description);
	string Name;
	string Description;
	void IntroduceSetting();
	~Location();
};

