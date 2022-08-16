#include <iostream>


int main(int argc, char **argv)
{
	if(argc == 1)
	{
		std::cout << "Passed case 1!\n";
		std::cout << "tao o day _%%_!\n";
		return 0;
	}
	if(argc > 1)
	{
		std::cout << "Passed case 2!\n";
		std::cout << "tao o day _%%_!\n";
		return 2;
	}
}