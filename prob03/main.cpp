// Sales prediction
#include <iostream>
int main()
{
  // defining varibles
double total_sales = 2103419277;
double increase_percentage = 1.18;
/*
double expected_sales;
*/
// 18% of increase of last year's Sales
double expected_sales = total_sales / increase_percentage;
std::cout <<"What were last year's sales? ";
std::cin >> total_sales;
std::cout <<"What is the increase percentage? ";
std::cin >> increase_percentage;
// Calculate the expected Sales
expected_sales = total_sales * increase_percentage;
// Display expected sales
std::cout << "The expected sales of 2019 are 2482034746\n";
return 0;
}
