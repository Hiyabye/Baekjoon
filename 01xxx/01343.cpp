#include <iostream>
#include <string>
using namespace std;

bool check(string s) {
  int cnt = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == 'X') cnt++;
    else if (cnt % 2) return false;
    else cnt = 0;
  }
  return cnt % 2 == 0;
}

void cover(int &cnt) {
  for (int i=0; i<cnt/4; i++) cout << "AAAA";
  cnt %= 4;
  for (int i=0; i<cnt/2; i++) cout << "BB";
  cnt %= 2;
}

void solve(void) {
  string s;
  cin >> s;

  if (!check(s)) {
    cout << "-1";
    return;
  }

  int cnt = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == 'X') cnt++;
    else {
      cover(cnt);
      cout << ".";
    }
  }
  cover(cnt);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}