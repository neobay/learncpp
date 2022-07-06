//
// Created by Admin on 4/4/2022.
//

#include "Address.h"

Address::Address() {}

Address::Address(const string &roadName) : roadName(roadName) {}

Address::Address(const string &roadName, const string &number) : roadName(roadName), number(number) {}

Address::Address(const string &roadName, const string &number, const string &alley) : roadName(roadName),
                                                                                      number(number), alley(alley) {}

Address::Address(const string &roadName, const string &number, const string &alley, const string &ward) : roadName(
        roadName), number(number), alley(alley), ward(ward) {}

Address::Address(const string &roadName, const string &number, const string &alley, const string &ward,
                 const string &district) : roadName(roadName), number(number), alley(alley), ward(ward),
                                           district(district) {}

Address::Address(const string &roadName, const string &number, const string &alley, const string &ward,
                 const string &district, const string &city) : roadName(roadName), number(number), alley(alley),
                                                               ward(ward), district(district), city(city) {}

Address::Address(const string &roadName, const string &number, const string &alley, const string &ward,
                 const string &district, const string &city, const string &nation) : roadName(roadName), number(number),
                                                                                     alley(alley), ward(ward),
                                                                                     district(district), city(city),
                                                                                     nation(nation) {}
