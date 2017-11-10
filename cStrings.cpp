//
// Created by Javier Zarate on 10/26/17.
//
#include <iostream>
using namespace std;

#include "cStrings.h"
/*!
 * Display an array of characters, one char at a time
 * @param ptr : pointer to string or array of chars
 */
void displaystr(const char *ptr)
{
    while(*ptr)  //test for NULL character
    {
        cout<<*ptr++;
    }
    cout<<endl;
}
