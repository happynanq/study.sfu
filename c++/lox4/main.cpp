#include <bits/stdc++.h>
//����������� ������, ������� ���� 4�� �������
using namespace std;

void first()
{
    int d1,d2,m1,m2,y1,y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if(y1 < y2)
    {
        cout<<"������ ���� ������������ ������";
    }else if(y1 > y2)
    {
        cout<<"������ ���� ������� ����� ������";
    }else
    {
        if(m1<m2)
        {
            cout<<"������ ���� ������������ ������";
        }else if(m1 > m2)
        {
            cout<<"������ ���� ������� ����� ������";
        }else
        {
            if(d1<d2)
            {
                cout<<"������ ���� ������������ ������";
            }else if(d1>d2)
            {
                cout<<"������ ���� ������� ����� ������";
            }
            else
            {
                cout<<"���� ���������";
            }
        }
    }


}

void second()
{
    int d, m, y;
    int dc = 24, mc = 11, yc = 2021;

    cin >> d >> m >> y;
    int age = 0, eage = 0;
    age += yc - y;
    if(mc < m)
    {
        age -=1;
    }else if(mc == m)
    {
        if(d > dc)
        {
            age -=1;
        }
    }
    eage = age%10;
    if(age  > 10 and age < 20)
    {
        cout << age << " ���";
    }else if(eage == 1)
    {
        cout << age <<" ���"<<endl;
    }else if(eage == 2 or eage == 4 or eage == 3)
    {
        cout << age << " ����"<<endl;
    }else
    {
        cout << age << " ���";
    }
}

void third()
{

}


int main()
{
    setlocale(LC_ALL, "Russian");
    third();
    return 0;
}
