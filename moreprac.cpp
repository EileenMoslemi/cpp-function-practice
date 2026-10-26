#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << a + b << endl;
}

void subtract(int a, int b)
{
    cout << a - b << endl;
}

void multiply(int a, int b)
{
    cout << a * b << endl;
}
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
bool div(int a, int b, int &Q, int &R)
{
    if (b == 0)
        return false;

    Q = a / b;
    R = a % b;
    return true;
}

int min1(int a, int b)
{
    if (b < a)
    {
        return b;
    }
    return a;
}

const int &minn(const int &a, const int &b)
{
    return a < b ? a : b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "1. Add" << endl
         << "2. Subtract" << endl
         << "3. Multiply" << endl
         << "4. Find Minimum" << endl
         << "5. Swap Numbers" << endl
         << "6. Divide" << endl
         << "0. Exit" << endl;

    int ans;
    cin >> ans;
    while (ans != 0)
    {
        if (ans == 1)
        {
            add(a, b);
        }
        else if (ans == 2)
        {
            subtract(a, b);
        }
        else if (ans == 3)
        {
            multiply(a, b);
        }
        else if (ans == 4)
        {
            cout << minn(a, b) << endl;
        }
        else if (ans == 5)
        {
            swap(a, b);
            cout << "a: " << a << " b: " << b << endl;
        }
        else if (ans == 6)
        {
            int q, r;
            if (!div(a, b, q, r))
            {
                cout << "Division by zero\n";
            }
            else if (div(a, b, q, r))
            {
                cout << "Quotient: " << q << endl
                     << "Remaining: " << r << endl;
            }
        }
        else if (ans == 0)
        {
            return 0;
        }
        else
        {
            cout << "Insert a Valid Number" << endl;
        }

        cin >> a >> b;
        cout << "1. Add" << endl
             << "2. Subtract" << endl
             << "3. Multiply" << endl
             << "4. Find Minimum" << endl
             << "5. Swap Numbers" << endl
             << "6. Divide" << endl
             << "0. Exit" << endl;

        cin >> ans;
    }
    return 0;
}