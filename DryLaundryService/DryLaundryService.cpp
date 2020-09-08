
#include <iostream>
#include <string>

int main()
{
    int shirt;
    int suit;
    int pants;
    const int priceshirt = 150;
    const int pricesuit = 100;
    const int pricepants = 200;
    const double tax = 0.25;
    double taxoftotal = 0.0;
    double totalprice = 0.0;
    char answer;

    do {
        std::cout << "How many shirts do you have : ";
        std::cin >> shirt;
        std::cout << "How many suit do you have : ";
        std::cin >> suit;
        std::cout << "How many pants do you have : ";
        std::cin >> pants;

        taxoftotal = (((shirt * priceshirt) + (suit * pricesuit) + (pants * pricepants))* tax);
        totalprice = (((shirt * priceshirt) + (suit * pricesuit) + (pants * pricepants)) + taxoftotal);

            std::cout << "Your bill comes to: " << totalprice << "NOK" << std::endl;
        std::cout << "Do you want to continue? ";
        std::cin >> answer;


    } while (answer == 'y');

}

