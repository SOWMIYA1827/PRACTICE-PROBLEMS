public class Solution {
    public int DistributeCandies(int[] candyType) {
        HashSet<int> Typecandies = new HashSet<int>(candyType);
        
        int m = Typecandies.Count;
        int n = candyType.Length/2;

        return Math.Min(m,n);
    }
}