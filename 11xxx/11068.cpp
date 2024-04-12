#include <iostream>
#include <vector>
using namespace std;

bool base(int n, int b) {
  vector<int> v;
  while (n) {
    v.push_back(n % b);
    n /= b;
  }

  for (int i=0; i<v.size()/2; i++) {
    if (v[i] != v[v.size()-i-1]) return false;
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;

  for (int i=2; i<=64; i++) {
    if (base(n, i)) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}