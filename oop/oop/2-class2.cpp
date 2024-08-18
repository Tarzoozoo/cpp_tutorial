#include <iostream>
#include <string>
using namespace std;

class Car {
public:
  // Constructor
  Car(string model, int year) : model(model), year(year) {}

  // Public method to display car details
  void displayInfo() const {
    cout << "Car model: " << model << ", Year: " << year << endl;
  }

  // Public method to change the car's model
  void setModel(string newModel) { model = newModel; }

  // Public method to get the car's model
  string getModel() const { return model; }

private:
  // Private attributes
  string model;
  int year;
};

int main() {
  // Creating an instance of Car
  Car myCar("Toyota", 2020);

  // Using a public method to display car information
  myCar.displayInfo();

  // Changing the model of the car
  myCar.setModel("Honda");

  // Displaying the updated car information
  myCar.displayInfo();

  return 0;
}