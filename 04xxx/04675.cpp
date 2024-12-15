#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  map<string, set<string>> mp;
  while (s != "XXXXXX") {
    string t = s;
    sort(t.begin(), t.end());
    mp[t].insert(s);
    cin >> s;
  }

  cin >> s;
  while (s != "XXXXXX") {
    sort(s.begin(), s.end());
    if (mp.count(s)) {
      for (const string &t : mp[s]) cout << t << "\n";
    } else {
      cout << "NOT A VALID WORD\n";
    }
    cout << "******\n";
    cin >> s;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}