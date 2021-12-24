#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

class Sales_data
{

public:

    Sales_data(std::string bookNo, unsigned units_sold = 0, double revenue = 0.0);
    Sales_data();

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    std::string isbn() const { return bookNo; }

    Sales_data& Sales_data::combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }

    istream &read(istream &is, Sales_data &item)
    {
        double price = 0;
        is >> item.bookNo >> item.units_sold >> price;
        item.revenue = price * item.units_sold;
        return is;
    }

    ostream &print(ostream &os, const Sales_data &item)
    {
        os << item.isbn() << " " << item.units_sold << " "
           << item.revenue << " " << item.units_sold;
        return os;
    }

    Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
    {
        Sales_data sum =lhs;
        sum.combine(rhs);
        return sum;
    }
};

#endif