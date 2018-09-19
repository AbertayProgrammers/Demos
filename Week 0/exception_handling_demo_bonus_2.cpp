#include <iostream>

/*
    Abertay Programming Society
    Week 0: Exception Handling Demo (Bonus 2/2)
    "Custom exception messages by extending std::runtime_error"
    By Andrew Calder
*/


class myException : public std::runtime_error{
    private:
        // A const char * is just a C-style null terminated string.
        // You could replace 'const char * const' with 'std::string', just remember to #include <string>
        const char * const default_message = "Something went wrong!";

    public:
        // Allows us to throw a 'myException' with a custom_message argument
        myException(const char * custom_message) throw() : std::runtime_error(custom_message) {}

        // Allows us to throw a 'myException' with no message argument (uses default_message)
        myException() throw() : std::runtime_error(default_message) {}

};



void foo(){
    // throw with custom message
    throw myException("oooh look a custom error_message");
}

void bar(){
    // throw and use default message
    throw myException();
}

int main(int argc, char** argv) {
    try{
        foo(); // attempt to do this
    }
    catch (myException ex){ // if foo() failed find out '.what()' happened
        std::cout << "Foo Error: " << ex.what() << std::endl;
    }

    // and the same for bar...
    try {
      bar();
    }
    catch (myException ex){
        std::cout << "Bar Error: " << ex.what() << std::endl;
    }

    return 0;
}
