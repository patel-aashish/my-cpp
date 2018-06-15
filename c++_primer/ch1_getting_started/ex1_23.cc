#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item prev, cur;
  int count = 0;

  if (std::cin >> prev) {
    count++;
    while (std::cin >> cur) {
      if (cur.isbn() == prev.isbn()) {
        count++;
      } else {
        std::cout << prev.isbn() << " occured " << count << " times" << std::endl;
        prev = cur;
        count = 1;
      }
    }
    std::cout << prev.isbn() << " occured " << count << " times" << std::endl;
  }

  return 0;
}
