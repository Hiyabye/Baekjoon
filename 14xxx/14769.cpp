#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, string>> v(n);
  for (int i=0; i<n; i++) {
    string a, b; cin >> a >> b;
    v[i] = isdigit(a[0]) ? make_pair(stoi(a), b) : make_pair(stoi(b) * 2, a);
  }
  sort(v.begin(), v.end());

  for (int i=0; i<n; i++) {
    cout << v[i].second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}