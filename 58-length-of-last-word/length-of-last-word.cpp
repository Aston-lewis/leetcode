class Solution {
public:
    int lengthOfLastWord(string s) {
        string word; 
        string lastword;

        stringstream ss(s);
        while(ss >> word){
            lastword = word ; 

        }
        return lastword.size(); 
    }
};