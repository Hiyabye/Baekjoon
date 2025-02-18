#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  unordered_map<char, int> cnt;
  for (int i=0; i<n/2; i++) cnt[s[i]]++;
  for (int i=(n+1)/2; i<n; i++) cnt[s[i]]++;
  for (auto [_, v] : cnt) {
    if (v & 1) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}