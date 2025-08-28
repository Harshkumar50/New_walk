class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        double maxDiag = 0;
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            int l = dimensions[i][0];
            int w = dimensions[i][1];

            // diagonal length (Pythagoras theorem)
            double diag = sqrt(1.0 * l * l + 1.0 * w * w);
            int area = l * w;

            // choose max diagonal, if tie -> max area
            if (diag > maxDiag || (fabs(diag - maxDiag) < 1e-9 && area > maxArea)) {
                maxDiag = diag;
                maxArea = area;
            }
        }
        return maxArea;
    }
};
