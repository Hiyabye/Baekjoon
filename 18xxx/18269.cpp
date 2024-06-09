#include <iostream>
#include <string>
using namespace std;

bool check(int n, const string &s, int k) {
  for (int i=0; i<n-k; i++) for (int j=i+1; j<n-k+1; j++) {
    if (s.substr(i, k) == s.substr(j, k)) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int k=1; k<=n; k++) {
    if (!check(n, s, k)) continue;
    cout << k;
    return;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}