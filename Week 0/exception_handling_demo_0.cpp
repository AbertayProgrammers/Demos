#include <iostream>

/*
    Abertay Programming Society
    Week 0: Exception Handling Demo (1/3)
    By Gayan Jayasekera
*/

int divide_numbers(int a, int b)
{
    return a/b;
}

int main()
{
    // !Hint: try dividing by 0!
    int a, b;
    std::cout << "Number one: ";
    std::cin >> a;
    std::cout << "Number two: ";
    std::cin >> b;

    std::cout << divide_numbers(a, b) << std::endl;

    return 0;
}
