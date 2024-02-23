class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        auto m = matrix.size();
        if (m == 0)
            return;
        auto n = matrix[0].size();
        if (n == 0)
            return;

        bool firstRowContainsZero = false;
        bool firstColContainsZero = false;

        for (size_t i = 0; i < m; i++)
            if (matrix[i][0] == 0)
                firstColContainsZero = true;
        for (size_t j = 0; j < n; j++)
            if (matrix[0][j] == 0)
                firstRowContainsZero = true;

        for (size_t i = 1; i < m; i++)
            for (size_t j = 1; j < n; j++)
                if (matrix[i][j] == 0)
                    matrix[0][j] = matrix[i][0] = 0;

        for (size_t i = 1; i < m; i++)
            for (size_t j = 1; j < n; j++)
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;

        if (firstColContainsZero)
            for (size_t i = 0; i < m; i++)
                matrix[i][0] = 0;

        if (firstRowContainsZero)
            for (size_t j = 0; j < n; j++)
                matrix[0][j] = 0;
    }
};