#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string a, b; int c; cin >> a >> b >> c;
  int n; cin >> n;

  vector<string> v;
  while (n--) {
    string d; char e; int f; cin >> d >> e >> f;
    if (b.find(e) == string::npos || c < f) continue;
    v.push_back(d);
  }
  sort(v.begin(), v.end());

  if (v.empty()) cout << "No one yet";
  for (const string &d : v) {
    cout << d << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}