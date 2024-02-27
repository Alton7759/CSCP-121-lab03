// Alton Bonilla
// CPSC 121L-15
// 2/9/2023
// alton77@csu.fullerton.edu
// alton7759
//
// Lab 3-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
double Salary(double hworked, double wage) {
  double totalsalary{0};
  if (hworked <= 40) {
    totalsalary = wage * hworked;
  } else if (hworked > 40 && hworked <= 65) {
    totalsalary = (wage * 40) + (hworked - 40) * (wage * 1.5);
  } else if (hworked > 65) {
    totalsalary = (wage * 40) + (wage * 1.5) * 25 + (hworked - 65) * wage * 2;
  } else {
  }
  return totalsalary;
}