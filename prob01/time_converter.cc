// Alton Bonilla
// CPSC 121L-15
// 2/9/2023
// alton77@csu.fullerton.edu
// alton7759
//
// Lab 3-1
// Partner: @peteranteater

#include <iostream>
#include <string>

std::string MilitaryToRegularTime(int military_time) {
  std::string holder{std::to_string(military_time)};
  std::string hours;
  std::string mins;
  std::string regular_time;
  std::string zone{" am"};
  if (holder.size() == 4) {
#pragma unroll
    for (int i = 0; i < 4; i++) {
      if (i < 2) {
        hours.push_back(holder.at(i));

      } else {
        mins.push_back(holder.at(i));
      }
    }
  }
  if (holder.size() == 3) {
#pragma unroll
    for (int i = 0; i < 3; i++) {
      if (i < 1) {
        hours.push_back(holder.at(i));

      } else {
        mins.push_back(holder.at(i));
      }
    }
  }
  int hourholder{std::stoi(hours)};
  if (hourholder > 12) {
    hourholder -= 12;
    zone = " pm";
  }
  hours = std::to_string(hourholder);
  if (hours.size() == 1) {
  }
  regular_time = hours + ":" + mins + zone;
  return regular_time;
}
