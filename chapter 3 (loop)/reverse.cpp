#include <iostream>
using namespace std;
int main ()
{
 int n;
 cout<<"Enter any Number : ";
 cin>>n;
 int r=0;
 while (n!=0){
    int ld = n%10;
    n/=10;
    r = r*10;
    r= r+ld;
 }
 cout<<r;
} 