#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v; string s;
  while (getline(cin, s)) v.push_back(s);

  for (string &t : v) for (char &c : t) {
    if ('A' <= c && c <= 'Z') c = c - 'A' + 'a';
  }

  bool flag = false;
  for (string &t : v) for (char &c : t) {
    if ('0' <= c && c <= '9') flag = false;
    else if (flag && 'a' <= c && c <= 'z') c = c - 'a' + 'A', flag = false;
    else if (c == '.' || c == '?' || c == '!') flag = true;
  }

  for (const string &t : v) cout << t << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}