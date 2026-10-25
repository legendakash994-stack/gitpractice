#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;

    cout << "Type a number: "<< endl <<"Type another number: " ;
    cin >> x>>y;

  

    if (x > y)
    {
        cout << x << " is greater than " << y << endl;
    }
    else if (x < y)
    {
        cout << x << " is less than " << y << endl;
    }
    else
    {
        cout << x << " is equal to " << y << endl;
    }

    return 0;
}

