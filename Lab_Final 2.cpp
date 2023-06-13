#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end()); // Sorting a in ascending order
    sort(b.rbegin(), b.rend()); // Sorting b in descending order

    vector<int> diff(n);
    for (int i = 0; i < n; i++) {
        diff[i] = a[i] - b[i];
    }

    for (int i = 0; i < n; i++) {
        cout << diff[i] << " ";
    }

    return 0;
}
