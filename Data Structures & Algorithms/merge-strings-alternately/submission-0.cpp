class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int p=0;
        string ans;
        int i=0;
        for(;i<min(n,m);i++)
        {
            char value=word1[i];
            ans.push_back(value);
            value=word2[i];
            ans.push_back(value);
        }
        while(i<n)
        {
            ans.push_back(word1[i]);
            i++;
        }
        while(i<m)
        {
            ans.push_back(word2[i]);
            i++;
        }
        return ans;

    }
};