// main.cpp
// Devin Brewer

#include <iostream>

int main() {
  /*  Part #1  */
  short n, sum=0;

  // Get a value for n to compute the sigma(i=1, n, i) of
  std::cout << "Enter a value for 'n': ";
  std::cin >> n;

  // Calculate the sigma(i=1, n, i)
  for (short i = 1; i <= n; i++) {  /*NOTE: A value of n > 255 will cause sum to overflow*/
    sum += i;
  }

  // Output the result of the function
  std::cout << "n = " << n << "\n";
  std::cout << "sum = " << sum << "\n";


  return 0;
}
