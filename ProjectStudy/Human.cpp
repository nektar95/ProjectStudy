#include "stdafx.h"
#include "Human.h"


Human::Human(std::string name) {
	mName = name;
}
std::string Human::getName() {
	return mName;
}
