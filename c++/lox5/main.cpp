#include <bits/stdc++.h>
// ����������� ������ � ������ �������. ����� �������. ��� ���������(((
using namespace std;
void first()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b or b == c or a == c)
    {
        cout << "���� ����";
    }else
    {
        cout << "��� ���";
    }
}
void second()
{
    int px, py, cx, cy, r;
    cin >> px >> py >> cx>> cy>>r;
    if(px < cx + r and px > cx - r and py < cy + r and py > cy - r )
    {
        cout << "����� � ����� ������ ����������";
    } else
    {
        cout << "����� � �� ����� ������ ����������";
    }
}

void third()
{
    int px, py;
    cin >> px >> py;
    if(px > 0)
    {
        if(py > 0)
        {
            cout << "1";
        }else
        {
            cout << "4";
        }
    }else
    {
        if(py > 0)
        {
            cout << "2";
        }else
        {
            cout << "3";
        }
    }

}
void fourth()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "MAX: " << max(a,max(b,c)) << endl;
    cout << "MIN: " << min(a,min(b,c)) << endl;
}
void fifth()
{
    int t = 5, n;
    cin >> n;

    if(n % 5 <= 2)
    {
        cout << "green";
    } else if ( n%5 <= 3)
    {
        cout << "yellow";
    }else
    {
        cout << "red";
    }

}
void sixth()
{
    int x;
    cin >> x;
    if(260 == x*x-3*x+5*sqrt(x*x-3*x+76))
    {
        cout<<x <<" �������� ������";
    }else
    {
        cout << x << " �� �������� ������";
    }
}
void seventh()
{
    int x1, y1, x2, y2, lx1, ly1, lx2, ly2;
    cin >> x1 >> y1 >> lx1>> ly1 >> lx2 >> ly2;
    cout << "a)" <<endl;
    if(x1 == x2 and y1 == y2 and lx1 == lx2 and ly1 == ly2)
    {
        cout << "�����������" << endl;
    }else
    {
        cout << "�� �����������" << endl;
    }
    cout << "b)" << endl;
    if(x1 < x2 and y1 < y2 and lx1 < lx2 and ly1 < ly2)
    {
        cout << "��� ����� ������� ����������� �������" << endl;
    }else if(x1 > x2 and y1 > y2 and lx1 > lx2 and ly1 > ly2)
    {
        cout << "��� ����� ������� ����������� �������" << endl;
    }else
    {
        cout << "����� ������ �� ��������������� �� ����������� �������" << endl;
    }
    cout << "�)" << endl;
    if(x1 )
}
int main()
{
    setlocale(LC_ALL, "Russian");
    seventh();
    return 0;
}
