//
// Created by Fransiskus Agapa on 8/13/2022.
//

#ifndef PUSHBACKINSERTREPLACE_CAPITAL_H
#define PUSHBACKINSERTREPLACE_CAPITAL_H

#include "string"
#include "cctype"

using std::string;
using std::islower;
using std::toupper;

string capitalize(string& userName)
{
    if(islower(userName.at(0)))
    {
        userName.at(0) = toupper(userName.at(0));
    }

    return userName;
}

#endif //PUSHBACKINSERTREPLACE_CAPITAL_H
