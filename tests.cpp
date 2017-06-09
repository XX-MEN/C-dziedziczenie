#include "machine.h"
#include <gtest/gtest.h>

TEST(makeCoffeeTest, TestZwracania) {
	CoffeeMachine cm2("Kawomat", 666);
	EXPECT_EQ(1, cm2.makeCoffee(1));
	EXPECT_EQ(2, cm2.makeCoffee(2));
	EXPECT_EQ(3, cm2.makeCoffee(3));
	EXPECT_EQ(4, cm2.makeCoffee(4));
	EXPECT_NE(5, cm2.makeCoffee(5));
	EXPECT_NE(0, cm2.makeCoffee(0));
}

TEST(App,startCoffeeMachine_OK)
{
	CoffeeMachine cm2("Kawomat", 666);
	std::stringstream input("5");
	std::cin.rdbuf(input.rdbuf());
	int l = cm2.startCoffeeMachine();
	EXPECT_EQ(0, l);
}

TEST(App,stopCoffeeMachine_FAIL)
{
	CoffeeMachine cm2("Kawomat", 666);
	int stop = cm2.stopCoffeeMachine();
	EXPECT_NE(-1, stop);
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

