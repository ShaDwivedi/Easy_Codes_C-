#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
int sum(int n)
{ 
    return n*(n+1)/2;
}    
 
 
int main()
{
    int n;
    n=5;
    cout<<sum(n);
    return 0;
}