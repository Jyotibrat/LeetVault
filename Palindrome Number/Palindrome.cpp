#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        string str_num = to_string(num);
        string rev_str_num = str_num;
        reverse(rev_str_num.begin(), rev_str_num.end());

        if (str_num == rev_str_num)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}