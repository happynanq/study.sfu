#include <bits/stdc++.h>

using namespace std;

void first()
{
    int a[10], b[10] = {0}, sum;
    for(int i = 0; i <= 9; i++ )
    {
        a[i] = rand() % 10;

        sum +=a[i];

        b[i] = sum;
        cout << "a[i] = " << a[i] << endl;
        cout << "b[i] = " << b[i] << endl;
    }
}
void second()
{
    int a[10];
    for(int i = 0; i <= 9; i++ )
    {
        a[i] = i;
    }
    for(int i = 9; i >= 0; i--)
    {
        cout << a[i];
    }
}
void third()
{
    int a[10];
    for(int i = 0; i <= 9; i++ )
    {
        a[i] = i;
    }
    for(int i = 0; i <= 4; i++)
    {
        swap(a[i], a[10-i]);
    }
    for(int i = 9; i >= 0; i--)
    {
        cout << a[i];
    }
}
void fourth()
{
    const int size = 10;
    int a[size];

    for(int i = 0; i < size; i++ )
    {
        a[i] = i;
    }

    const int temp = a[size-1];

    for(int i = size; i >= 1; i--)
        a[i] = a[i-1];

    a[0] = temp;
    for(int i = 0; i < size; i++)
    {
        cout << a[i];
    }
}
void sixth()
{
    const int N = 10;
    int a[N];
    for(int i = 0; i <= N; i++ )
    {
        if(i%2 == 0 and N /2 < i )
        {
            a[i] = 0;
        }else if(i%2!=0)
        {
            a[i] = i;
        }else
        {
            a[i] = 0;
        }

    }
    for(int i = 0; i < N; i++)
    {
        cout << a[i];
    }

}


int main()
{
    fourth();
    return 0;
}
