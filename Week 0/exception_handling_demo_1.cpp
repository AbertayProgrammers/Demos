#include <iostream>

/*
    Abertay Programming Society
    Week 0: Exception Handling Demo (2/3)
    By Gayan Jayasekera
*/

int divide_numbers(int a, int b)
{
	try{
		if(b==0)
			//throw an exception
			throw 1;
        return a/b;
	}
	catch(int err_code)
    {
        std::cout << "ERROR CODE " << err_code;
        return err_code;
    }

}

int main()
{
	  // !Hint: Try dividing by zero!
    int a, b;
    std::cout << "Number one: ";
    std::cin >> a;
    std::cout << "Number two: ";
    std::cin >> b;

    std::cout << divide_numbers(a, b) << std::endl;

    return 0;
}
