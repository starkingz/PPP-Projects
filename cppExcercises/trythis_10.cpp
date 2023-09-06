#include <iostream>
using namespace std;
/**
 * Converts yen, euros and pounds into dollar
 * Suffix 'y' or 'e' or 'p' indicates the currency name
 * any other suffix is an error
*/
int main()
{
    const double pounds_per_dollar = 1.26;
    const double yen_per_dollar = 0.0072;
    const double euros_per_dollar = 1.08;
    double currency_amount = 1;
    char currency = 'y';

    cout << "Please enter an amount followed by currency (y = yen or p = pounds or e = euros):\n";
    cin >> currency_amount >> currency;
    if (currency == 'y')
    cout << currency_amount << " yen == " << yen_per_dollar * currency_amount << " USD\n";
    else if (currency == 'p')
    cout << currency_amount << " pounds == " << pounds_per_dollar * currency_amount << " USD\n";
    else if (currency == 'e')
    cout << currency_amount << " euros == " << euros_per_dollar * currency_amount << " USD\n";
    else
    cout << "Currency not available" << endl;

    return 0;
}