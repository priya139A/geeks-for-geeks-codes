class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int hash[26]={0};
        int count=words.size();
        for(int i=0;i<allowed.size();i++){
            hash[allowed[i]-97]=1;
        }
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            for(int j=0;j<temp.size();j++){
                if(hash[temp[j]-97]==0){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};
