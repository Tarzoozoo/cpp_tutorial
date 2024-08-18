#include <iostream>
#include <string>
using namespace std;

// Define a struct named 'Student'
struct Student {
  string name;
  int age;
  float gpa;
};

int main() {
  // Create an instance of Student
  Student student1;

  // Assign values to members of student1
  student1.name = "John Doe";
  student1.age = 20;
  student1.gpa = 3.5;

  // Access and print members of student1
  cout << "Name: " << student1.name << endl;
  cout << "Age: " << student1.age << endl;
  cout << "GPA: " << student1.gpa << endl;

  // Create an array of 3 Student structs
  Student students[3];

  // Initialize data for each student
  students[0] = {"John Doe", 20, 3.5};
  students[1] = {"Jane Smith", 22, 3.8};
  students[2] = {"Bob Johnson", 19, 3.6};

  // Iterate over the array and print each student's information
  for (int i = 0; i < 3; i++) {
    cout << "Student #" << i + 1 << ":\n"
              << "Name: " << students[i].name << "\n"
              << "Age: " << students[i].age << "\n"
              << "GPA: " << students[i].gpa << "\n\n";
  }

  // Create a vector of Student structs
  std::vector<Student> students_vec;

  // Add students to the vector
  students_vec.push_back({"John Doe", 20, 3.5});
  students_vec.push_back({"Jane Smith", 22, 3.8});
  students_vec.push_back({"Bob Johnson", 19, 3.6});

  // Iterate over the vector and print each student's information
  for (const auto &students_vec : students_vec) {
    std::cout << "Name: " << students_vec.name << ", Age: " << students_vec.age
              << ", GPA: " << students_vec.gpa << std::endl;
  }
  return 0;
}