class Person {
public:
  std::string name;
  int age;

  Person(std::string n, int a) {
    name = n;
    age = a;
  }

  void display() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
  }
};

int main() {
  Person person("John Doe", 30);

  Person* personPtr = &person; // Create a pointer to the Person object

  // Access object attributes through the pointer
  std::cout << "Name: " << personPtr->name << std::endl;
  std::cout << "Age: " << personPtr->age << std::endl;

  // Call object methods through the pointer
  personPtr->display();

  return 0;
}
