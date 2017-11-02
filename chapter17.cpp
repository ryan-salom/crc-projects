/* CH 17 Exceptions

-indication of problem during execution
-Exception handling cleans up these messes

Try & Catch Blocks
-Try blocks have statements that might cause exceptions
 -any local variables become out of scope once the body ends
 -if run successfully, catch is ignored
-Catch handlers process exceptions
 -At least one catch must follow a try
 -Parameter(only one) used for catch blocks are for the body
 -any local variables become out of scope once the body ends
 
-If a noexcept function calls a functions that throws an exceptions
 or executes a throw statement, the program terminates

*/

#include <stdexcept> //contains runtime_error
class DivideByZero : public std:: runtime_error{
public:
    DivideByZero()
        : std::runtime_error{"attempted to divide by zero"}{}
};

double quotient(int num, int dem){
    if (dem == 0)
        throw DivideByZero{}; //terminates function
    
    
    return static_cast<double> (num/dem);
};

//try block contains code that might throw Exceptions and
// code that will not execute if exception occured
try{
    double result = quotient(number1, number2);
    cout << "The quotient is " << result << endl;
}
catch (const DivideByZero& exception) {
    cout << "Exception occured: " << exception.what() << endl;
}

void print() noexcept; //explicitly states print doesn't throw Exceptions
void lol() const noexcept; //Or this for constant functions






