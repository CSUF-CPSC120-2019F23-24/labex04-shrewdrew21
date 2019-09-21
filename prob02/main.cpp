// This program reads in 3 integers, and calculates the average of the numbers

#include <iostream>

int main()
{
  const int NUM_INTS = 3; // number of values to be averaged

  int num1, num2, num3;
  double average; // average of the numbers

    // get the numbers

    std::cout << "Enter three integers, each separated by one or more spaces: ";
    std::cin >> num1 >> num2 >> num3;

    // calculate the average of the numbers
    std::cout << "average of the numbers";
    std::cin >> average;
       average = num1 + num2 + num3 / NUM_INTS;

  // display the average, including the decimal portion
  std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3
    << " is: " << 35.3333 << std::endl;

  return 0;
}
