//
//  main.cpp
//  Recursion
//
//  Created by Bowen, Tanner on 3/6/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include <iostream>
using namespace std;

double fib(double number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return fib(number - 1) + fib(number - 2);
    }
}

double fact(double number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * fact(number - 1);
    }
}

int main()
{
    cout << fact(100) << endl;
    
//    for (int num = 0; num < 20; num++)
//    {
//        cout << num << "th fibonacci value is " << fib(num) << endl;
//        cout << num << " Factorial is: " << fact(num) << endl;
//    }
//    for (int number = 0; number < 10; number++)
//    {
//        cout << fib(number) << ", ";
//    }
    return 0;
}
