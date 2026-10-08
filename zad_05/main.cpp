#include <iostream>

using namespace std;
void stavka1(double a,double b){
cout << "Stavka 1: " << a*b << endl;
}


int main()
{
    double a,b;
    cout << "Proizvod 1:cijena i kolicina:" << endl;
    cin >> a;
    cin >> b;
    cout << "Proizvod 2:cijena i kolicina:" << endl;
    cin >> a;
    cin >> b;
    cout << "Proizvod 3:cijena i kolicina:" << endl;
    cin >> a;
    cin >> b;

    stavka1(a,b);


    return 0;
}
