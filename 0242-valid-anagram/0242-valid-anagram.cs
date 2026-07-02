public class Solution {
    public bool IsAnagram(string s, string t) {
        if(s.Length != t.Length){
            return false;
        }
        char[] a = s.ToCharArray();
        char[] b = t.ToCharArray();
        Array.Sort(a);
        Array.Sort(b);
        if(a.SequenceEqual(b)){
            return true;
        }

        return false ;
    }
}