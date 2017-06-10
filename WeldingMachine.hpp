/*
 * WeldingMachine.h
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#ifndef WELDINGMACHINE_HPP_
#define WELDINGMACHINE_HPP_

#include "machine.hpp"

class WeldingMachine : public Machine {
public:
	WeldingMachine(std::string Type, int Model)
	:Machine(Type, Model)
	{
	}

	virtual void show()
	{
		std::cout << " Maszyna: "<< type << " model: " <<  model  << " (klasa pochodna level1)\n" << std::endl;
	}

	virtual void sayWhatYouCanDo()
	{
				std::cout << " Jestem spawarką. Potrafię łączyć metale"<< std::endl;
	}

	void welding();
};

#endif /* WELDINGMACHINE_HPP_ */
