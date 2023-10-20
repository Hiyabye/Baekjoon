#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  vector<bool> check(26, false);
  for (char c : s) {
    if (c >= 'A' && c <= 'Z') check[c - 'A'] = true;
    else if (c >= 'a' && c <= 'z') check[c - 'a'] = true;
  }

  bool flag = true;
  for (bool b : check) {
    if (!b) {
      flag = false;
      break;
    }
  }

  if (flag) {
    cout << "pangram\n";
  } else {
    cout << "missing ";
    for (int i=0; i<26; i++) if (!check[i]) cout << (char)('a' + i);
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}