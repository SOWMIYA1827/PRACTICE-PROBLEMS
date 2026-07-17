public class Solution
{
    public IList<string> SummaryRanges(int[] nums)
    {
        List<string> result = new List<string>();

        if (nums.Length == 0)
            return result;

        int start = nums[0];

        for (int i = 1; i < nums.Length; i++)
        {
            if (nums[i] != nums[i - 1] + 1)
            {
                if (start == nums[i - 1])
                    result.Add(start.ToString());
                else
                    result.Add(start + "->" + nums[i - 1]);

                start = nums[i];
            }
        }

        // Add the last range
        if (start == nums[nums.Length - 1])
            result.Add(start.ToString());
        else
            result.Add(start + "->" + nums[nums.Length - 1]);

        return result;
    }
}