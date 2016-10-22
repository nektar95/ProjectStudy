#pragma once
#include <iostream>
#include<string>

class Human
{
	std::string mName;
	public:
		Human(std::string name);
		virtual std::string presentYourself() = 0;
		std::string getName();
};

