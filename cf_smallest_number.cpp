#include <bits/stdc++.h>
using namespace std;

int recurssive(vector<int> a, int y, string &s) {
    if (y == 3)
        return a[0];
    int size = a.size(), mini = INT_MAX, j, k, x;
    if (size == 0)
        return 0;
    vector<int> temp;
    for (int i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (s[y] == '*')
                x = a[i] * a[j];
            else
                x = a[i] + a[j];
            temp.push_back(x);
            for (k = 0; k < size; k++) {
                if (k != i && k != j)
                    temp.push_back(a[k]);
            }
            mini = min(mini, recurssive(temp, y + 1, s));
            temp.clear();
        }
    }
    return mini;
}

int main() {
    vector<int> a(4);
    string b;

    for (int i = 0; i < 4; i++)
        cin >> a[i];
    cin >> b;

    int ans = recurssive(a, 0, b);
    cout << "Minimum value: " << ans << endl;

    return 0;
}
