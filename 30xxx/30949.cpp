#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> a, b;
  string s; getline(cin, s);
  while (s != "------") {
    a.push_back(s);
    getline(cin, s);
  }
  getline(cin, s);
  while (s != "======") {
    b.push_back(s);
    getline(cin, s);
  }

  map<string, int> mp;
  for (const string &str : a) {
    stringstream ss(str);
    int s, e; string t; ss >> s >> e >> t;
    mp[t] -= e - s;
  }
  for (const string &str : b) {
    stringstream ss(str);
    int s, e; string t; ss >> s >> e >> t;
    mp[t] += e - s;
  }

  bool flag = false;
  for (const auto &[t, c] : mp) {
    if (c == 0) continue;
    if (c > 0) cout << t << " +" << c << "\n";
    else cout << t << " " << c << "\n";
    flag = true;
  }
  if (!flag) cout << "No differences found.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}