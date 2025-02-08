#include <iostream>
#include <map>
using namespace std;

inline int four(map<int, int> &mp) {
  int cnt = 0;
  for (int i=1; i<=13; i++) {
    if (mp[i] == 4) cnt++;
  }
  return cnt;
}

inline int three(map<int, int> &mp) {
  int cnt = 0;
  for (int i=1; i<=13; i++) {
    if (mp[i] == 3) cnt++;
  }
  return cnt;
}

inline int two(map<int, int> &mp) {
  int cnt = 0;
  for (int i=1; i<=13; i++) {
    if (mp[i] == 2) cnt++;
  }
  return cnt;
}

void solve(void) {
  map<int, int> mp;
  for (int i=0; i<6; i++) {
    int x; cin >> x;
    mp[x]++;
  }

  if (four(mp)) {
    if (two(mp)) cout << "tiki pair";
    else cout << "tiki";
  } else if (three(mp)) {
    if (three(mp) == 2) cout << "two triples";
    else if (two(mp)) cout << "full house";
    else cout << "one triple";
  } else if (two(mp)) {
    if (two(mp) == 3) cout << "three pairs";
    else if (two(mp) == 2) cout << "two pairs";
    else cout << "one pair";
  } else {
    cout << "single";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}