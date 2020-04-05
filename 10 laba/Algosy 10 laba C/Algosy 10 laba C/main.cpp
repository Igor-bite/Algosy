#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> graph[50000];
vector<bool> used;

long long Prima() {
    long long result = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, 0});
    
    while (!q.empty()) {
        pair<int, int> weight = q.top();
        q.pop();
        if (used[weight.second]) {
            continue;
        }
        used[weight.second] = true;
        result += weight.first;
        
        for (pair<int, int> i : graph[weight.second]) {
            if (!used[i.first])
                q.push(make_pair(i.second, i.first));
        }
    }
    return result;
}


int main() {
    freopen("spantree3.in", "r", stdin);
    freopen("spantree3.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    used.resize(n, false);
    for (int i = 0; i < m; i++) {
        int b, e, w;
        cin >> b >> e >> w;
        b--;
        e--;
        graph[b].emplace_back(e, w);
        graph[e].emplace_back(b, w);
    }
    cout << Prima() << endl;
    return 0;
}
/*
 
 4 4
 1 2 1
 2 3 2
 3 4 5
 4 1 4
 
 */
