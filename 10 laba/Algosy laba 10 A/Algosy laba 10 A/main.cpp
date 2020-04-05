#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> graph[100];

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    for (int i = 0 ; i < m; ++ i) {
        int v, w;
        cin >> v >> w;
        --v;
        --w;
        graph[v].push_back(w);
        graph[w].push_back(v);
    }
    for (int i = 0; i < n; ++i) {
        cout << graph[i].size() << " ";
    }
    return 0;
}
