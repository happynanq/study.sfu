#include <bits/stdc++.h>
//александров кирилл, климова маша 4ое занятие
using namespace std;

void first()
{
    int d1,d2,m1,m2,y1,y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if(y1 < y2)
    {
        cout<<"первая дата предшествует второй";
    }else if(y1 > y2)
    {
        cout<<"первая дата следует после второй";
    }else
    {
        if(m1<m2)
        {
            cout<<"первая дата предшествует второй";
        }else if(m1 > m2)
        {
            cout<<"первая дата следует после второй";
        }else
        {
            if(d1<d2)
            {
                cout<<"первая дата предшествует второй";
            }else if(d1>d2)
            {
                cout<<"первая дата следует после второй";
            }
            else
            {
                cout<<"Даты совпадают";
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
        cout << age << " лет";
    }else if(eage == 1)
    {
        cout << age <<" год"<<endl;
    }else if(eage == 2 or eage == 4 or eage == 3)
    {
        cout << age << " года"<<endl;
    }else
    {
        cout << age << " лет";
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
