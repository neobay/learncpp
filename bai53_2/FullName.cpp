//
// Created by Admin on 4/4/2022.
//

#include "FullName.h"


FullName::FullName() {}

FullName::FullName(const string &firstName) : firstName(firstName) {}

FullName::FullName(const string &firstName, const string &lastName) : firstName(firstName), lastName(lastName) {}

FullName::FullName(const string &firstName, const string &midName, const string &lastName) : firstName(firstName),
                                                                                             midName(midName),
                                                                                             lastName(lastName) {}

const string &FullName::getFirstName() const {
    return firstName;
}

void FullName::setFirstName(const string &firstName) {
    FullName::firstName = firstName;
}

const string &FullName::getMidName() const {
    return midName;
}

void FullName::setMidName(const string &midName) {
    FullName::midName = midName;
}

const string &FullName::getLastName() const {
    return lastName;
}

void FullName::setLastName(const string &lastName) {
    FullName::lastName = lastName;
}
