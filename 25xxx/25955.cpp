#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<char, int> mp = {
  {'B', 1}, {'S', 2}, {'G', 3}, {'P', 4}, {'D', 5}
};

bool cmp(const string &a, const string &b) {
  if (mp[a[0]] != mp[b[0]]) return mp[a[0]] < mp[b[0]];
  return stoi(a.substr(1)) > stoi(b.substr(1));
}

void solve(void) {
  int n; cin >> n;
  vector<string> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i], b[i] = a[i];
  sort(b.begin(), b.end(), cmp);

  vector<int> ans;
  for (int i=0; i<n; i++) {
    if (a[i] != b[i]) ans.push_back(i);
  }

  if (ans.empty()) cout << "OK";
  else cout << "KO\n" << a[ans.back()] << " " << a[ans.front()];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}