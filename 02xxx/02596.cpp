#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<char, string> mp = {
  {'A', "000000"},
  {'B', "001111"},
  {'C', "010011"},
  {'D', "011100"},
  {'E', "100110"},
  {'F', "101001"},
  {'G', "110101"},
  {'H', "111010"}
};

int calc(const string &a, const string &b) {
  int ret = 0;
  for (int i=0; i<6; i++) {
    if (a[i] != b[i]) ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  string ans = "";
  for (int i=0; i<n; i++) {
    vector<int> cnt(8);
    for (int j=0; j<8; j++) {
      cnt[j] = calc(s.substr(i*6, 6), mp['A'+j]);
    }
    if (*min_element(cnt.begin(), cnt.end()) >= 2) {
      cout << i+1;
      return;
    }
    ans += 'A' + distance(cnt.begin(), min_element(cnt.begin(), cnt.end()));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}