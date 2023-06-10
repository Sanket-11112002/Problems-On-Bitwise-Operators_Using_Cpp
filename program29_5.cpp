/*
5. Write a program which accept one number from user and range of 
positions from user. Toggle all bits from that range.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;      

UINT ToggleBit(UINT iNo ,UINT iStart,UINT iEnd)
{
    UINT mask = 0;
    for (int i = iStart; i <= iEnd; i++) 
    {
        mask = mask | (1 << i);
    }
    return iNo ^ mask;
}

int main()
{
    UINT iValue = 0;
    UINT range2=0,range1 = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter start number : "<<"\n";
    cin>>range1;
    cout<<"Enter end number : "<<"\n";
    cin>>range2;

    iRet =ToggleBit(iValue,range1,range2);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}