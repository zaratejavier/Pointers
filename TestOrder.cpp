// File: TestOrder.cpp
// Created by Javier Zarate on 10/26/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "Order.h"
using namespace std;

// Constants, struct, classes


// Prototypes

int const SIZE =4;
// Main Program Program

int main(void)
{
    int n1 =99, n2 = 11;
    int n3 =22, n4 = 33;
    int arn [SIZE]= {n1, n2, n3, n4};
    cout<<"n1 = "<< n1<<" n2 = "<<n2<<endl;
    cout<<"n3 = "<< n3<<" n4 = "<<n4<<endl;
    //sort numbers

    //sort2num(&n1, &n2);
    //sort2num(&n3, &n4);

    //cout<<"n1 = "<< n1<<" n2 = "n2<<endl;
    //cout<<"n3 = "<< n3<<" n4 = "n4<<endl;

    bsort(arn, SIZE);
    for(int i = 0; i<SIZE; i++)
    {
        cout<<i<<"element is: "<<arn[i]<<endl;
    }
    return 0;

}

// Function Definitions