#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int s1, s2, s3; cin >> s1 >> s2 >> s3;
  vector<int> cnt(s1+s2+s3+1, 0);

  for (int i=1; i<=s1; i++) {
    for (int j=1; j<=s2; j++) {
      for (int k=1; k<=s3; k++) {
        cnt[i+j+k]++;
      }
    }
  }

  int mx = 0, ans = 0;
  for (int i=1; i<=s1+s2+s3; i++) {
    if (cnt[i] > mx) {
      mx = cnt[i];
      ans = i;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}