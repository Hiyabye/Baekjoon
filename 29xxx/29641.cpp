#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  int k; cin >> k;
  cin.ignore();
  string s; getline(cin, s);
  stringstream ss(s); string t;

  int cur = 0;
  while (ss >> t) {
    if (cur + t.length() > k) {
      cout << "\n";
      cur = 0;
    } else if (cur > 0) {
      cout << " ";
    }
    cout << t;
    cur += t.length();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}