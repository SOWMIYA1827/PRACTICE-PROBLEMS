class Solution {
    public int xorOperation(int n, int start) {
        int[] result = new int[n];

        for(int i=0 ; i<n ; i++){
            result[i] = start + 2 * i ;
        }

        int answer = result[0];
        for(int i=1 ; i<n ; i++){
            answer ^= result[i];
        }
       return answer ;
    }
}