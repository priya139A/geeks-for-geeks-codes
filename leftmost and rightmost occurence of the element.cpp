// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    long long int first_position(vector<long long> v,int x){
        int len=v.size();
        int first_pos=-1;
        int low=0,high=len-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            //cout<< mid << endl;
            //cout << "low :"<< low << endl;
            //cout << "high: " << high << endl;
            if(v[mid]>=x){
                first_pos=mid;
                high=mid-1;
                //cout << "first_pos: " << first_pos<< endl;
            }
            else{
                low=mid+1;
            }
        }
        if(v[first_pos]==x){
            //cout << first_pos<< " ";
            return first_pos;
        }
        else
            return -1;
    }
    long long int last_position(vector<long long> v,int x){
        int len=v.size();
        int last_pos=-1;
        int low=0,high=len-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            //cout<< mid << endl;
            //cout << "low :"<< low << endl;
            //cout << "high: " << high << endl;
            if(v[mid]<=x){
                last_pos=mid;
                low=mid+1;
                //cout << "first_pos: " << first_pos<< endl;
            }
            else{
                high=mid-1;
            }
        }
        return last_pos;
    }
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        long first=first_position(v,x);
        long last=last_position(v,x);
        if(first == -1){
            last=-1;
            return std::make_pair(first,last);
        }
        else
            return std::make_pair(first,last);
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends
