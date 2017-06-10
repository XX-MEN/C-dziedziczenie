/*
 * functions.cpp
 *
 *  Created on: 10.06.2017
 *      Author: xyhu
 */

#include "machine.h"
#include "CoffeeMachine.h"
#include "WeldingMachine.h"
#include "Computer.h"
#include "Laptop.h"
#include <vector>
#include "functions.h"
#include <iostream>

void polimorfizmIdziedziczenie() {

	std::vector<Machine *> m;
	m.push_back(new WeldingMachine("Spawarka",3000));
	m.push_back(new CoffeeMachine("Expres", 78450));
	m.push_back(new Computer("Server", 2017));
	m.push_back(new Laptop("ThinkPad", 2018));

	std::cout << "Polimorfizm - wywołanie metod na rzecz róznych klas" << std::endl;
	for (auto e : m) {
		std::cout << "___________________________________________________________" << std::endl;
		e->sayWhatYouCanDo();
		e->show();
	}

	std::cout << "Dziedziczenie" << std::endl;
	std::cout << " Metody dziedziczone po klasie bazowej \"getType()\" oraz \"getModel()\"\n" << std::endl;
	for (auto e : m) {
			std::cout << "___________________________________________________________" << std::endl;
			std::cout << "pobieram typ   : " << e->getType() << std::endl;
			std::cout << "pobieram model : " << e->getModel() << std::endl;
	}

	WeldingMachine wm("Spawarka",3000);
	Computer cp("Server", 2017);
	Laptop lt("ThinkPad", 2018);
	CoffeeMachine cm("Expres", 78450);

	std::cout << "\n Metody niedziedziczone Klasy WeldingMachine" << std::endl;
	wm.welding();
	std::cout << "\n Metody niedziedziczone Klasy Computer" << std::endl;
	cp.calculating();
	std::cout << "\n Metody niedziedziczone Klasy Laptop" << std::endl;
	lt.onBateries();
	std::cout << "\n Metody niedziedziczone Klasy CoffeeMachine" << std::endl;
	int i = cm.startCoffeeMachine();

}
