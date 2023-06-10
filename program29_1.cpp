/*
1.Write a program which accept one number from user and count number of 
ON (1) bits in it without using % and / operator.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT iCount = 0;
    UINT iMask = 0X00000001;

    while(iNo != 0)
    {
        if((iNo & iMask) == 1)
        {
            iCount++;
        }

        iNo = iNo >> 1;     // right shift by one
    }
    return iCount;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Count of ON(1) bit is :"<<iRet<<"\n";

    return 0;
}