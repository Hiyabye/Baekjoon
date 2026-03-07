#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int c; cin >> c; cin.ignore();
  stack<string> sh, pa, so;
  while (c--) {
    string s; getline(cin, s);
    int n = s.length();
    if (n < 8) continue;
    if (s.substr(n-7) == "(shirt)") sh.push(s.substr(0, n-8));
    else if (s.substr(n-7) == "(pants)") pa.push(s.substr(0, n-8));
    else if (s.substr(n-7) == "(socks)") so.push(s.substr(0, n-8));
  }

  while (!sh.empty() && !pa.empty() && !so.empty()) {
    cout << sh.top() << ", " << pa.top() << ", " << so.top() << "\n";
    sh.pop(); pa.pop(); so.pop();
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}