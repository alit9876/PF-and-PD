#include <iostream>
using namespace std;
float checkCost (string product, string city, int quantity);
main()
{
    string city,product;
    int quantity;
    float price;
    cout << "Enter city name: ";
    cin >> city;
    cout << "Enter product name: ";
    cin >> product;
    cout << "Enter quantity: ";
    cin >> quantity;
    price = checkCost (product, city, quantity);
    cout << "Your bill is: " << price << endl;

}

float checkCost (string product, string city, int quantity)
{
    float price;
    if (product == "coffe")
    {
        if (city == "sofia")
        price = 0.50 * quantity;
        else if (city == "plovdlv")
        price = 0.40 * quantity;
        else if (city == "varna")
        price = 0.45 * quantity;
    }
      if (product == "water")
    {
        if (city == "sofia")
        price = 0.80 * quantity;
        else if (city == "plovdlv")
        price = 0.70 * quantity;
        else if (city == "varna")
        price = 0.70 * quantity;
    }
      if (product == "beer")
    {
        if (city == "sofia")
        price = 1.20 * quantity;
        else if (city == "plovdlv")
        price = 1.15 * quantity;
        else if (city == "varna")
        price = 1.10 * quantity;
    }
      if (product == "sweets")
    {
        if (city == "sofia")
        price = 1.45 * quantity;
        else if (city == "plovdlv")
        price = 1.30 * quantity;
        else if (city == "varna")
        price = 1.35 * quantity;
    }
      if (product == "peanuts")
    {
        if (city == "sofia")
        price = 1.60 * quantity;
        else if (city == "plovdlv")
        price = 1.50 * quantity;
        else if (city == "varna")
        price = 1.55 * quantity;
    }
    return price;
}