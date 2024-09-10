#include <iostream>

int main() {
  // fill() = Fills a range of elements with a specified value
  // fill(begin, end, value)

  // std::string foods[10] = {
  //   "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

  const int SIZE = 99;
  std::string foods[SIZE];

  fill(foods, foods + (SIZE / 3), "pizza"); // first one third of the array
  fill(foods + (SIZE / 3), foods + (SIZE/3) * 2, "hamburger"); // the second one third of the array
  fill(foods + (SIZE/3) * 2, foods + SIZE, "hotdog"); // the last of the array


  for (std::string food:foods) {
    std::cout << food << '\n';
  }

  return 0;
}