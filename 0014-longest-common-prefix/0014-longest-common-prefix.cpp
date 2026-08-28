class TrieNode{
    public:
      TrieNode* children[26];
      bool isendofword ;

      TrieNode(){
        isendofword = false ;
        for(int i=0 ; i<26 ; i++){
            children[i] = nullptr ;
        }
    }
};

class Solution {
public:
    
      TrieNode* root ;
      void addWord(string word) {
        TrieNode* current = root ;
        for( char ch : word ){
            int index = ch - 'a';
            if( current->children[index] == nullptr){
                current->children[index] = new TrieNode();
            }
            current = current->children[index];
        }
        current->isendofword = true ;
    } 

    string longestCommonPrefix(vector<string>& strs) {
        
        if( strs.empty()){
            return "";
        }

        for(string s : strs){
            if(s.empty()){
                return "";
            }
        }

        root = new TrieNode();

        for(string s : strs){
            addWord(s);
        }

        TrieNode* current = root ;
        string prefix = "";

        while( current != nullptr ){
            if( current->isendofword){
                break ;
            }

            int childcount = 0 ;
            int nextchild = -1 ;

            for(int i=0 ; i<26 ; i++){
                if(current->children[i] != nullptr){
                    childcount++;
                    nextchild = i ;
                }
            }

            if( childcount != 1){
                break ;
            }

            char ch = 'a' + nextchild ;
            prefix.push_back(ch);
            current = current->children[nextchild];
        }

        return prefix ;
    }
};