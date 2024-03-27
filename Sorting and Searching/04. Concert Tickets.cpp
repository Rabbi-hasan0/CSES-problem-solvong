#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    for (int i = 0; i < n; ++i) {
        int x;cin >> x;
        tickets.insert(x);
    }

    for (int i = 0; i < m; ++i) {
        int x; cin >> x;
        auto it = tickets.upper_bound(x);
        if (it != tickets.begin()) {
            cout << *--it << '\n';
            tickets.erase(it); 
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
