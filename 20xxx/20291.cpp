#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<string, int> m;

  for (int i=0; i<n; i++) {
    string s; cin >> s;
    m[s.substr(s.find('.')+1)]++;
  }

  for (auto it=m.begin(); it!=m.end(); it++) {
    cout << it->first << " " << it->second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}