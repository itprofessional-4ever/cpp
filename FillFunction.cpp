#include <iostream>

int main() {
  // fill() = Fills a range of elements with a specified value
  // fill(begin, end, value)

  // std::string foods[10] = {
  //   "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

  const int SIZE = 100;
  std::string foods[SIZE];

  fill(foods, foods + (SIZE / 2), "pizza"); // first half of the array
  fill(foods + (SIZE / 2), foods + SIZE, "hamburger"); // the last of the array

  for (std::string food:foods) {
    std::cout << food << '\n';
  }

  return 0;
}