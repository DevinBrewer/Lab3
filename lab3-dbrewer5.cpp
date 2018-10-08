// main.cpp
// Devin Brewer

#include <iostream>

int main() {
  /*  Part #1 & #2  */
  short nShort, sumShort=0;

  // Get a value for n to compute the sigma(i=1, n, i) of
  std::cout << "Enter a value for 'n': ";
  std::cin >> nShort;

  // Calculate the sigma(i=1, n, i)
  for (short i = 1; i <= nShort; i++) {
    sumShort += i;
  }

  // Output the result of the function
  std::cout << "n = " << nShort << "\n";
  std::cout << "sum = " << sumShort << "\n";

  /*  Part #3  */
  long nLong, sumLong=0;

  // Get a value for n to computer the sigma(i=1, n, i) of
  std::cout << "Enter a new value for 'n': ";
  std::cin >> nLong;

  // Calculate the sigma(i=1, n, i)
  for (long i = 1; i <= nLong; i++) {
    sumLong += i;
  }

  // Output the result of the function
  std::cout << "n = " << nLong << "\n";
  std::cout << "sum = " << sumLong << "\n";

  /*  Part #4  */
  float productFloat=1;

  // Get a value for n to compute the product(i=1, n, i)
  std::cout << "Enter a new value 'n:' ";
  std::cin >> nLong;

  // Calculate the product(i=1, n, i)
  for (long i = 1; i <= nLong; i++) {
    productFloat *= i;
  }

  // Output the result of the function
  std::cout << "n = " << nLong << "\n";
  std::cout << "product = " << productFloat << "\n";

  /*  Part #5  */
  double productDouble=1;

  // Get a value for n to compute the product(i=1, n, i)
  std::cout << "Enter a new value 'n:' ";
  std::cin >> nLong;

  // Calculate the product(i=1, n, i)
  for (long i = 1; i <= nLong; i++) {
    productDouble *= i;
  }

  // Output the result of the function
  std::cout << "n = " << nLong << "\n";
  std::cout << "product = " << productDouble << "\n";


  return 0;
}
