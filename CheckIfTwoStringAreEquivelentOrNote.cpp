class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string S1="",S2="";
        for(auto it : word1)
        {
            S1+=it;    
        }
        for(auto it : word2)
        {
            S2+=it;    
        }
       
        if(S1==S2)
            {
                return true;
            }
        else
                return false;
    }
};