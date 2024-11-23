#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  unordered_map<char, int> mp1, mp2;
  for (char c : a) mp1[c]++;
  for (char c : b) mp2[c]++;

  for (char c='a'; c<='z'; c++) {
    for (int i=0; i<max(mp1[c], mp2[c]); i++) cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}