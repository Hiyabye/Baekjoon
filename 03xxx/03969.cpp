#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  unordered_map<char, int> mp;
  for (char c : s) mp[c]++;

  char key = '.'; int val = 0;
  for (char c='A'; c<='Z'; c++) {
    if (mp[c] > val) key = c, val = mp[c];
    else if (mp[c] == val) key = '.';
  }

  if (key == '.') {
    cout << "NOT POSSIBLE\n";
    return;
  }

  cout << (key - 'E' + 26) % 26 << " ";
  for (char c : s) {
    if (c == ' ') cout << ' ';
    else cout << (char)((c - 'A' + ('E' - key + 26) % 26) % 26 + 'A');
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int c; cin >> c;
  cin.ignore();
  while (c--) solve();
  return 0;
}