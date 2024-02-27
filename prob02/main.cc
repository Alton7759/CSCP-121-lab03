// Alton Bonilla
// CPSC 121L-15
// 2/9/2023
// alton77@csu.fullerton.edu
// alton7759
//
// Lab 3-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iomanip>
#include <iostream>

#include "salary.h"

int main() {
  double wage{0};
  double hours{0};
  std::cout << "Hourly wage: ";
  std::cin >> wage;
  std::cout << "Hour worked: ";
  std::cin >> hours;
  if (wage < 0 || hours < 0) {
    std::cout << "Invalid input";
    return 0;
  }
  double total{Salary(hours, wage)};
  std::cout << "Total Salary Owed: $ " << std::setprecision(2) << std::fixed
            << total;
  return 0;
}
