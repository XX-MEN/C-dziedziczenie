#ifndef MACHINE_H_
#define MACHINE_H_

#include <iostream>


class Machine {
public:
	Machine (std::string Type, int Model)
		:type(Type),model(Model)
	{}

	virtual void show()
	{
		std::cout << " Maszyna "<< type << " jej model " <<  model  << " (klasa bazowa)" << std::endl;
	}

	virtual void sayWhatYouCanDo()
		{
			std::cout << " Jestem maszyną potrafię zrobić wszystko szybciej i dokładniej"<< std::endl;
		}

	std::string getType(); //{ return type+" (klasa bazowa)";}
	int getModel();//{return model;}

protected:
	std::string type;
	int model;
};

#endif /* MACHINE_H_ */
