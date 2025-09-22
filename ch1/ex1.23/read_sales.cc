#include <iostream>
#include "../ex1.20/Sales_item.h"

int main()
{
     Sales_item item1;
    if (std::cin >> item1) {
          int count = 1;
          Sales_item item2;
        while (std::cin >> item2) {
            if (item1.isbn() == item2.isbn()) {
                ++count;
            } else {
                std::cout << count << " transactions occured for " << item1.isbn() << std::endl;
                item1 = item2;
                count = 1;
            }
         }
         
        std::cout << count << " transactions occured for " << item1.isbn() << std::endl;
    }
    return 0;
}