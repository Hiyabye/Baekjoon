#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  long long n;
  cin >> n;

  long long l = 1, r = n, k = 1;
  vector<long long> cnt(10, 0);

  while (l <= r) {
    while (r % 10 != 9 && l <= r) {
      long long tmp = r;
      while (tmp) {
        cnt[tmp%10] += k;
        tmp /= 10;
      }
      r--;
    }
    if (l > r) break;

    while (l % 10 != 0 && l <= r) {
      long long tmp = l;
      while (tmp) {
        cnt[tmp%10] += k;
        tmp /= 10;
      }
      l++;
    }
    l /= 10, r /= 10;

    for (int i=0; i<10; i++) {
      cnt[i] += (r-l+1)*k;
    }
    k *= 10;
  }

  for (int i=0; i<10; i++) {
    cout << cnt[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}