#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool cmp(const pair<int, char> &a, const pair<int, char> &b) {
  if (a.first != b.first) return a.first > b.first;
  return a.second < b.second;
}

void solve(void) {
  string s; cin >> s;

  vector<pair<int, char>> v(26);
  for (int i=0; i<26; i++) v[i] = {0, 'a' + i};
  for (char c : s) v[c - 'a'].first++;
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<26; i++) {
    for (int j=0; j<v[i].first; j++) cout << v[i].second;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}