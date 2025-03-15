#include <iostream>
#include <vector>
using namespace std;

struct Problem {
  int score, submit, time;
  Problem(void) : score(0), submit(0), time(0) {}
};

struct Team {
  int id, tot_score, tot_submit, last_time;
  vector<Problem> problems;
  Team(int k) : tot_score(0), tot_submit(0), last_time(-1), problems(k) {}
  void submit(int j, int s, int t) {
    tot_submit++; last_time = t;
    if (s > problems[j].score) {
      tot_score += s - problems[j].score;
      problems[j].score = s;
    }
  }
};

inline bool cmp(const Team &a, const Team &b) {
  if (a.tot_score != b.tot_score) return a.tot_score > b.tot_score;
  if (a.tot_submit != b.tot_submit) return a.tot_submit < b.tot_submit;
  return a.last_time < b.last_time;
}

void solve(void) {
  int n, k, t, m; cin >> n >> k >> t >> m; t--;
  vector<int> i(m), j(m), s(m);
  for (int l=0; l<m; l++) cin >> i[l] >> j[l] >> s[l], i[l]--, j[l]--;

  vector<Team> teams(n, Team(k));
  for (int l=0; l<m; l++) teams[i[l]].submit(j[l], s[l], l);

  int ans = 0;
  for (int l=0; l<n; l++) {
    if (l == t || cmp(teams[l], teams[t])) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}