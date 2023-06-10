/*
4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo,UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult1 = 0;
    UINT iResult2 = 0;
    
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult1 = iMask1 & iNo;
    iResult2 = iMask2 & iNo;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
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
    UINT iBit1 = 0, iBit2 = 0;
    bool bRet = false;

    cout<<"Enter Number:"<<"\n";
    cin>>iValue;

    cout<<"Enter first position :"<<"\n";
    cin>>iBit1;

    cout<<"Enter second position :"<<"\n";
    cin>>iBit2;

    bRet = ChkBit(iValue,iBit1,iBit2);
    if(bRet == true)
    {
        cout<<"Atleast one bit is ON"<<"\n";
    }
    else
    {
        cout<<"Both bit are OFF"<<"\n";
    }

    return 0;
}