#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string s;

  int mn = 50, mx = -50;
  while (getline(cin, s)) {
    stringstream ss(s);
    string t; ss >> t;
    while (ss >> t) {
      int x = stoi(t);
      mn = min(mn, x);
      mx = max(mx, x);
    }
  }
  cout << mn << " " << mx;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}