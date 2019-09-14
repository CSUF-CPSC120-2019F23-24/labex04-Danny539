// Sales prediction

#include <iostream>

int main()

{

  const double sales_rate = 0.18;
  const int my_sales = 2103419227;
  long nextyear;

  nextyear = (sales_rate + my_sales) + my_sales;

  std::cout << "last years sales were " << my_sales << std::endl;
  std::cout << "this years sales prediction will be " << nextyear << std::endl;

  return 0;

}
