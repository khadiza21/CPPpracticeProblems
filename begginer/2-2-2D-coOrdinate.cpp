#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2, ab;
    cin >> x1 >> y1 >> x2 >> y2;
    ab = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << ab << " units" << endl;
    return 0;
}