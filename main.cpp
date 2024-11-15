// Juwon Hong
//CIS 25
//14/9/2024

#include <iostream>
#include <limits>

using namespace std;


int main() {
    //Print the size of the short data type
    cout << "The size of short is: " << sizeof(short) <<endl;
    //The size of the short data type minimum
    cout << "The min value is: " <<numeric_limits<short>::min() <<endl;
    //The size of the short data type maximum
    cout << "The max value is: " <<numeric_limits<short>::max() << std::endl;
    
    //Print the size of the double data type
    cout << "The size of double is: " << sizeof(double) <<endl;
    //The size of the double data type minimum
    cout << "The min value is: " <<numeric_limits<double>::min() <<endl;
    //The size of the double data type maximum
    cout << "The max value is: " <<numeric_limits<double>::max() <<endl;
    
    return 0;
}
