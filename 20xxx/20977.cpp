#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  map<char, int> cnt;
  for (int i=0; i<n; i++) {
    cnt[s[i]]++;
  }

  for (int i=0; i<cnt['J']; i++) cout << 'J';
  for (int i=0; i<cnt['O']; i++) cout << 'O';
  for (int i=0; i<cnt['I']; i++) cout << 'I';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}