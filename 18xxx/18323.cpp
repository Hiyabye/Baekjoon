#include <iostream>
#include <set>
#include <vector>
using namespace std;

inline bool valid(int n, const vector<int> &a) {
  for (int i=0; i<n; i++) {
    if (a[i] <= 0) return false;
  }
  set<int> s;
  for (int i=0; i<n; i++) {
    if (s.find(a[i]) != s.end()) return false;
    s.insert(a[i]);
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> b(n-1);
  for (int i=0; i<n-1; i++) cin >> b[i];

  vector<int> a(n, 1);
  while (1) {
    for (int i=1; i<n; i++) {
      a[i] = b[i-1] - a[i-1];
    }
    if (valid(n, a)) break;
    a[0]++;
  }

  for (int i=0; i<n; i++) {
    cout << a[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}