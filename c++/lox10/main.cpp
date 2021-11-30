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
void third()
{
    int K = 0, O = 0, T = 0;
    bool flag = true;
    while (flag)
        {
        for (int i = K; i<10; i++)
            {
            for (int j = O; j<10; j++)
                {
                for (int l = T; l<10; l++)
                    {
                    if ((i==j) || (i==l) || (l==j))
                        continue;
                    if ((i*100 + j*10 + l) + (i*100 + l*10 + j) == (l*100 + j*10 + i))
                        {
                        flag = false;
                        cout << "KOT + KTO = TOK" << endl;
                        cout << "Ответ: " << i*100 + j*10 + l << " + " << i*100 + l*10 + j << " = " << l*100 + j*10 + i << endl;
                        break;
                        }
                    }
                if (!flag)
                    break;
                }
            if (!flag)
                break;
            }
        }
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
void fifth()
{
    int s, e;
    cout << "start and end: ";
    cin >> s >> e;
    int ee = e;
    for(int i = 0; i < ee-s+1; i++)
    {

        for(int j = e; j >= s; j-- )
        {
            cout << j << " ";
        }
        e--;
        cout << endl;
    }
}
void sixth()
{
    int h;
    cin >> h;
    char s = '^';
    int maxx = (h-1) * 2 + 1;
    for(int i = 0; i <h; i++)
    {

        cout << string(maxx-i, ' ')<< string((i * 2) + 1, s) << endl;
    }

}
void seventh()
{

    int n;
    cin >> n;
    while(n >9)
    {
        int s = 0;
        while(n > 0)
        {
            s += n%10;
            n = int(n / 10);
        }
        n = s;
    }
    cout << n;
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
void ninth()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
    cout << i;
    for (int j = 1; j <= n; ++j)
        if (i % j == 0)
            cout << "+";
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    ninth();
    return 0;
}
