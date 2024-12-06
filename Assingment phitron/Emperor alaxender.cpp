#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long int par[N];
int pathsiz[N];
bool vis[N];

class node {
public:
    int x, y;
    long long int w;
    node(int x, int y, long long int w) {
        this->x = x;
        this->y = y;
        this->w = w;
    }
};

vector<node> v;

void dsu_initialize(int n) {
    for (int i = 0; i <= n; i++) {
        par[i] = -1;
        pathsiz[i] = 1;
    }
}

int dsu_find(int node) {
    if (par[node] == -1)
        return node;

    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int nodeA, int nodeB) {
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);
    if (leaderA != leaderB) {
        if (pathsiz[leaderA] > pathsiz[leaderB]) {
            par[leaderB] = leaderA;
            pathsiz[leaderA] += pathsiz[leaderB];
        } else {
            par[leaderA] = leaderB;
            pathsiz[leaderB] += pathsiz[leaderA];
        }
    }
}

bool cmp(node a, node b) {
    return a.w < b.w;
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int x, y;
        long long int w;
        cin >> x >> y >> w;
        v.push_back(node(x, y, w));
    }

    int cnt = 0;
    long long int totalcost = 0;  // Initialize totalcost to 0
    sort(v.begin(), v.end(), cmp);
    dsu_initialize(n);

    for (node child : v) {
        int x = child.x;
        int y = child.y;
        long long int cost = child.w;  // Use long long int for cost
        int leaderA = dsu_find(x);
        int leaderB = dsu_find(y);

        if (leaderA != leaderB) {
            dsu_union(x, y);
            totalcost += cost;
        } else {
            cnt++;
        }
    }

    // Check if all nodes are connected
    int root = dsu_find(1);
    bool isConnected = true;
    for (int i = 2; i <= n; i++) {
        if (dsu_find(i) != root) {
            isConnected = false;
            break;
        }
    }

    if (!isConnected) {
        cout << "Not Possible";
    } else {
        cout << cnt << " " << totalcost;
    }

    return 0;
}
