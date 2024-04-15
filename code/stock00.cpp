#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative;"
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double prince)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = prince;
        set_tot();
    }
}

void Stock::sell(long num, double prince)
{
    using std::cout;
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";        
    }
    else if (num > shares)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = prince;
        set_tot();      
    }
}

void Stock::update(double prince)
{
    share_val = prince;
    set_tot();
}

void Stock::show()
{
    std::cout << "Campany: " << company
              << " Shares: " << shares << '\n'
              << " Shares Prince: $" << share_val
              << " Total Worth: $" << total_val << '\n';
}