class Solution {
public:
    int calPoints(vector<string>& arr) {
        stack<int> x;
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {

            if (arr[i] == "C") {
                x.pop();
            }

            else if (arr[i] == "D") {
                int y = x.top();
                x.push(2 * y);
            }

            else if (arr[i] == "+") {
                int y = x.top();
                x.pop();

                int z = x.top();

                x.push(y);
                x.push(y + z);
            }

            else {
                int c = stoi(arr[i]);   // string -> integer
                x.push(c);
            }
        }

        while (!x.empty()) {
            sum += x.top();
            x.pop();
        }

        return sum;
    }
};