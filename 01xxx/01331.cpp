#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

inline bool check(int dx, int dy) {
  return dx*dx + dy*dy == 5;
}

bool solve(void) {
  vector<string> v(36);
  for (int i=0; i<36; i++) cin >> v[i];

  unordered_set<string> s;
  for (int i=0; i<36; i++) {
    if (s.find(v[i]) != s.end()) return false;
    s.insert(v[i]);
  }

  for (int i=1; i<36; i++) {
    if (!check(v[i][0] - v[i-1][0], v[i][1] - v[i-1][1])) return false;
  }
  return check(v[0][0] - v[35][0], v[0][1] - v[35][1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Valid" : "Invalid");
  return 0;
}