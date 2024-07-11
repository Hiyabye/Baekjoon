#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  unordered_map<char, int> mp;
  for (int i=0; i<n; i++) mp[s[i]] = i+1;

  if (mp.size() == 1) {
    cout << "No";
  } else {
    cout << "Yes\n" << mp.begin()->second << " " << next(mp.begin())->second << " " << 1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}