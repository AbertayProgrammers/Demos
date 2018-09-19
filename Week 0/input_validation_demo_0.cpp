#include <iostream>
#include <sstream>
#include <limits>


// dynamic <type> input validation
template<typename T1> T1 get_input(const char * msg){
	T1 input;	// stores input of type T

	while (true) {
		// Print request msg
		std::cout << msg << std::endl;

		// Don't know where cin has been, what it might have stepped in!

		//clear error flag
		std::cin.clear();
		//ignore everything on line so that bad input cannot effect next input request
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


		// if cin does not fail, break from loop
		if (std::cin >> input){
			break;
		}

		// did not break from loop, cin must have failed
		std::cout << "Invalid Input!" << std::endl;
	}

	// return input matching expected type
	return input;
}

// simple single-type input validation
int get_int_input(const char * msg){
	int input;	// stores an integer

	while(true){ // Loop forever*

		// Don't know where cin has been, what it might have stepped in!

		//clear error flag
		std::cin.clear();
		//ignore everything on line so that bad input cannot effect next input request
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


		// Print msg to console
		std::cout << msg << std::endl;

		// if cin is successful, break from loop
		if (std::cin >> input){
			break;
		}

		// did not break from loop, cin must have failed
		std::cout << "Invalid Input!" << std::endl;
	}

	// return input matching expected type
	return input;
}

/*
You may want to take a look at:

	iostream fail states
	http://www.cplusplus.com/reference/ios/ios/fail/

	iostream reference
	http://www.cplusplus.com/reference/iostream/

*/

int main(){
	// Limitations
	// cin will succeed if it has even a partial success
	// e.g. 123abc as int will succeed and abc would be passed
	// ..to next cin - if unprotected


	// request input of type 'float' from dynamic input function
	float gimme_float = get_input<float>("float?");

	// request input of type 'int' from dynamic input function
	int num_of_members = get_int_input("How many members are present today?");

	// print num_of_members to screen
	std::cout << "We have " << num_of_members << " members with us today!" << std::endl;

	// 0 typically signifies a successful run
	return 0;
}
