#include <iostream>

int main()
{
    int start = 0, end = 0;
    std::cout << "Enter two integers:\n";
    std::cin >> start >> end;
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    
    while (start <= end)
    {
        std::cout << start++ << std::endl;
    }
    return 0;
}