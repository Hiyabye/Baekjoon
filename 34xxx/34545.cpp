#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc1(int n, const vector<int> &a, const vector<int> &b) {
  int ret = 0;
  for (int i=0; i<n; i++) ret += (a[i] != b[i]);
  return ret;
}

inline int calc2(int n, const vector<int> &b) {
  int ret = 1;
  for (int i=0; i<n; i++) ret += (b[i] == 0);
  return ret;
}

inline int calc3(int n, const vector<int> &b) {
  int ret = 1;
  for (int i=0; i<n; i++) ret += (b[i] == 1);
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  if (find(a.begin(), a.end(), 0) != a.end()) {
    cout << min({calc1(n, a, b), calc2(n, b), calc3(n, b) + 1});
  } else {
    cout << min(calc1(n, a, b), calc3(n, b));
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}