#include <iostream>

using namespace std;

class Person {
public:
  virtual void work() = 0;
};

class Employee : public Person {
public:
  void work() override {
    cout << "Enter the type of work the employee is doing: ";
    string workType;
    cin >> workType;
    cout << "The employee is doing " << workType << "." << endl;
  }
};

class Manager : public Person {
public:
  void work() override {
    cout << "Enter the type of work the manager is doing: ";
    string workType;
    cin >> workType;
    cout << "The manager is doing " << workType << "." << endl;
  }
};

int main() {
  Person* person;

  cout << "Enter the type of person you want to create (employee or manager): ";
  string personType;
  cin >> personType;

  if (personType == "employee") {
    person = new Employee();
  } else if (personType == "manager") {
    person = new Manager();
  } else {
    cout << "Invalid person type." << endl;
    return 0;
  }

  person->work();

  delete person;

  return 0;
}
