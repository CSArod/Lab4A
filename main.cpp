/*Name: Alejandro_Rodriquez, 2001889172, Lab4A
* Description: If_Statements
* Input: Floating_point/doubles/strings
* Output: Largest_input_value
*/
//Necessary libraries included
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    //declaration of userInput variables
    long double userInput1; 
    long double userInput2; 
    std::fixed;
    std::showpoint;
    //prompt for floating point input value 
    std::cout << "Enter a floating point number\n**";
    std::cin >> userInput1;
    std::cout << "\nEnter another floating point number\n**";
    std::cin >> userInput2;
    //Declaration of output variables
    long double x;
    long double y;
    x = userInput1;
    y = userInput2;
    double result;
    //User input value outputs
    std::cout << "\nYou enterd " << x << " and ";
    std::cout << y << std::endl;
    //if statement comparing user inputs for largest value
    if (x > y)
        std::cout << "The largest is " << x << std::endl;   
      else
        std::cout << "The largest is " << y << std::endl;
    //Variables containing user string inputs
    std::string userString1;
    std::string userString2;
    //Prompt for user input strings
    std::cout << "\nEnter a string\n**";
    std::cin >>userString1;
    std::cout << "\nEnter a second string\n**";
    std::cin >> userString2;
    //Output of user input strings
    std::cout << "\nYou entered \"" << userString1;
    std::cout << "\" and \"" << userString2 << "\"" <<std::endl;
    //Variable declaration for largest user string output
    std::string result2;
    //Shorthand if statement comparing user string inputs
    result2 = (userString1 > userString2)? userString1:userString2;
    //Output containing largest user input string value
    std::cout << "The Largest is \"" << result2 << "\""<< std::endl;

    return 0;
}
