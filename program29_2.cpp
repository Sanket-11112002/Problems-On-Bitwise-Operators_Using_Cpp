/*
2. Write a program which accept two numbers from user and display position 
of common ON bits from that two numbers.
*/

/*
1.Write a program which accept one number from user and count number of 
ON (1) bits in it without using % and / operator.
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iCommon = iNo1 & iNo2;
    UINT iMask = 0X00000001;

    UINT iPos = 1;
    cout<<"Common position are :"<<"\n";
    
    while(iCommon != 0)
    {
        if((iCommon & iMask) == 1)
        {
            cout<<iPos<<"\n";
        }
        iPos++;
        iCommon = iCommon >> 1;
    }
}
int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue1;

    cout<<"Enter number:"<<"\n";
    cin>>iValue2;

    CommonBits(iValue1,iValue2);

    return 0;
}