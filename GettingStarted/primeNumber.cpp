#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a,i,j=0;
  cout<<"Enter a number \n";
  cin>>a;
  for(i=0;i<=(a/2);i++)
  {
    if(a%i==0)
      j++;
  }
  if(j==0)
    cout<<"Number is prime \n";
  else
    cout<<"Number is not prime \n";
  return 0;
}
