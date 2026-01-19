#include <iostream>
#include <string>
using namespace std;

string solve(void) {
  int n; cin >> n;
  if (n == 1) return "1906";
  if (n == 3) return "2026";
  if (n == 5) return "12106";

  string ans = "1" + string((n-3)/2, '0') + "2" + string((n-3)/2, '0') + "1";
  ans[n-4] += 1; ans[n-3] = '9'; ans[n-2] = '0'; ans[n-1] = '6';
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}