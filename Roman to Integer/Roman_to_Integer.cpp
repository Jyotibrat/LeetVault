#include<iostream>
using namespace std;

int main()
{
    string n;
    cout << "Enter a Roman numeral: ";
    cin >> n;

    int size = n.length();
    int i = 0, sum = 0;

    while(size != 0)
    {
        if (n[i] == 'I')
        {
            if (n[i + 1] == 'V')
            {
                sum += 4;
                size -= 2;
                i += 2;
                continue;
            }
            else if (n[i + 1] == 'X')
            {
                sum += 9;
                size -= 2;
                i += 2;
                continue;
            }
            else
            {
                sum += 1;
            }
        }
        else if (n[i] == 'V')
        {
            sum += 5;
        }
        else if (n[i] == 'X')
        {
            if (n[i + 1] == 'L')
            {
                sum += 40;
                size -= 2;
                i += 2;
                continue;
            }
            else if (n[i + 1] == 'C')
            {
                sum += 90;
                size -= 2;
                i += 2;
                continue;
            }
            else
            {
                sum += 10;
            }
        }
        else if (n[i] == 'L')
        {
            sum += 50;
        }
        else if (n[i] == 'C')
        {
            if (n[i + 1] == 'D')
            {
                sum += 400;
                size -= 2;
                i += 2;
                continue;
            }
            else if (n[i + 1] == 'M')
            {
                sum += 900;
                size -= 2;
                i += 2;
                continue;
            }
            else
            {
                sum += 100;
            }
        }
        else if (n[i] == 'D')
        {
            sum += 500;
        }
        else if (n[i] == 'M')
        {
            sum += 1000;
        }
        i++;
        size--;
    }

    cout << sum << endl;

    return 0;
}