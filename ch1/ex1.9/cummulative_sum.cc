#include <iostream>

int main()
{
    int sum = 0, count = 50;
    while (count <= 100)
    {
        sum += count++;
    }
    std::cout << "Sum of 50 t0 100 inclusive is " << sum << std::endl;
    return 0;
}