#include <iostream>
using namespace std;
int main()
{
cout<<"Enter number: ";
int num;
cin>>num;
int rev=0;
while(num!=0)
{
int digit=num%10;
rev=rev*10+digit;
num/=10;
}
cout<<endl<<"Reversed number: "<<rev<<endl;
return 0;
}
