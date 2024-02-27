// Alton Bonilla
// CPSC 121L-15
// 2/9/2023
// alton77@csu.fullerton.edu
// alton7759
//
// Lab 3-1.
// Partner: @peteranteater

#include <iostream>
#include <string>

#include "time_converter.h"

int main() {
  int military_time = 0;
  std::cout << "Please enter the time in military time: ";
  std::cin >> military_time;
  std::string regular_time = MilitaryToRegularTime(military_time);

  std::cout << "The equivalent regular time is: " << regular_time << "\n";
  return 0;
}
