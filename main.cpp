#include <iostream>
using namespace std;

const int LEN =5;

void Increment (int *inc); //function
void IncrementArray(int *inc);


int main()
{
    int i=9;
    int* pi= &i;

    int iarr[LEN] = {31, 45, 78, 99, -8};
    int* piarr;
    //do not use the & operator on arrays
    piarr = iarr;   //get the address of the array, or element 0

    //"int* piarr = iarr;" // same as above

    cout<<"value of I is: "<<i<<endl;
    cout<<"the address of I is: "<<&i<<endl;

    cout<<"value of pi is: "<<pi<<endl;
    cout<<"the address of pi is: "<<&pi<<endl;
    //display the value living at pi
    //dereference operator *
    cout<<"value of the address living at pi is: "<<*pi<<endl;
    i = 10;
    cout<<"value of I is: "<<i<<endl;
    cout<<"value of the address living at pi is: "<<*pi<<endl;
    //modify value using pointer
    *pi=11;
    cout<<"value of I is: "<<i<<endl;
    cout<<"value of the address living at pi is: "<<*pi<<endl;


    //loop over array
    for(int i =0; i< LEN; i++)
    {
        cout<<iarr[i]<<endl;
    }

    for(int i =0; i< LEN; i++)
    {
        cout<<*(iarr+i)<<endl;
    }

    for(int i =0; i< LEN; i++)
    {
        cout<<*(piarr++)<<endl;
    }
    Increment(&i);
    cout<<"value of I is: "<<i<<endl;
    cout<<"value of the address living at pi is: "<<*pi<<endl;
    Increment(pi);
    cout<<"value of I is: "<<i<<endl;
    cout<<"value of the address living at pi is: "<<*pi<<endl;
    //update all eleents of the array
    IncrementArray(iarr);
    for(int i =0; i< LEN; i++)
    {
        cout<<iarr[i]<<endl;
    }
    return 0;
}
void Increment(int *inc)
{
        *inc += 1;

}
void IncrementArray(int *inc)
{
    for(int i =0; i< LEN; i++)
    {
        //increment integer
        *inc++ += 1;    //points at the element of the array
    }
}
