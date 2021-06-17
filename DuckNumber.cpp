// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 
bool check_duck(string N);
 
int main(void)
{
     int t; 
    cin>>t;
    while(t--)
    {
        string N; 
        cin>>N; 
  
        if (check_duck(N)) 
            cout << "YES\n"; 
        else
            cout << "NO\n"; 
     
    }
}
bool check_duck(string N){
    int n=N.length();
    int count=0;
    for(int i=0;i<n;i++)
        if(N[0]=='0')
            return false;
        else if(N[i]=='0')
            count++;
    if(count==0)
        return false;
    else
        return true;
}
 
