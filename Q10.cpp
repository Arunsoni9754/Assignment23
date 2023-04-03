#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,s=0;
    cout<<"Enter the numbers of array ";
    for(i=0;i<=9;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }    
    cout<< "The sum is "<<s;
}