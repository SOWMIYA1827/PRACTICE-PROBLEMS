public class Solution
{
    public int FirstUniqChar(string s)
    {
        Dictionary<char, int> ans = new Dictionary<char, int>();

        // Count frequency
        for (int i = 0; i < s.Length; i++)
        {
            if (ans.ContainsKey(s[i]))
            {
                ans[s[i]]++;
            }
            else
            {
                ans[s[i]] = 1;
            }
        }

        // Find first unique character
        for (int i = 0; i < s.Length; i++)
        {
            if (ans[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;
    }
}