#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  vector<vector<int>> cnt(26, vector<int>(s.length()+1, 0));
  for (int i=0; i<26; i++) {
    for (int j=0; j<s.length(); j++) {
      cnt[i][j+1] = cnt[i][j] + (s[j] == 'a'+i);
    }
  }

  int q; cin >> q;
  while (q--) {
    char a; int l, r; cin >> a >> l >> r; l++; r++;
    cout << cnt[a-'a'][r] - cnt[a-'a'][l-1] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}