#include <bits/stdc++.h>
using namespace std;
#define ll long long

char bracket[100000];
int n, open, close;

void print()
{
    for(int i = 1; i <= 2 * n; i++) cout << bracket[i];
    cout << endl;
}

bool check()
{
    open = close = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (bracket[i] == '(') open++;
        else close++;
        if (open < close) return false;
    }
    if (open == close) return true;
    else return false;
}


void giai(int i)
{
    for (int j = 40; j <= 41; j++)
    {
        bracket[i] = char(j);
        if (i == 2 * n)
        {
            if (check() == true) print();
        }
        else giai(i + 1);
    }

}

 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.inp","r")){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    }
    cin >> n;
    giai(1);
}