#include <bits/stdc++.h>
using namespace std;

bool solve(int idx) {
  int a, b;
  string s;
  cin >> a >> s >> b;
  if (s == "E") return false;

  cout << "Case " << idx << ": ";
  if (s == ">") cout << (a > b ? "true" : "false");
  else if (s == ">=") cout << (a >= b ? "true" : "false");
  else if (s == "<") cout << (a < b ? "true" : "false");
  else if (s == "<=") cout << (a <= b ? "true" : "false");
  else if (s == "==") cout << (a == b ? "true" : "false");
  else if (s == "!=") cout << (a != b ? "true" : "false");
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}