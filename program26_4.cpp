/*
4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X000001C0;
    UINT iResult = 0;
    
    iResult = iMask & iNo;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter Number:"<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        cout<<"7,8,9th bit is ON"<<"\n";
    }
    else
    {
        cout<<"Atleast one bit is OFF"<<"\n";
    }

    return 0;
}