#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int ans = 0;
  string s;
  
  while (getline(cin, s)) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}