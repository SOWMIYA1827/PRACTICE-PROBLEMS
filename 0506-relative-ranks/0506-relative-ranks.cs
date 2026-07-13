using System;
using System.Collections.Generic;

public class Solution
{
    public string[] FindRelativeRanks(int[] score)
    {
        int n = score.Length;

        // Final answer array
        string[] answer = new string[n];

        // Store original position of each score
        Dictionary<int, int> dict = new Dictionary<int, int>();

        for (int i = 0; i < n; i++)
        {
            dict.Add(score[i], i);
        }

        // Copy the original array
        int[] temp = (int[])score.Clone();

        // Sort in ascending order
        Array.Sort(temp);

        // Traverse from highest score to lowest
        for (int i = n - 1; i >= 0; i--)
        {
            // Original index of this score
            int index = dict[temp[i]];

            int rank = n - i;

            if (rank == 1)
            {
                answer[index] = "Gold Medal";
            }
            else if (rank == 2)
            {
                answer[index] = "Silver Medal";
            }
            else if (rank == 3)
            {
                answer[index] = "Bronze Medal";
            }
            else
            {
                answer[index] = rank.ToString();
            }
        }

        return answer;
    }
}