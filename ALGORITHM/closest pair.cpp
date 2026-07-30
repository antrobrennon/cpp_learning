#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <float.h>
using namespace std;

struct Point
{
    int x, y;
};

double distance(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) +
                (p1.y - p2.y) * (p1.y - p2.y));
}

double bruteForce(vector<Point> &P, int l, int r)
{
    double minDist = DBL_MAX;

    for (int i = l; i <= r; i++)
        for (int j = i + 1; j <= r; j++)
            minDist = min(minDist, distance(P[i], P[j]));

    return minDist;
}

bool compareX(Point a, Point b)
{
    return a.x < b.x;
}

double closestPair(vector<Point> &P, int l, int r)
{
    if (r - l <= 2)
        return bruteForce(P, l, r);

    int mid = (l + r) / 2;

    double dl = closestPair(P, l, mid);
    double dr = closestPair(P, mid + 1, r);

    return min(dl, dr);
}

int main()
{
    int n;
    cin >> n;

    vector<Point> P(n);

    for (int i = 0; i < n; i++)
        cin >> P[i].x >> P[i].y;

    sort(P.begin(), P.end(), compareX);

    cout << closestPair(P, 0, n - 1);

    return 0;
}