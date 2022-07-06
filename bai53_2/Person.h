//
// Created by Admin on 4/4/2022.
//

#ifndef CPP_JETBRAIN_PERSON_H
#define CPP_JETBRAIN_PERSON_H

#include <string>
#include "Address.h"
#include "FullName.h"

using namespace std;
class Person {
    string id;
    FullName fullName;
    Address address;
    string dateOfBirth;
    string email;
    string phoneNumber;
    string occupation;
    string gender;
public:
    Person();

    Person(const string &id);

    Person(const string &id, const FullName &fullName);

    Person(const string &id, const FullName &fullName, const Address &address);

    Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth);

    Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth,
           const string &email);

    Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth,
           const string &email, const string &phoneNumber);

    Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth,
           const string &email, const string &phoneNumber, const string &occupation);

    Person(const string &id, const FullName &fullName, const Address &address, const string &dateOfBirth,
           const string &email, const string &phoneNumber, const string &occupation, const string &gender);

    const string &getId() const;

    void setId(const string &id);

    const FullName &getFullName() const;

    void setFullName(const FullName &fullName);

    const Address &getAddress() const;

    void setAddress(const Address &address);

    const string &getDateOfBirth() const;

    void setDateOfBirth(const string &dateOfBirth);

    const string &getEmail() const;

    void setEmail(const string &email);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

    const string &getOccupation() const;

    void setOccupation(const string &occupation);

    const string &getGender() const;

    void setGender(const string &gender);
};


#endif //CPP_JETBRAIN_PERSON_H
