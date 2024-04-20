#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int m_cnt = 0, j_cnt = 0;
  long long m_sum = 0, j_sum = 0;
  while (n--) {
    char c; int p; cin >> c >> p;
    if (c == 'M') m_cnt++, m_sum += p;
    else j_cnt++, j_sum += p;
  }

  if (m_cnt == 0) m_cnt = 1;
  if (j_cnt == 0) j_cnt = 1;

  double m_avg = (double)m_sum / m_cnt;
  double j_avg = (double)j_sum / j_cnt;
  cout << (m_avg > j_avg ? 'M' : m_avg < j_avg ? 'J' : 'V');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}