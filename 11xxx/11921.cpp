#include <cstdio>
#include <iostream>
using namespace std;

char input[50000000];
int idx = 0;

int parse(void) {
  int num = 0;
  while (input[idx] >= '0' && input[idx] <= '9') {
    num = num * 10 + input[idx++] - '0';
  }
  return num;
}

void solve(void) {
  fread(input, 1, sizeof(input), stdin);
  int m = parse();

  long long ans = 0;
  for (int i = 0; i < m; i++) {
    idx++;
    ans += parse();
  }
  cout << m << "\n" << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}