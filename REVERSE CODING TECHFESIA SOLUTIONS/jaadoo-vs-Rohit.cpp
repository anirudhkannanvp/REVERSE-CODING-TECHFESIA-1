#include <bits/stdc++.h>
using namespace std;

#define PB push_back
#define SZ size()
#define all(v) v.begin(), v.end()
#define REP(i, n) for(int i = 0; i < (int)n; i++)
#define ITR(i, j, n) for(int i = j; i < (int)n; i++)
#define mem(array, val) memset(array, val, sizeof(array))
#define READ(filename) freopen(filename, "r", stdin)
#define WRITE(filename) freopen(filename, "w", stdout)
#define Pii pair <int, int>
#define Fr first
#define Sc second
#define Long long long
#define get(a) scanf("%d", &a)

#define MAX 100005
int N;
char text[MAX];

struct tuple {
  Pii tup;
  int pos;

  bool operator < (const tuple &b) const
  {
    return tup < b.tup;
  }
} L[MAX];

#define Step 20
int P[Step][MAX], step;
void suffix_array_automaton()
{
  REP(i, N) P[0][i] = text[i]-'a';

  int done;
  for(step = 1, done = 1; (done >> 1) < N; done += done, step++) {
    REP(i, N) {
      L[i].tup.Fr = P[step-1][i];
      L[i].tup.Sc = (i+done < N) ? P[step-1][i+done]:-1;
      L[i].pos = i;
    }
    sort(L, L+N);

    REP(i, N) {
      if(!i) P[step][L[i].pos] = i;
      else P[step][L[i].pos] = (L[i].tup.Fr == L[i-1].tup.Fr && L[i].tup.Sc == L[i-1].tup.Sc) ? P[step][L[i-1].pos]:i;
    }
  }
  //cout << "suffix array" << endl;
  //REP(i, text.SZ) cout << L[i].pos << endl;
}

int lcp(int x, int y)
{
  int ret = 0;
  for(int log = step-1; log >= 0 && x < N && y < N; log--) {
    if(P[log][x] != P[log][y]) continue;
    ret += (1 << log);
    x += (1 << log);
    y += (1 << log);
  }
  return ret;
}

int main()
{
  int t;
  scanf("%d", &t);
  while(t--) {
      long long K;
      scanf("%s", text);
      scanf("%lld", &K);
      N = strlen(text);

      suffix_array_automaton();
      for(int i = 0; i < N; i++) {
         int tot = N - L[i].pos, lc = 0;
         if(i) lc = lcp(L[i].pos, L[i-1].pos);
         long long add = ((long long)tot * (tot+1)) / 2 - ((long long)lc * (lc+1)) / 2;
         if(add < K) {
            K -= add;
            continue;
         }
         lc++;
         while(lc < K) {
            K -= lc;
            lc++;
         }
         printf("%c\n", text[ L[i].pos + K - 1 ]);
         break;
      }
  }

  return 0;
}