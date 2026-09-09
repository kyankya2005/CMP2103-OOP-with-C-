#include <iostream>
using namespace std;

int main()
{
    double kilometers = 14;

    // Time: 45 minutes and 30 seconds
    double minutes = 45;
    double seconds = 30;

    // Converting kilometers to miles
    double miles = kilometers / 1.6;

    // Converting time to hours
    double hours = (minutes * 60 + seconds) / 3600;

    double speed = miles / hours;

    cout << "The average speed is " << speed << " miles per hour." << endl;

    return 0;
}