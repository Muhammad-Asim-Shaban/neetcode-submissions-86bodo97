class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            string val=strs[i];
            sort(val.begin(),val.end());
            mp[val].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto &e:mp)
        {
            ans.push_back(e.second);
        }
        return ans;
    }

};
