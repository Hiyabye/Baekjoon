#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline vector<int> precompute(int n) {
  vector<bool> p(n+2, true);
  p[0] = p[1] = false;
  for (int i=2; i*i<=n+1; i++) {
    if (!p[i]) continue;
    for (int j=i*i; j<=n+1; j+=i) p[j] = false;
  }

  vector<int> ret(n+1, 0);
  for (int i=1; i<=n; i++) {
    ret[i] = p[i+1];
    string s = to_string(i);
    for (int j=1; j<s.length(); j++) {
      ret[i] = ret[i] & p[stoi(s.substr(0, j)) * stoi(s.substr(j)) + 1];
    }
  }

  for (int i=1; i<=n; i++) {
    ret[i] += ret[i-1];
  }
  return ret;
}

void solve(const vector<int> &v) {
  int n; cin >> n;

  cout << v[n] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v = precompute(100000);

  int t; cin >> t;
  while (t--) solve(v);
  return 0;
}