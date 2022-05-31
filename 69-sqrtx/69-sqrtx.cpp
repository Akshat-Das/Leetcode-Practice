class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        int left = 1, right = x;
        while (left + 1 < right) {
            int mid = (right - left) / 2 + left;
            int division = x / mid;
            if (division == mid) {
                return mid;
            }
            else if (division < mid) {
                right = mid;
            }
            else {
                left = mid;
            }
        }
        
        if (x / right >= right) {
            return right;
        }
        return left;
    }
};