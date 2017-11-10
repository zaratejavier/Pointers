// File: cStrings
// Created by Javier Zarate on 10/26/17 for CS1410.
// Copyright (c) 2017 WSu

#include <iostream>
#include "cStrings.h"

using namespace std;
// Constants, struct, classes
// Prototypes
// Main Program Program

int main(void)
{
    char str1[] = "Define a string as an array ";   //defined as a constant string
    char* str2 = "defined as a pointer";            // just  pointer

    cout<<str1<<endl;
    cout<<str2<<endl;

    //str1++; can't do this. str1 is constant
    str2++; //ok, it is a pointer
    cout<<str1<<endl;
    cout<<str2<<endl;
    str2++; //ok, it is a pointer
    cout<<str2<<endl;
    str2--; //ok, it is a pointer
    cout<<str2<<endl;

    displaystr(str1);



    return 0;

}

// Function Definitions