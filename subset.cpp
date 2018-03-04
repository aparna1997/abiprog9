#include<iostream>
using namespace std;

int main()
{
int arr1[10]={1,2,3,4,5,6,7,8,9,10},arr2[5];
int arr3[100]={},k=0;

cout<<"enter arr2\n";
for(int i=0;i<5;i++)
cin>>arr2[i];

for(int i=0;i<10;i++)
arr3[arr1[i]]++;

for(int i=0;i<5;i++)
{
if(arr3[arr2[i]] != 1)
{
cout<<"no subset\n";
k=1;
break;
}
else
arr3[arr2[i]]--;
}
if(k==0)
cout<<"subset";
return 0;
}
