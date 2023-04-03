#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numbers to be swapped ";
    cin>>a>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"The numbers after swapping is "<<a<<" and "<<b;
}