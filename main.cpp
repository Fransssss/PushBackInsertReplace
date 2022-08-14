// Author: Fransiskus Agapa
// 8/13/22
// Have fun - enjoy the process

#include <iostream>
#include "string"
#include "Capital.h"
#include "LocateSpace.h"

// =================
// use push_back, insert, replace, check blank/space, capitalize name
// =================

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

int main()
{
            string name;
            string firstName;
            string copiedStdName;
            string temptStName;
            string secondName;
            size_t spaceIndex;
            string userResponse;

            cout << "\nWhat is your full name: ";
            getline(cin, name);

            spaceIndex = locateSpace(name);

            firstName = name.substr(0, spaceIndex);
            firstName = capitalize(firstName);

            secondName = name.substr(spaceIndex + 1);
            secondName = capitalize(secondName);
            name = firstName + ' ' + secondName;

            name.push_back('!');

            cout << "\nHello " << name << endl;
            copiedStdName = firstName;                                                  // to prompt user's short name
            temptStName = firstName;
            temptStName.push_back('?');
            cout << "\nMay I call you " << temptStName;
            cin >> userResponse;

            if (userResponse == "yes" or userResponse == "Yes" or userResponse == "YES")
            {
                copiedStdName = copiedStdName.insert(0, "Great! ");                 // put/add word
                copiedStdName = copiedStdName.insert(copiedStdName.size(),
                                                     " Well done getting this far to learn c++, You Are Getting Better!");
                cout << '\n' << copiedStdName << endl;
            }
            else if (userResponse == "no" or userResponse == "No" or userResponse == "NO")
            {

                copiedStdName = copiedStdName.replace(0, 5,
                                                      "No worries, keep going, you are doing great at learning c++");
                cout << '\n' << copiedStdName << endl;
            }
            else
            {
                copiedStdName = copiedStdName.replace(0, 5,
                                                      "Hmm, unclear response...its okay, keep learning c++ cause you are doing so well");
                cout << '\n' << copiedStdName << endl;
            }



    return 0;
}
