#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> u(n), u2(n*n);
  for (int i=0; i<n; i++) cin >> u[i];
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    u2[i*n+j] = u[i] + u[j];
  }
  sort(u.begin(), u.end(), greater<long long>());
  sort(u2.begin(), u2.end());

  unordered_set<long long> s(u.begin(), u.end());
  for (int i=0; i<n; i++) for (int j=0; j<n*n; j++) {
    if (u2[j] >= u[i]) break;
    if (s.find(u[i] - u2[j]) != s.end()) {
      cout << u[i];
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}