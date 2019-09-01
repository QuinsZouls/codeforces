#include <iostream>

int main() {
    long long int money = 0, counter = 0;
    std::cin >> money;
    counter += money / 100;
    money = money % 100;
    counter += money /20;
    money = money % 20;
    counter += money / 10;
    money = money % 10;
    counter += money / 5;
    money = money % 5;
    counter += money / 1;
    money = money % 1;
    std::cout << counter;
    return 0;
}