#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  cin.ignore();

  map<char, int> mp;
  while (n--) {
    string s; getline(cin, s);
    for (char c : s) mp[c]++;
  }

  for (auto it : mp) {
    if (it.first == ' ') continue;
    cout << it.first << " " << it.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}