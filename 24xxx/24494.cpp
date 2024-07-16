#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> a(3), b(3);
  for (int i=0; i<3; i++) cin >> a[i];
  for (int i=0; i<3; i++) cin >> b[i];

  unordered_map<char, int> cntA, cntB;
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    cntA[a[i][j]]++; cntB[b[i][j]]++;
  }

  int c = 0, d = 0;
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) c += a[i][j] == b[i][j];
  for (char ch='A'; ch<='Z'; ch++) d += min(cntA[ch], cntB[ch]);

  cout << c << "\n" << d - c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}