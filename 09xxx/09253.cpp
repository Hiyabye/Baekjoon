#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a; cin >> a;
  string b; cin >> b;
  string c; cin >> c;

  return a.find(c) != string::npos && b.find(c) != string::npos;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}