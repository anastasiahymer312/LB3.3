#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double x; // вхідний аргумент
  double R; // вхідний параметр
  double y; // результат обчислення виразу
  cout << "R = "; cin >> R;
  cout << "x = "; cin >> x;

  // розгалуження в повній формі
  if (-6 < x && x < 0)
      y = -R - (R * x / 6);
  else
      if (0 < x && x < R)
          y = sqrt(R * R - (x - R) * (x - R));
      else
          if (R < x && x < 2 * R)
              y = R + sqrt(R * R - x * x);
          else
              y = R;
  cout << endl;
  cout << "y = " << y << endl;
  cin.get();
  return 0;
}
