#include <iostream>
#include "containers.h"

int main()
{
	containers lab;
	lab.addstring("Hello");
	lab.addstring("World");
	lab.addstring("laboratorna");
	std::cout << "Перші символи: " << lab.FirstChars() << std::endl;
	std::cout << "Найкоротший рядок: " << lab.shortest() << std::endl;
	std::cout << "Частота 'l': " << lab.frequency('l') << std::endl;
	return 0;
}