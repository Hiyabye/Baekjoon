#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  cin.ignore();
  string s; getline(cin, s);

  stringstream ss(s);
  string t; int cur = 0;
  while (ss >> t) {
    cur += t.length();
    if (cur > k) {
      cout << "\n" << t;
      cur = t.length();
    } else {
      if (cur > t.length()) cout << " ";
      cout << t;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}