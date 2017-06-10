/*
 * Laptop.h
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#ifndef LAPTOP_H_
#define LAPTOP_H_

#include "Computer.h"

class Laptop : public Computer{
public:
	Laptop(std::string Type, int Model)
	:Computer(Type, Model)
	{
	}

	virtual void show()
	{
		std::cout << " Maszyna: "<< type << " model: " <<  model  << " (klasa pochodna level2)\n" << std::endl;
	}

	virtual void sayWhatYouCanDo()
	{
				std::cout << " Jestem Laptopem. Potrafię pracować na baterie"<< std::endl;
	}

	int onBateries();
};

#endif /* LAPTOP_H_ */
