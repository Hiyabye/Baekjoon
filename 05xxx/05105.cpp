#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);
  string t; ss >> t;
  if (t == "#") return false;

  vector<bool> v(21, false);
  int cur = stoi(t); v[cur] = true;
  while (ss >> t) {
    cur += stoi(t.substr(1)) * (t[0] == 'U' ? 1 : -1);
    if (cur < 1 || cur > 20 || v[cur]) {
      cout << "illegal\n";
      return true;
    }
    v[cur] = true;
  }

  bool ok = true;
  for (int i=1; i<=20; i++) {
    if (!v[i]) { cout << i << " "; ok = false; }
  }
  if (ok) cout << "none";
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}