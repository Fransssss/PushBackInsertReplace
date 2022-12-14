//
// Created by Fransiskus Agapa on 8/13/2022.
//

#ifndef PUSHBACKINSERTREPLACE_CAPITAL_H
#define PUSHBACKINSERTREPLACE_CAPITAL_H

#include "string"
#include "cctype"                                     // to use islower() and toupper()

using std::string;
using std::islower;
using std::toupper;

string capitalize(string& userName)
{
    if(islower(userName.at(0)))                       // if the word is not capitalized
    {
        userName.at(0) = toupper(userName.at(0));     //capitalize it and assing as new value
    }

    return userName;
}

#endif //PUSHBACKINSERTREPLACE_CAPITAL_H
