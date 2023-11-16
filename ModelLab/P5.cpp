#include <iostream>

using namespace std;

class Animal {
public:
  virtual void eat() = 0;
};

class Herbivore : public Animal {
public:
  void eat() override {
    cout << "Enter the type of plant the herbivore is eating: ";
    string plantType;
    cin >> plantType;
    cout << "The herbivore is eating " << plantType << "." << endl;
  }
};

class Carnivore : public Animal {
public:
  void eat() override {
    cout << "Enter the type of meat the carnivore is eating: ";
    string meatType;
    cin >> meatType;
    cout << "The carnivore is eating " << meatType << "." << endl;
  }
};

int main() {
  Animal* animal;

  cout << "Enter the type of animal you want to create (herbivore or carnivore): ";
  string animalType;
  cin >> animalType;

  if (animalType == "herbivore") {
    animal = new Herbivore();
  } else if (animalType == "carnivore") {
    animal = new Carnivore();
  } else {
    cout << "Invalid animal type." << endl;
    return 0;
  }

  animal->eat();

  delete animal;

  return 0;
}
