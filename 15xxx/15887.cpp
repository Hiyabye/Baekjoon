#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<int> l, r;
  for (int i=0; i<n-1; i++) for (int j=0; j<n-i-1; j++) {
    if (v[j] > v[j+1]) {
      swap(v[j], v[j+1]);
      l.push_back(j+1); r.push_back(j+2);
    }
  }

  cout << l.size() << "\n";
  for (int i=0; i<l.size(); i++) {
    cout << l[i] << " " << r[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}