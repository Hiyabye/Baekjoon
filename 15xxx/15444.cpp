#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<char, vector<string>> mp = {
  {'A', {"***", "*.*", "***", "*.*", "*.*"}},
  {'B', {"***", "*.*", "***", "*.*", "***"}},
  {'C', {"***", "*..", "*..", "*..", "***"}},
  {'D', {"***", "*.*", "*.*", "*.*", "***"}},
  {'E', {"***", "*..", "***", "*..", "***"}}
};

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=0; i<5; i++) {
    for (int j=0; j<n; j++) {
      cout << mp[s[j]][i];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}