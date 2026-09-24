class Solution {
public:
    int reverse(int x) {
        int revin = 0;
        int diff;
        while (x != 0){
            diff = x % 10;
            if (revin > INT_MAX / 10 || (revin == INT_MAX / 10 && diff > 7)) return 0;
            if (revin < INT_MIN / 10 || (revin == INT_MIN / 10 && diff < -8)) return 0;
            revin = (revin * 10) + diff;
            x /= 10;
        }
        return revin;
    }
};