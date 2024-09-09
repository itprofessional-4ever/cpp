#include <iostream>

int main() {
  // sizeof() = determines the size in bytes of a:
  // variable, data type, class, objects, etc.

  double gpa = 2.5;
  char grade = 'A'; 
  std::string name = "Chloe Lee is Awesome";
  char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  bool student = true;
  std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

  std::cout << sizeof(students) / sizeof(std::string) << " elements\n";

  return 0;
}