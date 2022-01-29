// Noah Miller


#include <iostream>
double findInflationRate(double oP, double nP);


int main()
{
    int exitQuerry = 1;
    double oldPrice;
    double newPrice;
    double inflation;

    std::cout << "This program will gauge the rate of Inflation for an item over the past year\n";


    while (exitQuerry == 1) {
        std::cout << "Please enter price of the item 1 year ago \n";
        std::cin >> oldPrice;

        std::cout << "Please enter current price of the item \n";
        std::cin >> newPrice;

        inflation = findInflationRate(oldPrice, newPrice);
        inflation = inflation * 100.00;
        std::cout <<"You have a "<< inflation<<" % inflation rate";



        std::cout << "\nGet inflation rate on another item (1 = yes, 0 = exit) \n";
        std::cin >> exitQuerry;

    }
}

double findInflationRate(double oP, double nP) {
        double i;
        i = ((nP - oP) / oP);
        return i;
}
