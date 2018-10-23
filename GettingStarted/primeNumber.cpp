#include <bits/stdc++.h>
using namespace std;

int main()
{
int a,i,j=0;
  cin>>a;
  for(i=2;i<=sqrt(a);i++)
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
