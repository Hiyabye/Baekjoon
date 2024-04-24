#include <iostream>
#include <set>
#include <string>
#include <utility>
using namespace std;

void solve(void) {
  string s; cin >> s;

  set<pair<char, int>> st;
  for (int i=0; i<s.length(); i+=3) {
    if (st.find({s[i], stoi(s.substr(i+1, 2))}) != st.end()) {
      cout << "GRESKA";
      return;
    }
    st.insert({s[i], stoi(s.substr(i+1, 2))});
  }

  int p = 0, k = 0, h = 0, t = 0;
  for (int i=1; i<=13; i++) {
    if (st.find({'P', i}) == st.end()) p++;
    if (st.find({'K', i}) == st.end()) k++;
    if (st.find({'H', i}) == st.end()) h++;
    if (st.find({'T', i}) == st.end()) t++;
  }
  cout << p << " " << k << " " << h << " " << t;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}