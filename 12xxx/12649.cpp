#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

inline int calc(int x, int b) {
  int ret = 0;
  while (x) {
    ret += (x % b) * (x % b);
    x /= b;
  }
  return ret;
}

inline bool check(const vector<int> &v, int x) {
  for (int b : v) {
    int y = x;
    unordered_set<int> us;
    while (us.find(y) == us.end()) {
      us.insert(y);
      y = calc(y, b);
    }
    if (y != 1) return false;
  }
  return true;
}

void solve(int idx) {
  string s; getline(cin, s);
  stringstream ss(s); string t;

  vector<int> v;
  while (ss >> t) v.push_back(stoi(t));

  int ans = 2;
  while (!check(v, ans)) ans++;
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t; cin.ignore();
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}