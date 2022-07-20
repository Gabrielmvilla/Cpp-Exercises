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
 * This is a program/exercice made to test/work with strings, ASCII 
 * table and upper/lower cases in user-entered sentences.
 * 
 */

#include <iostream>

using std::string; using std::cout; using std::cin; using std::endl;

void ascii_finder()
{
	char letter1, letterLower, letterUpper;
    int letterUpperAscii, letterLowerAscii;
    
    while(1)
    {
        cout << "### ASCII CODE FINDER ###" << endl << "Insert a letter to find its ASCII code (0 to exit): ";
        cin >> letter1;
        cin.clear();
        cin.ignore(1000, '\n');
        cout << endl;
        
        if (letter1 == '0')
        {
            cout << "You finish the search." << endl;
            return;
        }
        
        if (int(letter1) >= 97 && int(letter1) <= 122)
        {
            letterUpperAscii = int(letter1) - 32;
            letterUpper = char(letterUpperAscii);
        
            cout << "The ascii code for " << letter1 << " is " << int(letter1) << endl;
            cout << "The ascii code for " << letterUpper << " is " << letterUpperAscii << endl << endl;
        }
        else if (int(letter1) >= 65 && int(letter1) <= 90)
        {
            letterLowerAscii = int(letter1) + 32;
            letterLower = char(letterLowerAscii);
        
            cout << "The ascii code for " << letter1 << " is " << int(letter1) << endl;
            cout << "The ascii code for " << letterLower << " is " << letterLowerAscii << endl << endl;
        }
        else
        {
            cout << "This character is invalid." << endl;
        }
    }
}

void all_upper()
{
    string sentence1;
    int str1_len, for_hlpr1;
    
    cout << endl << "### UPPER CASE CONVERTER ###" << endl; 
    
    while(1)
    {
        cout << endl << "Insert a sentence in lower case to convert (or '0' to cancel): " << endl;
        
        getline(cin,sentence1);
          
        if (sentence1 == "0")
        {
            cout << "You finish the convertion." << endl;
            return;
        }    
        str1_len = sentence1.length();
        for (for_hlpr1 = 0; for_hlpr1 <= str1_len; for_hlpr1++)
        {
            if (int(sentence1[for_hlpr1]) >= 97 && int(sentence1[for_hlpr1]) <= 122)
            {
                cout << char(int(sentence1[for_hlpr1]) - 32);
            }
            else
            {
                cout << char(int(sentence1[for_hlpr1]));
            }
        }
    }
}

void all_lower()
{
    string sentence1;
    int str1_len, for_hlpr1;
    
    cout << endl << "### lower case converter ###" << endl;
    
    while(1)
    {
        cout << endl <<  "Insert a sentence in UPPER CASE to convert (or '0' to cancel): " << endl;
        
        getline(cin,sentence1);
        
        if (sentence1 == "0")
        {
            cout << "You finish the convertion." << endl;
            return;
        }    
        str1_len = sentence1.length();
        for (for_hlpr1 = 0; for_hlpr1 <= str1_len; for_hlpr1++)
        {
            if (int(sentence1[for_hlpr1]) >= 65 && int(sentence1[for_hlpr1]) <= 90)
            {
                cout << char(int(sentence1[for_hlpr1]) + 32);
            }
            else
            {
                cout << char(int(sentence1[for_hlpr1]));
            }
        }
    }
}

void set_title()
{
    string sentence1 = "";
    int str1_len, for_hlpr1;
    
    cout << endl << "### Sentence To Title Converter ###" << endl;
    
    while(1)
    {
        
        cout << endl <<  "Insert a sentence in lower case to convert to title (or '0' to cancel): " << endl;
        
        getline(cin,sentence1);
        
        if (sentence1 == "0")
        {
            cout << "You finish the convertion." << endl;
            return;
        }
            
        str1_len = sentence1.length();
        for (for_hlpr1 = 0; for_hlpr1 <= str1_len; for_hlpr1++) // First set all sentence in lower case.
        {
            if (int(sentence1[for_hlpr1]) >= 65 && int(sentence1[for_hlpr1]) <= 90)
            {
                sentence1[for_hlpr1] = char(int(sentence1[for_hlpr1]) + 32);
            }
            else
            {
                sentence1[for_hlpr1] = char(int(sentence1[for_hlpr1]));
            }
        }
        
        if (int(sentence1[0]) >= 97 && int(sentence1[0]) <= 122) // Then, set the first letter in upper case.
        {
            cout << char(int(sentence1[0] - 32));
        }
        else
        {
            cout << char(int(sentence1[0]));
        }
        
        for (for_hlpr1 = 1; for_hlpr1 <= str1_len; for_hlpr1++) // Now sets all the rest of the first letters in upper. 
        {
            if (int(sentence1[for_hlpr1]) == 32 && int(sentence1[for_hlpr1 + 1]) >= 97 && int(sentence1[for_hlpr1 + 1]) <= 122)
            {
                cout << char(int(sentence1[for_hlpr1]));
                cout << char(int(sentence1[for_hlpr1 + 1] - 32));
                for_hlpr1++;
            }
            else
            {
                cout << char(int(sentence1[for_hlpr1]));
            }
        }
    }
}

void invert_cases()
{
    string sentence1;
    int str1_len, for_hlpr1;
    
    cout << endl << "### LOWER aNd upper cAsEs iNvErTeR ###" << endl;
    
    while(1)
    {
        cout << endl <<  "Insert a sentence to invert the cases (or '0' to cancel): " << endl;
        
        getline(cin,sentence1);
        
        if (sentence1 == "0")
        {
            cout << "You finish the convertion." << endl;
            return;
        }
            
        str1_len = sentence1.length();
        for (for_hlpr1 = 0; for_hlpr1 <= str1_len; for_hlpr1++)
        {
            if (int(sentence1[for_hlpr1]) >= 65 && int(sentence1[for_hlpr1]) <= 90)
            {
                cout << char(int(sentence1[for_hlpr1]) + 32);
            }
            else if (int(sentence1[for_hlpr1]) >= 97 && int(sentence1[for_hlpr1]) <= 122)
            {
                cout << char(int(sentence1[for_hlpr1]) - 32);
            }
            else
            {
                cout << char(int(sentence1[for_hlpr1]));
            }
        }
    }
}

int main()
{
    int menu_helper;
    
    cout << endl << "### Upper case and Lower case functions ### " << endl << endl;
    while(1)
    {
        cout << endl << "Insert the number of the desired function: " << endl;
        cout << "1 - Find the ASCII code of a letter" << endl;
        cout << "2 - SET A SENTENCE IN UPPER CASE" << endl;
        cout << "3 - set a sentence in lower case" << endl;
        cout << "4 - Set The First Letter Of Each Word In Upper Case" << endl;
        cout << "5 - iNVERT uPPER aND lOWER cASES" << endl;
        cout << "6 - Exit the program" << endl;
        cout << "-> ";
        cin >> menu_helper;
        cin.clear();
        cin.ignore(10000, '\n');
        cout << endl;
        
        switch (menu_helper)
        {
            case 1: ascii_finder(); break;
            case 2: all_upper(); break;
            case 3: all_lower(); break;
            case 4: set_title(); break;
            case 5: invert_cases(); break;
            case 6: cout << endl << "You finish the program." << endl; exit(0); break;
            default: cout << "Function number invalid, try again." << endl;
        }
    }
}

