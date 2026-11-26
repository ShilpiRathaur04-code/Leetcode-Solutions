class Solution {
    public boolean canAliceWin(int n) {
        int s = 10;

        for (int i = 0; i < n; i++) {
            if (n < s) {
                return false;
            }

            n = n - s;
            s--;

            if (n < s) {
                return true;
            }

            n = n - s;
            s--;
        }

        return false;
    }
}