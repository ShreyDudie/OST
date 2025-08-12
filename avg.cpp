#include <iostream>
using namespace std;

int main()
{
int arr[10];
for(int i=0;i<10;i++) cin>>arr[i];
int sum=0;
for(int i=0;i<10;i++) sum+=arr[i];
cout<<"Sum: "<<sum<<endl;
double avg=sum/10;
cout<<"Average: "<<avg<<endl;
return 0;
}

sakulkarni_b24@it.vjti.ac.in
