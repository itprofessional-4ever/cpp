#include <iostream>

int main() {
  std::string cars[][3] = {
                          {"Mustang", "Escape", "F-150"},
                          {"Corvette", "Equinox", "Silverado"},
                          {"Challenger", "Durango", "Ram 1500"}
                          };

  std::cout << cars[0][0] << " ";
  return 0;
}