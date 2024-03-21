// test.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <chrono>
#include <windows.h>

using namespace std::chrono;

int main()
{
    long double sum = 0;


    // Start Timer
    auto start = high_resolution_clock::now();


    // Loop
    for (int a = 0; a < 1000; ++a)
    {
        for (int b = 0; b < 1000; ++b)
        {
            for (int c = 0; c < 1000; ++c)
            {
                sum += 1.5;
            }
        }
    }


    // Sleep
    int sleepTimer = 0;
    Sleep(sleepTimer);


    // Stop Timer
    auto stop = high_resolution_clock::now();


    // Calculate duration
    auto duration = duration_cast<milliseconds>(stop - start);


    // Output
    std::cout << "Sum: ";
    std::cout << sum;

    std::cout << "\nTime: ";
    std::cout << duration.count();
    std::cout << " milliseconds";

    std::cout << "\nTime without wait: ";
    std::cout << duration.count() - sleepTimer;
    std::cout << " milliseconds";
}