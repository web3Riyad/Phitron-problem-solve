#include <bits/stdc++.h>
using namespace std;
#define line cout << '\n'
#define ll long long int

int n, m;
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int islandPerimeter(vector<vector<int>> &grid)
 {
    int perimeter = 0;
    for (int i = 0; i < grid.size(); i++)
     {
        for (int j = 0; j < grid[0].size(); j++)
            {
            if (grid[i][j] == 1) {
                for (auto dir : directions)
                    {
                    int x = i + dir.first;
                    int y = j + dir.second;
                    if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == 0)
                    {
                        perimeter++;
                    }
                }
            }
        }
    }
    return perimeter;
}

int main() {
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    int ans = islandPerimeter(v);
    cout << "Perimeter: " << ans << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        line;
    }
    return 0;
}
