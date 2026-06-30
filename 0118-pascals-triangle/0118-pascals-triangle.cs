public class Solution {
    public IList<IList<int>> Generate(int numRows) {
        
        List<IList<int>> triangle = new List<IList<int>>();

        for (int i = 0; i < numRows; i++) {
            
            List<int> row = new List<int>(new int[i + 1]);
           
            row[0] = 1;
            row[i] = 1;

            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            triangle.Add(row);
        }

        return triangle;
    }
}