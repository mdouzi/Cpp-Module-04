#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;

    std::cout << "Calling i->makeSound(): ";
    i->makeSound(); // Output should be the cat's sound

    std::cout << "Calling j->makeSound(): ";
    j->makeSound(); // Output should be the dog's sound

    std::cout << "Calling meta->makeSound(): ";
    meta->makeSound(); // Output should be the animal's sound

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongCat* wrongCat = new WrongCat();

    std::cout << "Type of wrongAnimal: " << wrongAnimal->getType() << std::endl;
    std::cout << "Type of wrongCat: " << wrongCat->getType() << std::endl;

    std::cout << "Calling wrongAnimal->makeSound(): ";
    wrongAnimal->makeSound(); // Output should be the WrongAnimal's sound

    std::cout << "Calling wrongCat->makeSound(): ";
    wrongCat->makeSound(); // Output should be the WrongCat's sound

    delete meta;
    delete j;
    delete i;
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}

