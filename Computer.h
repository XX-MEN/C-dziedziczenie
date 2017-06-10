/*
 * Computer.h
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "machine.h"

class Computer : public Machine {
public:
	Computer(std::string Type, int Model)
	:Machine(Type, Model)
	{
	}

	virtual void show()
	{
		std::cout << " Maszyna: "<< type << " model: " <<  model  << " (klasa pochodna level1)\n" << std::endl;
	}

	virtual void sayWhatYouCanDo()
	{
				std::cout << " Jestem komputerem. Potrafię tyle co mój właściciel"<< std::endl;
	}

	void calculating();
};

#endif /* COMPUTER_H_ */
