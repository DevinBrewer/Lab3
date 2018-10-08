// main.cpp
// Devin Brewer

#include <iostream>

int main() {
  /*  Part #1 & #2  */
  short nshort, sumshort=0;

  // Get a value for n to compute the sigma(i=1, n, i) of
  std::cout << "Enter a value for 'n': ";
  std::cin >> nshort;

  // Calculate the sigma(i=1, n, i)
  /*NOTE: A value of n > 255 will cause sum to overflow*/
  /*NOTE: An overflow can be detected when sum out of nowhere becomes negative*/
  for (short i = 1; i <= nshort; i++) {
    sumshort += i;
  }

  // Output the result of the function
  std::cout << "n = " << nshort << "\n";
  std::cout << "sum = " << sumshort << "\n";

  /*  Part #3  */
  long nlong, sumlong=0;

  // Get a value for n to computer the sigma(i=1, n, i) of
  std::cout << "Enter a new value for 'n': ";
  std::cin >> nlong;

  // Calculate the sigma(i=1, n, i)
  /*NOTE: A value of n > 8965506 will cause sum to overflow*/
  for (long i = 1; i <= nlong; i++) {
    sumlong += i;
  }

  // Output the result of the function
  std::cout << "n = " << nlong << "\n";
  std::cout << "sum = " << sumlong << "\n";

  return 0;
}
