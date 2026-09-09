// (Average speed) Assume a runner runs 14 kilometers in 45 minutes and 30 seconds.
// Write a program that displays the average speed in miles per hour. (Note that
// 1 mile is 1.6 kilometers.)

#include <iostream>
using namespace std;

int main()
{
    // Distance in kilometers
    double kilometers = 14;

    // Time: 45 minutes and 30 seconds
    double minutes = 45;
    double seconds = 30;

    // Convert kilometers to miles
    double miles = kilometers / 1.6;

    // Convert time to hours
    double hours = (minutes * 60 + seconds) / 3600;

    // Calculate average speed
    double speed = miles / hours;

    cout << "The average speed is " << speed << " miles per hour." << endl;

    return 0;
}
