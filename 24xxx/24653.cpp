#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  int t; cin >> t;

  unordered_set<int> us;
  for (int i=0; i<n; i++) {
    us.insert(s[i] / t);
  }
  cout << us.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}