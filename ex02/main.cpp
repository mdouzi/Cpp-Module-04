#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void runAnimalTest() 
{
    // const Animal* meta = new Animal();
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;

    std::cout << "Calling i->makeSound(): ";
    i->makeSound(); 

    std::cout << "Calling j->makeSound(): ";
    j->makeSound(); 

    std::cout << "Calling meta->makeSound(): ";
    // meta->makeSound(); 


    // delete meta;
    delete j;
    delete i;
}


int main( void )
{
	runAnimalTest();
	Cat a;
	Cat c(a);

	std::cout << a.getBrain() << std::endl;
	std::cout << c.getBrain() << std::endl;
}
