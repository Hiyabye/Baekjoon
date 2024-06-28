#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  map<string, bool> a;
  string s, t;
  for (int i=0; i<n; i++) {
    cin >> s >> t;
    if (t == "enter") a[s] = true;
    else a[s] = false;
  }

  for (auto it=a.rbegin(); it!=a.rend(); it++) {
    if (it->second) cout << it->first << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}