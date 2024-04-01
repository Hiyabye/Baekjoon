#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool solve(void) {
  int m; cin >> m;
  unordered_map<string, int> mp;
  while (m--) {
    string s; int x; cin >> s >> x;
    mp[s] += x;
  }

  vector<int> a;
  for (auto& p : mp) {
    a.push_back(p.second);
  }

  for (int i=0; i<a.size(); i++) {
    for (int j=0; j<a.size(); j++) {
      if (i == j) continue;
      if ((int)((double)a[i] * 1.618) == a[j]) return true;
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Delicious!" : "Not Delicious...");
  return 0;
}