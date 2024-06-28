#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(void) {
  string s; cin >> s;
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<26; i++) {
    for (int j=0; j<n; j++) {
      if (s.find(v[j]) != string::npos) return s;
    }
    for (char &c : s) {
      c = (c - 'a' + 1) % 26 + 'a';
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}