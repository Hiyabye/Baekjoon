#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Data {
  string s;
  int i, d;
};

bool cmp(const Data &a, const Data &b) {
  return a.i < b.i;
}

void solve(void) {
  int n; cin >> n;
  vector<Data> v(n);
  for (int i=0; i<n; i++) cin >> v[i].s >> v[i].i >> v[i].d;
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << (char)toupper(v[i].s[v[i].d-1]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}