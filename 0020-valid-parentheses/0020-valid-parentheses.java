class Solution {
    public boolean isValid(String s) {
        Stack<Character> store = new Stack<>();

        for(char ch : s.toCharArray()){
            if( ch == '(' || ch == '{' || ch == '['){
                store.push( ch );
            }
            else{
                if(store.isEmpty()){
                    return false;
                }

                char top = store.pop();
                if( ch == ')' && top != '(' || ch == '}' && top != '{' || ch == ']' && top != '['){
                    return false ;
                }
            }
        }
        
            return store.isEmpty();
    }
}