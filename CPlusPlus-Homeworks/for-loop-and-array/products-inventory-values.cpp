#include <iostream>
#include <string>
using namespace std;

const int MAX_PRODUCTS = 100;

struct stProductInfo
{
    string ProductName;
    float ProductPrice;
    int ProductQuantity;
};

void ReadProductInfo(stProductInfo &Product)
{
    cout << "Please enter Product Name:\n";
    cin.ignore(1, '\n');
    getline(cin, Product.ProductName);
    cout << "Please enter Product Quantity:\n";
    cin >> Product.ProductQuantity;
    cout << "Please enter Product Price:\n";
    cin >> Product.ProductPrice;
}

void ReadProducts(stProductInfo Products[MAX_PRODUCTS], int &NumberOfProducts)
{
    cout << "How many products do you want to enter? 1 to 100?\n";
    cin >> NumberOfProducts;

    for (int i = 0; i < NumberOfProducts; i++)
    {
        cout << "\nPlease enter Product's " << i + 1 << " Info\n";
        ReadProductInfo(Products[i]);
    }
}

float CalculateTotalValue(stProductInfo Product)
{
    return Product.ProductPrice * Product.ProductQuantity;
}

void DisplayAllTotalValues(stProductInfo Products[MAX_PRODUCTS], int NumberOfProducts)
{
    for (int i = 0; i < NumberOfProducts; i++)
    {
        cout << "Total value of " << Products[i].ProductName << " is " << CalculateTotalValue(Products[i]) << endl;
    }
}

float CalculateOverAllInventoryValue(stProductInfo Products[MAX_PRODUCTS], int NumberOfProducts)
{
    float Total = 0;

    for (int i = 0; i < NumberOfProducts; i++)
    {
        Total += CalculateTotalValue(Products[i]);
    }

    return Total;
}

void DisplayOverAllInventoryValue(stProductInfo Products[MAX_PRODUCTS], int NumberOfProducts)
{
    cout << "Overall Inventory Value = " << CalculateOverAllInventoryValue(Products, NumberOfProducts) << endl;
}
int main()
{
    stProductInfo Products[MAX_PRODUCTS];
    int NumberOfProducts;

    ReadProducts(Products, NumberOfProducts);

    cout << "\n*************************************\n";
    DisplayAllTotalValues(Products, NumberOfProducts);
    cout << "\n*************************************\n";
    DisplayOverAllInventoryValue(Products, NumberOfProducts);

    return 0;
}