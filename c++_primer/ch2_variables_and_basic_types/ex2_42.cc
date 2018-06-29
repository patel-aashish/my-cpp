#include <iostream>
#include <string>
#include "Sales_data.h"

int main () {
  Sales_data book, sum;
  double price;
  if ( std::cin >> book.isbn >> book.count >> price ) {
    sum.isbn = book.isbn;
    sum.count = book.count;
    sum.revenue = book.count * price;
    while (std::cin >> book.isbn >> book.count >> price) {
      if ( sum.isbn == book.isbn ) {
        sum.count += book.count;
        sum.revenue += book.count * price;
      } else {
        std::cout << sum.isbn << " " << sum.count << " " << sum.revenue;
        std::cout << " " << (sum.revenue / sum.count) << std::endl;
        sum.isbn = book.isbn;
        sum.count = book.count;
        sum.revenue = book.count * price;
      }
    }
    // For last record
    std::cout << sum.isbn << " " << sum.count << " " << sum.revenue;
    std::cout << " " << (sum.revenue / sum.count) << std::endl;
  } else {
    std::cout << "No records found!!" << std::endl;
  }
}
