int subarraySum(vector<int>& nums, int k) {
  int n=nums.size();
  if(n==0){
    return 0;
    }
  int cum_sum=0,count=0,i=0;
  unordered_map<int,int>freq;
  while(i<n){
    cum_sum+=nums[i];
    if(cum_sum==k){
         count++;
      }
    if(freq.find(cum_sum-k)!=freq.end()){
       count=count+freq[cum_sum-k];
      }
    freq[cum_sum]++;
    i=i+1;
    }
    return count;
}
