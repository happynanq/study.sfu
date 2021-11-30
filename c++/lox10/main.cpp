#include <bits/stdc++.h>

using namespace std;

void first()
{
    string s;
    int x, y;
    cin >> s >> x >> y;
    for(int i = 0; i < x; i++)
    {
        for(int j= 0; j < y; j++)
        {
            cout << s;
        }
        cout << endl;
    }


}

void second()
{
    int n, k, ans=0;
    cin >> n >> k;
    for( int i = 1; i <= n; i++)
    {
        ans += pow(i, k);
    }
    cout << ans;

}
void fourth()
{
    int b,k,t;

    for(b=0;b<=10;b++)
    {
        for(k=0;k<=20;k++)
        {
            for(t=0;t<=200;t++)
            {
                if((20*b+10*k+t==200)&&(b+k+t==100))
                {
                    cout << "Áûêîâ " << b << endl;
                    cout << "Êîðîâ " << k << endl;
                    cout << "Òåëÿò " << t << endl;
                }
            }
        }
    }

}
void eight()
{
    for(int i = 1; i <10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << i << "*" <<  j << "=" << i*j << "\t";
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    eight();
    return 0;
}
