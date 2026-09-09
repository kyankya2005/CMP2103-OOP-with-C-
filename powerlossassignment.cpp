// Power loss is formally defined as the product of resistance and the square of the current.
// Resistance is defined as resistivity * (L / A), where L is the length and A is the cross-sectional area.

// Write a program that prompts the user to enter L, A, resistivity, and current,
// and returns the power loss of a transmission line.

#include <iostream>

int main() {
    double L, A, resistivity, current;

    std::cout << "Enter length L (m): ";
    std::cin >> L;

    std::cout << "Enter cross-sectional area A (m^2): ";
    std::cin >> A;

    std::cout << "Enter resistivity (ohm*m): ";
    std::cin >> resistivity;

    std::cout << "Enter current (A): ";
    std::cin >> current;

    double resistance = resistivity * (L / A);
    double powerLoss = resistance * current * current;

    std::cout << "\nResistance = " << resistance << " ohms\n";
    std::cout << "Power loss = " << powerLoss << " watts\n";

    return 0;
}
