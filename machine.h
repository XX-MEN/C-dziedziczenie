#ifndef MACHINE_H_
#define MACHINE_H_

#include <iostream>
#include <array>

class Machine {
public:
	Machine (std::string Type, int Model)
		:type(Type),model(Model)
	{}

	virtual void show()
	{
		std::cout << " Maszyna "<< type << " jej model " <<  model  << " (klasa bazowa)" << std::endl;
	}

	std::string getType() { return type+" (klasa bazowa)";}
	int getModel(){return model;}

protected:
	std::string type;
	int model;
};

class CoffeeMachine : public Machine {
public:
	CoffeeMachine(std::string Type, int Model)
	:Machine(Type, Model)
	{
		coffeeCounter= {0, 0, 0, 0};
	}

	virtual void show()
	{
		std::cout << " Maszyna "<< type << " jej model " <<  model  << " (klasa pochodna)" << std::endl;
	}

	int startCoffeeMachine();
	int makeCoffee(int choice);
	int stopCoffeeMachine();
	std::array<int,4> coffeeCounter;
};

class WeldingMachine : public Machine {
public:
	WeldingMachine(std::string Type, int Model)
	:Machine(Type, Model)
	{

	}

	virtual void show()
	{
		std::cout << " Maszyna "<< type << " jej model " <<  model  << " (klasa pochodna)" << std::endl;
	}
	int welding();
};

#endif /* MACHINE_H_ */
