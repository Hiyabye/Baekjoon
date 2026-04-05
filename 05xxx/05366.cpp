#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v;
  string s; getline(cin, s);
  while (s != "0") {
    v.push_back(s);
    getline(cin, s);
  }

  unordered_map<string, int> mp;
  for (const auto &s : v) mp[s]++;

  unordered_set<string> st;
  for (const auto &s : v) {
    if (st.find(s) != st.end()) continue;
    st.insert(s);
    cout << s << ": " << mp[s] << "\n";
  }
  cout << "Grand Total: " << v.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}