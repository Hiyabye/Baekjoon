#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<int> &a, int idx) {
  for (int k=1; k<=idx/2; k++) {
    if (a[idx] - a[idx-k] == a[idx-k] - a[idx-2*k]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  vector<int> a(n+1, 1);
  for (int i=2; i<=n; i++) {
    while (!check(a, i)) a[i]++;
  }
  cout << a[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}