#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  return stoi(t.substr(0, 1)) <= stoi(s.substr(0, 1)) && stoi(t.substr(2, 1)) <= stoi(s.substr(2, 1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}