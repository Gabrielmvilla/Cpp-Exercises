/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * This is a program/exercice made to work with strings, checking if a
 * sentence, entered by a user, is a palindrome.
 * 
 */

#include <iostream>
using std::cin; using std::endl; using std::cout; using std::string;

int main()
{
    short forHlpr, strSize;
    string phrase1, noSpaces, noSpacesInv;
    
    while(1)
    {
        noSpaces.clear();
        noSpacesInv.clear();
        
        cout << "Insert a sentence to find out if it's a palindrome (0 to quit): " << endl << "-> ";
        getline(cin, phrase1);
        
        if (phrase1 == "0")
        {
            cout << "0 is bye." << endl;
            exit(0);
        }
        
        strSize = phrase1.length();
        
        for (forHlpr = 0; forHlpr < strSize; forHlpr++)
        {
            if (phrase1[forHlpr] != ' ')
            {
                noSpaces = noSpaces + phrase1[forHlpr];
            }
        }
        cout << " Input (no spaces):  " << noSpaces << endl;
        
        strSize = noSpaces.length();
        
        for (forHlpr = (strSize-1); forHlpr >= 0; forHlpr--)
        {
            noSpacesInv = noSpacesInv + noSpaces[forHlpr];
        }
        
        cout << "Inverse (no spaces): " << noSpacesInv << endl;
        
        if (noSpaces == noSpacesInv)
        {
            cout << "The sentence is a palindrome!!!" << endl << endl;
        }
        else
        {
            cout << "The sentence is NOT a palindrome!!!" << endl << endl;
        }
    }
}

