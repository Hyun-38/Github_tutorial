#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, X;
  queue<int> Q;
  string s;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> s;
    if (s == "push")
    {
      cin >> X;
      Q.push(X);
    }
    else if (s == "pop")
    {
      if (Q.empty())
        cout << -1 << '\n';
      else
      {
        cout << Q.front() << '\n';
        Q.pop();
      }
    }
    else if (s == "size")
    {
      cout << Q.size() << '\n';
    }
    else if (s == "empty")
    {
      cout << Q.empty() << '\n';
    }
    else if (s == "front")
    {
      if (Q.empty())
        cout << -1 << '\n';
      else
        cout << Q.front() << '\n';
    }
    else if (s == "back")
    {
      if (Q.empty())
        cout << -1 << '\n';
      else
        cout << Q.back() << '\n';
    }
  }

  return 0;
}