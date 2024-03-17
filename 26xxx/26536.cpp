#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);

  string t;
  while (ss >> t) cout << (char)(16 * count(t.begin(), t.end(), 'M') + count(t.begin(), t.end(), 'O'));
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}