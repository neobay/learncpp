//
// Created by Admin on 4/4/2022.
//
#include <string>
#ifndef CPP_JETBRAIN_ADDRESS_H
#define CPP_JETBRAIN_ADDRESS_H

using namespace std;

class Address {
    string roadName;
    string number;
    string alley;
    string ward;
    string district;
    string city;
    string nation;
public:
    Address();

    Address(const string &roadName);

    Address(const string &roadName, const string &number);

    Address(const string &roadName, const string &number, const string &alley);

    Address(const string &roadName, const string &number, const string &alley, const string &ward);

    Address(const string &roadName, const string &number, const string &alley, const string &ward,
            const string &district);

    Address(const string &roadName, const string &number, const string &alley, const string &ward,
            const string &district, const string &city);

    Address(const string &roadName, const string &number, const string &alley, const string &ward,
            const string &district, const string &city, const string &nation);
};


#endif //CPP_JETBRAIN_ADDRESS_H
