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
  for (short i = 1; i <= nshort; i++) {  /*NOTE: A value of n > 255 will cause sum to overflow*/
    sumshort += i;
  }

  // Output the result of the function
  std::cout << "n = " << nshort << "\n";
  std::cout << "sum = " << sumshort << "\n";

  /*  Part #4  */
  long nlong, sumlong=0;

  // Get a value for n to computer the sigma(i=1, n, i) of
  std::cout << "Enter a new value for 'n': ";
  std::cin >> nlong;

  // Calculate the sigma(i=1, n, i)
  for (long i = 1; i <= nlong; i++) {   /*NOTE: A value of n > will cause sum to overflow*/
    sumlong += i;
  }

  // Output the result of the function
  std::cout << "n = " << nlong << "\n";
  std::cout << "sum = " << sumlong << "\n";

  return 0;
}
