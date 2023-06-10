/*
2. Write a program which accept one number and position from user and off 
that bit. Return modified number.
*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask <<(iPos - 1);
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        iResult = iNo ^ iMask;
        return iResult;
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;
    cout<<"Enter Number :"<<"\n";
    cin>>iValue;

    cout<<"Enter Position :"<<"\n";
    cin>>iBit;

    iRet = OffBit(iValue,iBit);
    
    cout<<"Number is :"<<iRet<<"\n";

    return 0;
}