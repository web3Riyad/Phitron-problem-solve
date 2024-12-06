#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k;

        long long max_placements = 0;

        for (int a = 1; a * a * a <= k; ++a) {
            if (k % a != 0) continue;
            long long k1 = k / a;
            for (int b = 1; b * b <= k1; ++b) {
                if (k1 % b != 0) continue;
                long long c = k1 / b;

                if (a <= x && b <= y && c <= z) {
                    long long placements = (x - a + 1) * (y - b + 1) * (z - c + 1);
                    max_placements = max(max_placements, placements);
                }

                if (a <= x && c <= y && b <= z) {
                    long long placements = (x - a + 1) * (y - c + 1) * (z - b + 1);
                    max_placements = max(max_placements, placements);
                }

                if (b <= x && a <= y && c <= z) {
                    long long placements = (x - b + 1) * (y - a + 1) * (z - c + 1);
                    max_placements = max(max_placements, placements);
                }

                if (b <= x && c <= y && a <= z) {
                    long long placements = (x - b + 1) * (y - c + 1) * (z - a + 1);
                    max_placements = max(max_placements, placements);
                }

                if (c <= x && a <= y && b <= z) {
                    long long placements = (x - c + 1) * (y - a + 1) * (z - b + 1);
                    max_placements = max(max_placements, placements);
                }

                if (c <= x && b <= y && a <= z) {
                    long long placements = (x - c + 1) * (y - b + 1) * (z - a + 1);
                    max_placements = max(max_placements, placements);
                }
            }
        }

        cout << max_placements << endl;
    }

    return 0;
}
