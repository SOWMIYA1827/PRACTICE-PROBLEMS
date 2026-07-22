class Solution {
    public boolean isValid(String s) {
        Stack<Character> ans = new Stack<>();

        for(char c : s.toCharArray()){

            if( c=='(' || c=='[' || c=='{' ){
                ans.push(c);
            }
            else{
                if(ans.isEmpty()){
                    return false;
                }

                char top = ans.peek();
                if(c == ')' && top != '(' || c == '}' && top != '{' || c == ']' && top != '['){
                    return false;
                }else{
                    ans.pop();
                }
            }
        }

        return ans.isEmpty();
    }
}