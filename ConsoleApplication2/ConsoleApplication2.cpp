#include "Header.h"

int main()
{
    int num1 = 10, num2 = 0;
    int result = addition(num1, num2);
    cout << "Result: " << result << endl;

    result = subtraction(num1, num2);
    cout << "Result: " << result << endl;

    result = multiplication(num1, num2);
    cout << "Result: " << result << endl;

    try
    {
    	result = division(num1, num2);
		cout << "Result: " << result << endl;
    }
    catch (...)
    {
        cout << "Error occured" << endl;
    }
}

