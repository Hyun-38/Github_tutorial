#include <iostream>

using namespace std;

int main()
{
  int num;
  cin >> num;

  for (int i = 0; i < num; i++)
  {
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    for (int a = 1; a < n; a++)
    {
      for (int b = a + 1; b < n; b++)
      {
        if ((a * a + b * b + m) % (a * b) == 0)
        {
          cnt++;
        }
      }
    }

    cout << cnt << endl;
  }

  return 0;
}
