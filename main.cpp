// Name: Ryan Khieu
// Program Name: Functions Lab
// Date : 11/21/24
#include <iostream>
#include <string>

void countdown();
void customGreet(std::string name, int times);
int getFavoriteNumber();
int calculateAverage(int a, int b, int c);

int main() {
    countdown();

    std::cout << "Enter your name: ";
    std::string name;
    std:getline(std::cin, name);
    std::cout << "How many times would you like to be greeted? ";
    int times;
    std::cin >> times;
    customGreet(name, times);
    
    int favNumber = getFavoriteNumber();
    std::cout << "Your favorite number is: " << favNumber << std::endl;

    std::cout << "Enter the first number: ";
    int a;
    std::cin >> a;
    std::cout << "Enter the second number: ";
    int b;
    std::cin >> b;
    std::cout << "Enter the third number: ";
    int c;
    std::cin >> c;
    int average = calculateAverage(a, b, c);
    std::cout << "The average of the three numbers is: " << average << std::endl;
    return 0;
}

void countdown() {
    for (int i = 10; i > 0; i--) {
        std::cout << i << std::endl;
    }
    std::cout << "Lift off!" << std::endl;
}

void customGreet(std::string name, int times) {
    for (int i = 0; i < times; i++) {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
}

int getFavoriteNumber() {
    return 7;
}

int calculateAverage(int a, int b, int c) {
    return (a + b + c) / 3;
}