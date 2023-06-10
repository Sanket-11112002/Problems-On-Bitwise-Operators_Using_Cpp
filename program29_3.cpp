/*
3.Write a program which accept one number from user and check whether 
9th or 12th bit is on or off.
*/
/*
4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0X00000100;
    UINT iMask2 = 0X00000800;
    UINT iResult1 = 0;
    UINT iResult2 = 0;
    
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
    bool bRet = false;

    cout<<"Enter Number:"<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);
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