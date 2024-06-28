#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

void solve(void) {
  string str; getline(cin, str);
  stringstream ss(str);

  string s;
  ss >> s;
  cout << (char)toupper(s[0]);
  while (ss >> s) {
    if (s == "i" || s == "pa" || s == "te" || s == "ni" || s == "niti" || s == "a" || s == "ali" || s == "nego" || s == "no" || s == "ili") continue;
    cout << (char)toupper(s[0]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}