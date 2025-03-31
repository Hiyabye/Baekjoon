#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<string, int> mp1;
  for (int i=n; i>=1; i--) {
    string s; cin >> s;
    mp1[s] = i;
  }

  map<int, string> mp2;
  for (auto [k, v] : mp1) {
    mp2[v] = k;
  }

  int k; cin >> k;
  map<int, string> mp3;
  while (k--) {
    string s; cin >> s;
    mp3[mp1[s]] = s;
  }

  for (auto [_, v] : mp3) {
    cout << v << "\n";
  }

  for (auto [k, v] : mp2) {
    if (mp3.find(k) != mp3.end()) continue;
    cout << v << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}