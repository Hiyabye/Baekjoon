#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  cin.ignore();
  string s; getline(cin, s);

  vector<int> ans(53, 0);
  for (int i=0; i<n; i++) {
    ans[v[i]]++;
    if (s[i] == ' ') ans[s[i]-' ']--;
    else if (s[i] >= 'A' && s[i] <= 'Z') ans[s[i]-'A'+1]--;
    else if (s[i] >= 'a' && s[i] <= 'z') ans[s[i]-'a'+27]--;
  }

  for (int i=0; i<53; i++) {
    if (ans[i]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? 'y' : 'n');
  return 0;
}