#include <iostream>
using namespace std;

float calculateM (int age, int priceW, int priceT);

main()
{
    int age;
    float priceW, priceT, money;

    cout << "Enter Lilly Age: ";
    cin >> age;
    cout << "Enter Machine Price: ";
    cin >> priceW;
    cout << "Enter  toy price: ";
    cin >> priceT;

    money = calculateM (age, priceW, priceT);

    if (money > priceW)
    {
        money = money - priceW;
        cout << "Yes! " << money << " USD are Remaining";
    }
    if (money < priceW)
    {
        money = priceW - money;
        cout << "No! " << money << " more USD are Required";
    }
}

float calculateM (int age, int priceW, int priceT)
{

    int n = 1;
    float even = 0;
    float odd = 0;
    float money, sum;

    while (age > 0)
    {
        if (age % 2 == 0)
        {
            even++;
        }
        else if (age % 2 != 0)
        {
            odd++;
        }
        age--;
    }

    sum = (even / 2) * (20 + (even - 1) * 10);

    money = sum + (odd * priceT);
    money = money - even;

    return money;
}