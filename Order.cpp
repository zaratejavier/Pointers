//
// Created by Javier Zarate on 10/26/17.
//

#include "Order.h"

/*!
 * Order or sort the two number
 * @param num1 first number
 * @param num2 second number
 */
void sort2num(int *num1, int *num2)
{
    int temp;
    if(*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

}
/*!
 * sort a lost of integers. using buble sort approach
 * @param ptr : address of the array
 * @param n : how many elements
 */
void bsort(int* ptr, int n)
{

    for (int j =0; j< n -1; j++)    //outer loop
    {
        for (int k = j+1; k<n; k++) //inner lopp
        {
            //sort the two elements
            sort2num(ptr + j, ptr + k); //order two numbers
        }
    }
}