#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "#") return false;

  stringstream ss(s);
  string t;
  while (ss >> t) {
    reverse(t.begin(), t.end());
    cout << t << " ";
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}