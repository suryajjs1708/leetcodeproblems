#include <bits/stdc++.h>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c));
    int zeroRow = -1, zeroCol = -1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];

            if (mat[i][j] == 0) {
                zeroRow = i;
                zeroCol = j;
            }
        }
    }
    for (int i = 0; i < r; i++) {
        if (i == zeroRow) continue;
        for (int j = 0; j < c; j++) {
            if (j == zeroCol) continue;
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> leftMax(n);
        vector<int> rightMax(n);

        leftMax[0] = height[0];
        for(int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        rightMax[n - 1] = height[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int water = 0;

        for(int i = 0; i < n; i++) {
            water += min(leftMax[i], rightMax[i]) - height[i];
        }

        return water;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> height(n);

    for(int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution obj;
    cout << obj.trap(height);

    return 0;
}