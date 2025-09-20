#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> b(5);
  for (int i=0; i<5; i++) cin >> b[i];

  int ans = 0;
  for (int a0=0; a0<=15; a0++) {
    for (int a1=0; a1<=15; a1++) {
      for (int a2=0; a2<=15; a2++) {
        for (int a3=0; a3<=15; a3++) {
          for (int a4=0; a4<=15; a4++) {
            int sum1 = a0 + a1 + a2 + a3 + a4;
            int sum2 = a0*1 + a1*2 + a2*3 + a3*4 + a4*5;
            if ((sum1 <= 3 && sum2 > 10) || (sum1 >= 4 && sum2 > 15)) continue;
            ans = max(ans, a0*b[0] + a1*b[1] + a2*b[2] + a3*b[3] + a4*b[4]);
          }
        }
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}