#include <iostream>

/*
    Abertay Programming Society
    Week 0: Exception Handling Demo (3/3)
    By Gayan Jayasekera
*/


int divide_numbers(int a, int b)
{
		if(b==0)
			//throw an exception
			throw 1;
        return a/b;
}

int main()
{
    // !Hint: Try dividing by zero!

    int a, b;
    std::cout << "Number one: ";
    std::cin >> a;
    std::cout << "Number two: ";
    std::cin >> b;

    try{
        std::cout << divide_numbers(a, b);
    }  catch(int& err_code)
    {
        std::cout << "ERROR CODE " << err_code << std::endl;
    }
    return 0;
}
