#include <iostream>
#include <vector>
using namespace std;

inline vector<int> calc(const vector<int> &v) {
  vector<int> ret((v.size()+1)/2);
  for (int i=0; i<ret.size(); i++) {
    ret[i] = v[i] + v[v.size()-i-1];
  }
  return ret;
}

bool solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  while (v.size() > 2) v = calc(v);
  return v[0] > v[1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) {
    cout << "Case #" << i << ": " << (solve() ? "Alice" : "Bob") << "\n";
  }
  return 0;
}