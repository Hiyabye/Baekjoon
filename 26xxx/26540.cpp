#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Plant {
  vector<int> c;
  int r;
};

void solve(void) {
  int x; cin >> x; cin.ignore();
  vector<Plant> v(x);
  for (int i=0; i<x; i++) {
    string s; getline(cin, s);
    stringstream ss(s); int t;
    while (ss >> t) v[i].c.push_back(t);
    v[i].c.pop_back();
    v[i].r = t;
  }
  int k; cin >> k;

  int ans = 0;
  for (int i=0; i<x; i++) {
    int a = 0, b = 0;
    for (int j=0; j<v[i].c.size(); j++) a += v[i].c[j];
    for (int j=v[i].r; j<v[i].c.size(); j++) b += v[i].c[j];
    while (a < k) a += b;
    if (a == k) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}