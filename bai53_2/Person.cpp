//
// Created by Admin on 4/4/2022.
//

#include "Person.h"

Person::Person() {}

Person::Person(const string &id) : id(id) {}

Person::Person(const string &id, const FullName &fullName) : id(id), fullName(fullName) {}

Person::Person(const string &id, const FullName &fullName, const Address &address) : id(id), fullName(fullName),
                                                                                     address(address) {}

Person::Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth) : id(id),
                                                                                                                fullName(
                                                                                                                        fullName),
                                                                                                                address(address),
                                                                                                                dateOfBirth(
                                                                                                                        dateOfBirth) {}

Person::Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth,
               const string &email) : id(id), fullName(fullName), address(address), dateOfBirth(dateOfBirth),
                                      email(email) {}

Person::Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth,
               const string &email, const string &phoneNumber) : id(id), fullName(fullName), address(address),
                                                                 dateOfBirth(dateOfBirth), email(email),
                                                                 phoneNumber(phoneNumber) {}

Person::Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth,
               const string &email, const string &phoneNumber, const string &occupation) : id(id), fullName(fullName),
                                                                                           address(address),
                                                                                           dateOfBirth(dateOfBirth),
                                                                                           email(email),
                                                                                           phoneNumber(phoneNumber),
                                                                                           occupation(occupation) {}

Person::Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth,
               const string &email, const string &phoneNumber, const string &occupation, const string &gender) : id(id),
                                                                                                                 fullName(
                                                                                                                         fullName),
                                                                                                                 address(address),
                                                                                                                 dateOfBirth(
                                                                                                                         dateOfBirth),
                                                                                                                 email(email),
                                                                                                                 phoneNumber(
                                                                                                                         phoneNumber),
                                                                                                                 occupation(
                                                                                                                         occupation),
                                                                                                                 gender(gender) {}

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

const FullName &Person::getFullName() const {
    return fullName;
}

void Person::setFullName(const FullName &fullName) {
    Person::fullName = fullName;
}

const Address &Person::getAddress() const {
    return address;
}

void Person::setAddress(const Address &address) {
    Person::address = address;
}

const string &Person::getDateOfBirth() const {
    return dateOfBirth;
}

void Person::setDateOfBirth(const string &dateOfBirth) {
    Person::dateOfBirth = dateOfBirth;
}

const string &Person::getEmail() const {
    return email;
}

void Person::setEmail(const string &email) {
    Person::email = email;
}

const string &Person::getPhoneNumber() const {
    return phoneNumber;
}

void Person::setPhoneNumber(const string &phoneNumber) {
    Person::phoneNumber = phoneNumber;
}

const string &Person::getOccupation() const {
    return occupation;
}

void Person::setOccupation(const string &occupation) {
    Person::occupation = occupation;
}

const string &Person::getGender() const {
    return gender;
}

void Person::setGender(const string &gender) {
    Person::gender = gender;
}
