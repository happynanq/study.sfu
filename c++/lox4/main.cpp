#include <bits/stdc++.h>
//àëåêñàíäðîâ êèðèëë, êëèìîâà ìàøà 4îå çàíÿòèå
using namespace std;

void first()
{
    int d1,d2,m1,m2,y1,y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if(y1 < y2)
    {
        cout<<"ïåðâàÿ äàòà ïðåäøåñòâóåò âòîðîé";
    }else if(y1 > y2)
    {
        cout<<"ïåðâàÿ äàòà ñëåäóåò ïîñëå âòîðîé";
    }else
    {
        if(m1<m2)
        {
            cout<<"ïåðâàÿ äàòà ïðåäøåñòâóåò âòîðîé";
        }else if(m1 > m2)
        {
            cout<<"ïåðâàÿ äàòà ñëåäóåò ïîñëå âòîðîé";
        }else
        {
            if(d1<d2)
            {
                cout<<"ïåðâàÿ äàòà ïðåäøåñòâóåò âòîðîé";
            }else if(d1>d2)
            {
                cout<<"ïåðâàÿ äàòà ñëåäóåò ïîñëå âòîðîé";
            }
            else
            {
                cout<<"Äàòû ñîâïàäàþò";
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
        cout << age << " ëåò";
    }else if(eage == 1)
    {
        cout << age <<" ãîä"<<endl;
    }else if(eage == 2 or eage == 4 or eage == 3)
    {
        cout << age << " ãîäà"<<endl;
    }else
    {
        cout << age << " ëåò";
    }
}

void third()
{
    double a, b, c, y = 0;
    cout << "Введите аргументы" << endl;
    cin >> a >> b >> c;
    if( a== 0 and b == 0 and c == 0)
    {
        cout <<"уравнение имеет бесконечное число корней";
    }else if(c !=0 and a == 0 and b == 0)
    {
        cout << "корней нет";
    }else
    {
        double d = b*b - 4*a*c;
        if(d < 0)
        {
            cout<< "нет действительных корней";

        }else if(d == 0)
        {
            cout << "Один корень: " << -(b/2*a);
        }else
        {
            cout << "Два корня: " << ((-b-sqrt(d))/2*a) << " and " << ((-b+sqrt(d))/2*a);
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    third();
    return 0;
}
