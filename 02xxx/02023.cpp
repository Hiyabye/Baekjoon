#include <bits/stdc++.h>

using namespace std;

int n;

bool prime(int num) {
  if (num == 1) return false;
  if (num == 2) return true;
  if (num % 2 == 0) return false;
  for (int i=3; i<=sqrt(num); i+=2) {
    if (num % i == 0) return false;
  }
  return true;
}

void backtrack(int idx, int num) {
  if (idx == n) {
    if (prime(num)) cout << num << "\n";
    return;
  }

  if (prime(num)) {
    backtrack(idx+1, num*10+1);
    backtrack(idx+1, num*10+3);
    backtrack(idx+1, num*10+5);
    backtrack(idx+1, num*10+7);
    backtrack(idx+1, num*10+9);
  }
}

void solve(void) {
  cin >> n;
  backtrack(1, 2);
  backtrack(1, 3);
  backtrack(1, 5);
  backtrack(1, 7);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}