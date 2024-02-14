#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  cout << (s.find("D2") != string::npos || s.find("d2") != string::npos ? "D2" : "unrated");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}