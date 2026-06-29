//8. String to integer
class Solution {
public:
    int myAtoi(string s) {

        int i = 0, n = s.length();

        // Step 1: Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // Step 2: Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        long result = 0;  // long to detect overflow before converting to int

        // Step 3: Read digits
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Overflow check BEFORE adding digit
            if (result > (LONG_MAX / 10) || 
               (result == LONG_MAX / 10 && digit > 7)) {

                // Step 4: Clamp to limits
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        // Apply sign
        result *= sign;

        // Step 4: Final clamp (if needed)
        if (result < INT_MIN) return INT_MIN;
        if (result > INT_MAX) return INT_MAX;

        return (int)result;
    }
};
