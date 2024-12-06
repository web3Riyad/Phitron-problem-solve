#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<vector<int>>& a, vector<vector<int>>& b, int n, int m) {
    vector<vector<int>> diff(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            diff[i][j] = (b[i][j] - a[i][j] + 3) % 3;
        }
    }

    // Check if all elements in the difference matrix are the same in their respective 2x2 subgrids
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if ((diff[i][j] + diff[i+1][j+1]) % 3 != (diff[i+1][j] + diff[i][j+1]) % 3) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char c;
                cin >> c;
                a[i][j] = c - '0';
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char c;
                cin >> c;
                b[i][j] = c - '0';
            }
        }

        if (isPossible(a, b, n, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
