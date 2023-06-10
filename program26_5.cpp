/*
    5. Write a program which checks whether first and last bit is On or 
    OFF. First bit means bit number 1 and last bit means bit number 32. 
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X80000001;
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
        cout<<"1st & 32th bit is ON"<<"\n";
    }
    else
    {
        cout<<"Atleast one bit is OFF"<<"\n";
    }

    return 0;
}