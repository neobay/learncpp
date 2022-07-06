//
// Created by Admin on 4/4/2022.
//
#include <string>
#ifndef CPP_JETBRAIN_FULLNAME_H
#define CPP_JETBRAIN_FULLNAME_H

using namespace std;


class FullName {
    string firstName;
    string midName;
    string lastName;
public:
    FullName();

    FullName(const string &firstName);

    FullName(const string &firstName, const string &lastName);

    FullName(const string &firstName, const string &midName, const string &lastName);

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getMidName() const;

    void setMidName(const string &midName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

};


#endif //CPP_JETBRAIN_FULLNAME_H
