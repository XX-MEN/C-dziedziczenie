#include "machine.hpp"

#include <iostream>
#include <string>

std::string Machine::getType() {
	return type+" (klasa bazowa)";
}

int Machine::getModel()
{
	return model;
}


