#include <bits/stdc++.h>
using namespace std;
  
bool isPrime(int n)
{
     
    if (n <= 1)
        return false;
    for(int i=2;i<n;i++)
     {
         if(n%i==0)
           return false; //ARPIT VISHNOI Sec:B 
            
     }
  
   return true;  
  
     
}
 
int main()
{   int a;
    cin>>a;
    isPrime(a) ? cout << " true\n" : cout << " false\n";
     
    return 0;
}