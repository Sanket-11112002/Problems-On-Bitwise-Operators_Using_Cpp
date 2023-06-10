/*
5. Write a program which accept one number from user and toggle contents 
of first and last nibble of the number. Return modified number. (Nibble is a 
group of four bits)
*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToogleBit(UINT  iNo)
{
    UINT iMask = 0XF000000F;
    UINT iResult = 0;

    iResult = iNo | iMask;
    return iResult;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    iRet = ToogleBit(iValue);

    cout<<"Number is :"<<iRet<<"\n";

    return 0;
}