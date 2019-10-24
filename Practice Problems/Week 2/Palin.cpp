#include<iostream>
using namespace std;

int palin(string str)
{

    int n = str.length();

    int c = 0;

    int A[26] = { 0 };

    for (int i = 0; i < n; i++)
    {
        A[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (A[i] % 2 != 0)
        {
            c++;
        }
    }

    if (c == 0)
    {
        return 0;//Even would always become palin
    }
    else
    {
        return c - 1;//As there is always one odd needed for Palin
    }
}


int main()
{
    string str = "apple";
    cout << palin(str);

    return 0;
}
