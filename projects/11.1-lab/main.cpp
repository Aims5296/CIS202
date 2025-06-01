#include <iostream>
#include <vector>
#include <algorithm>

/* 
    File: main.cpp 
    Description: Given two different vectors of pizza orders, sorts them in various ways using lambda helper functions.
    Author: Andrew Klopping
    Email: andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 05/31/2025
*/

struct PizzaOrder {
    std::string name;
    int size;
};

struct PizzaOrderWithPrice {
    std::string name;
    int size;
    double price;
};

int main() 
{

    std::cout << std::endl;

    std::vector<PizzaOrder> orders = {
        {"Alice", 12}, {"Bob", 16}, {"Charlie", 10}, {"Diana", 14}
    };

    std::vector<PizzaOrderWithPrice> ordersWithPrice = {
        {"Alice", 12, 11.99}, {"Bob", 16, 15.49}, {"Charlie", 10, 9.99}, {"Diana", 14, 13.75}
    };

    std::cout << "Original Pizza Orders:" << std::endl;

    for (const auto& order : orders)
        std::cout << order.name << " " << order.size << " inches\n";

    std::cout << std::endl;

    std::sort(orders.begin(), orders.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
        return a.size < b.size;
    });

    std::cout << "Sorted by Size (Ascending):" << std::endl;

    for (const auto& order : orders)
        std::cout << order.name << " " << order.size << " inches\n";

    std::sort(orders.begin(), orders.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
        return a.name < b.name;
    });

    std::cout << std::endl << "Sorted by Name (Alphabetical):" << std::endl;

    for (const auto& order : orders)
        std::cout << order.name << " " << order.size << " inches\n";

    std::sort(ordersWithPrice.begin(), ordersWithPrice.end(), [](const PizzaOrderWithPrice& a, const PizzaOrderWithPrice& b) {
        return a.price < b.price;
    });

    std::cout << std::endl << "Sorted by Price (Ascending):";

    for (const auto& order : ordersWithPrice)
        std::cout << std::endl << order.name << " " << order.size << " inches $" << order.price;

    return 0;
}