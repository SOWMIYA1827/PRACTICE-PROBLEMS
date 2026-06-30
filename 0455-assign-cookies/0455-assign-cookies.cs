public class Solution {
    public int FindContentChildren(int[] g, int[] s) {
        Array.Sort(s);
        Array.Sort(g);

        int i=0 , j=0 ;
        while( i<g.Length && j<s.Length){
            if(s[j] >= g[i]){
                i++;
            }
            j++;
        }
        return i;
    }
}