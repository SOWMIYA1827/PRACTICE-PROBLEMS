
import java.util.*;

class Solution {
    public int sumCounts(List<Integer> nums) {
        int result = 0;

        for (int start = 0; start < nums.size(); start++) {
            for (int end = start; end < nums.size(); end++) {

                Set<Integer> st = new HashSet<>();

                for (int i = start; i <= end; i++) {
                    st.add(nums.get(i));
                }

                result += st.size() * st.size();
            }
        }

        return result;
    }
}
