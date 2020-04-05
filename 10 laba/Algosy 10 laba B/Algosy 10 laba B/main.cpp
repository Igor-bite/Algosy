#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
    
    double Distance(Point other) {
        return sqrt((x-other.x)*(x-other.x) + (y-other.y)*(y-other.y));
    }
};
vector<Point> points;
vector<double> distances;
vector<bool> used;

int main(int argc, const char * argv[]) {
    freopen("spantree.in", "r", stdin);
    freopen("spantree.out", "w", stdout);
    int n = 0;
    cin >> n;
    points.resize(n);
    distances.resize(n);
    used.resize(n);
    for (int i = 0; i < n; ++i) {
        distances[i] = INT_MAX;
    }
    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
    }
    distances[0] = 0;
    
    for (int i = 0; i < n; ++i) {
        int select = -1;
        for (int j = 0; j < n; ++j) {
            if (!used[j] && (select == -1 || distances[j] < distances[select])) {
                select = j;
            }
        }
        used[select] = 1;
        for (int k = 0; k < n; ++k) {
            double cur_distance = points[select].Distance(points[k]);
            if (!used[k] && cur_distance < distances[k]) {
                distances[k] = cur_distance;
            }
        }
    }
    double res = 0;
    for (int i = 0; i < n; ++i) {
        res += distances[i];
    }
    cout.precision(10);
    cout << res << endl;
    return 0;
}

/*
3
0 0
0 1
1 0
*/
