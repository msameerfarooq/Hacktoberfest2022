class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<int , int> m;
        for(auto i : s){
            m[i]++;
        }
        int ans = -1;
        bool flag = false;
        for(int i = 0; i< s.size(); i++){
            for(auto itr : m){
                if(char(itr.first )== s[i] && itr.second == 1){
                    ans = i;
                    return i;
                }
            }

        }
        return ans;
        
       
    }
};
