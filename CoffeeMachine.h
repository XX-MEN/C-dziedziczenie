/*
 * CoffeeMachine.h
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#ifndef COFFEEMACHINE_H_
#define COFFEEMACHINE_H_

#include <array>
#include "machine.h"

class CoffeeMachine : public Machine {
public:
	CoffeeMachine(std::string Type, int Model)
	:Machine(Type, Model)
	{
		coffeeCounter= {0, 0, 0, 0};
	}

	virtual void show()
	{
		std::cout << " Maszyna: "<< type << " model: " <<  model  << " (klasa pochodna level1)\n" << std::endl;
	}

	virtual void sayWhatYouCanDo()
			{
				std::cout << " Jestem Kawomatem. Robie najpyszniejszą kawę pod słońcem"<< std::endl;
			}

	int startCoffeeMachine();
	int makeCoffee(int choice);
	int stopCoffeeMachine();
	std::array<int,4> coffeeCounter;
};

#endif /* COFFEEMACHINE_H_ */
