#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);

  int n; char c; ss >> n;
  if (!(n % 4)) cout << n << " ";
  while (ss >> c >> n) {
    if (!(n % 4)) cout << n << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}