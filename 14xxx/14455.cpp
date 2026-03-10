#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  map<string, int> mp = {
    {"Bessie", 0}, {"Elsie", 0}, {"Daisy", 0}, {"Gertie", 0},
    {"Annabelle", 0}, {"Maggie", 0}, {"Henrietta", 0}
  };

  int n; cin >> n;
  while (n--) {
    string s; int x; cin >> s >> x;
    mp[s] += x;
  }

  set<int> st;
  for (const auto &p : mp) st.insert(p.second);
  if (st.size() < 2) {
    cout << "Tie";
    return;
  }
  int sec = *next(st.begin());

  vector<string> ans;
  for (const auto &[k, v] : mp) {
    if (v == sec) ans.push_back(k);
  }
  cout << (ans.size() == 1 ? ans[0] : "Tie");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}