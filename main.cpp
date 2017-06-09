#include "machine.h"

int main(int argc, char *argv[])
{
	std::cout << " Metody dziedziczone \n" << std::endl;
	WeldingMachine wm1("Spawarka",3000);
	wm1.show();
	CoffeeMachine cm1("Expres", 78450);
	cm1.show();
	std::cout << "pobieram typ   : " << cm1.getType() << std::endl;
	std::cout << "pobieram model : " << cm1.getModel() << std::endl;
	CoffeeMachine cm2("Kawomat", 666);
	cm2.show();
	std::cout << "\n Metody niedziedziczone Klasy WeldingMachine\n" << std::endl;
	wm1.welding();
	std::cout << "\n Metody niedziedziczone Klasy CoffeeMachine\n" << std::endl;
	return cm2.startCoffeeMachine();
}
