// Assignment 4.3 Pattern Displays
// Use nested repetition control structures better known as "loops" to output a hollow square shape
// using just the specific characters +, - and |.
// late submission due to stolen laptop, emailed you last weekend for approval.

#include <iostream>

using namespace std;
int main()
{
  int col = 1, row = 1, cols = 5, rows = 5, side = 0, least = 3, highest = 20;
  char retry;

   cout << "**************** Drawing Squares Program ******************************" << endl;
   cout << "* Algorithm generates a hollow square, using the character +, - and | *" << endl;
   cout << "* Acceptable size dimension: Any value from 3 to 20. Choose carefully.*" << endl;
   cout << "***********************************************************************" << endl;

  do
  {
    cout << "Side size = ";
    cin >> side;

    cols = side;
    rows = side;

    col = 1;
    row = 1;

    if (side < least || side > highest)
        {
            cout << "OOPS! Looks like you typed some bad data here!" << endl;
            cout << "The acceptable dimension should range from 3 to 20, so choose carefully..." << endl;
            cout << "Side size: ";
            cin >> side;

            cols = side;
            rows = side;

            while (row <= rows)
            {
              if (row == 1 || row == rows)
              {
                cout << '+';
                while (col <= cols)
                  {
                    cout << '-';
                    col++;
                  }
                cout << '+';
              }
              else
              {
                cout << '|';
                while (col <= cols)
                {
                  cout << ' ';
                  col++;
                }
                cout << '|';
              }
            cout << endl;
            col = 1;
            row++;
        }
        }

    while (row <= rows)
    {
      if (row == 1 || row == rows)
      {
        cout << '+';
        while (col <= cols)
          {
            cout << '-';
            col++;
          }
        cout << '+';
      }
      else
      {
        cout << '|';
        while (col <= cols)
        {
          cout << ' ';
          col++;
        }
        cout << '|';
      }
    cout << endl;
    col = 1;
    row++;
    }
    cout << "To try my shape generator program again type Y for Yes and N for No: ";
    cin >> retry;
    }
    while ( retry == 'y' || retry == 'Y');

    return 0;
}

/*

**************** Drawing Squares Program ******************************
* Algorithm generates a hollow square, using the character +, - and | *
* Acceptable size dimension: Any value from 3 to 20. Choose carefully.*
***********************************************************************
Side size = 3
+---+
|   |
+---+
To try my shape generator program again type Y for Yes and N for No: y
Side size = 7
+-------+
|       |
|       |
|       |
|       |
|       |
+-------+
To try my shape generator program again type Y for Yes and N for No:

*/
