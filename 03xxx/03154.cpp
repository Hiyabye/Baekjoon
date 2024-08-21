#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

unordered_map<int, pair<int, int>> mp = {
  {1, {0, 0}}, {2, {1, 0}}, {3, {2, 0}},
  {4, {0, 1}}, {5, {1, 1}}, {6, {2, 1}},
  {7, {0, 2}}, {8, {1, 2}}, {9, {2, 2}},
  {0, {1, 3}}
};

inline int effort(int a, int b) {
  return abs(mp[a].first - mp[b].first) + abs(mp[a].second - mp[b].second);
}

inline int calc(int h, int m) {
  return effort(h/10, h%10) + effort(h%10, m/10) + effort(m/10, m%10);
}

void solve(void) {
  string s; cin >> s;

  int h = stoi(s.substr(0, 2)), m = stoi(s.substr(3, 2));
  for (int i=stoi(s.substr(0, 2)); i<100; i+=24) {
    for (int j=stoi(s.substr(3, 2)); j<100; j+=60) {
      if (calc(i, j) > calc(h, m)) continue;
      if (calc(i, j) < calc(h, m)) h = i, m = j;
      else if (i < h || (i == h && j < m)) h = i, m = j;
    }
  }
  cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}