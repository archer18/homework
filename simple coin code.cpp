#include <iostream>

using namespace std;

int
main ()
{
  int amt, qtr = 0, dime = 0, nick = 0, penn = 0;
  cout << "enter amount: ";
  cin >> amt;
  cout << endl;

  while (amt >= 25)
    {
      amt = amt - 25;
      qtr = qtr + 1;
    }

  while (amt >= 10)
    {
      amt = amt - 10;
      dime = dime + 1;
    }

  while (amt >= 5)
    {
      amt = amt - 5;
      nick = nick + 1;
    }

  while (amt >= 1)
    {
      amt = amt - 1;
      penn = penn + 1;
    }

  cout << "amount left: " << amt << endl;
  cout << "QTR: " << qtr << endl;
  cout << "DIME: " << dime << endl;
  cout << "NICK: " << nick << endl;
  cout << "PENN: " << penn << endl;

  return 0;
}
