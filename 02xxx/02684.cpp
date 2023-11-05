#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();
  
  vector<int> ans(8, 0);
  for (int i=0; i<n-2; i++) {
    int a = s[i] == 'T' ? 0 : 4;
    int b = s[i+1] == 'T' ? 0 : 2;
    int c = s[i+2] == 'T' ? 0 : 1;
    ans[a+b+c]++;
  }

  for (int i=0; i<8; i++) cout << ans[i] << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}