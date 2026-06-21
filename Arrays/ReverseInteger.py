class Solution:
    def reverse(self, x):
        INT_MIN = -2**31
        INT_MAX = 2**31 - 1
        
        rev = 0
        sign = -1 if x < 0 else 1
        x = abs(x)

        while x:
            digit = x % 10
            x //= 10
            
            # Overflow check
            if rev > (INT_MAX - digit) // 10:
                return 0
            
            rev = rev * 10 + digit

        return sign * rev
