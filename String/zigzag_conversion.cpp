//6. zig zag conversion
class Solution {
public:
    string convert(string s, int numRows) {
        // Edge case: if only 1 row, return as-is
        if (numRows == 1 || numRows >= s.size()) return s;

        // Create a vector of strings for each row
        vector<string> rows(min(numRows, (int)s.size()));
        int currRow = 0;
        bool goingDown = false;

        // Traverse characters in the string
        for (char c : s) {
            rows[currRow] += c;
            // Change direction at first or last row
            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;
            currRow += goingDown ? 1 : -1;
        }

        // Combine all rows into one result string
        string result;
        for (string row : rows)
            result += row;
        return result;
    }
};
