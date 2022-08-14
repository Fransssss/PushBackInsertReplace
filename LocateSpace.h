//
// Created by XaveF on 8/13/2022.
//

#ifndef PUSHBACKINSERTREPLACE_LOCATESPACE_H
#define PUSHBACKINSERTREPLACE_LOCATESPACE_H

#include "string"
#include "cctype"

using std::isspace;
using std::string;

int locateSpace(const string& userName)
{
    size_t spaceIndex = -1;
    for(size_t i = 0; i < userName.size(); ++i)
    {
        if(isspace(userName.at(i)))                // if index i is space
        {
            spaceIndex = i;                               // take the index of space and assign to spaceIndex
        }
    }

    return spaceIndex;
}


#endif //PUSHBACKINSERTREPLACE_LOCATESPACE_H
