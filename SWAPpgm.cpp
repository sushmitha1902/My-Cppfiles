#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter a and b:";
    cin>>a;
    cin>>b;
    temp = a;
    a=b;
    b=temp;
    cout<<"the values of a is"<<a<<endl;
    cout<<"the values of b is"<<b<<endl;
    return 0;
}