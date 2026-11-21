class Solution {
public:
    double calc(double x, long long n) {
        if (n == 0) return 1.0;

        double half = calc(x, n / 2);
        double ans = half * half;

        if (n % 2 == 1) ans *= x;

        return ans;
    }

    double myPow(double x, int n) {
        long long power = n;

        if (power < 0) {
            power = -power;
            return 1.0 / calc(x, power);
        }

        return calc(x, power);
    }
};