// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int woodcollected(int tree[],int n,int mid){
        int res=0;
        for(int i=0;i<n;i++){
            if(tree[i] >= mid)
                res=res+(tree[i]-mid);
        }
        return res;
    }
    int find_height(int tree[], int n, int k)
    {
        int low=0,high=INT_MIN;
        for(int i=0;i<n;i++){
            if(tree[i] > high)
                high=tree[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            int res=woodcollected(tree,n,mid);
            if(res == k)
                return mid;
            else if(res < k)
                low=mid+1;
            else
                high=mid-1;
        }
        return -1;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}  
