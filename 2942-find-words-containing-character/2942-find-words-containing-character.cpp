class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arr ;

        for(int i=0 ; i<words.size() ; i++){
            string res = words[i];

            if(res.contains(x)){
                arr.push_back(i);
            }
        }

        return arr ;
    }
};