#include <iostream>
#include <cmath>

using namespace std;

void zbroj(double a, double b){
    cout << a+b << endl;
}
void razlika(double a, double b){
    cout << a-b << endl;
}
void umnozak(double a, double b){
    cout << a*b << endl;
}
void kolicnik(double a, double b){
    cout << a/b << endl;
}

int main()
{
    double a,b;
    cout<<"Unesi dva broja:";
    cin >> a;
    cin >> b;

    zbroj(a,b);

    razlika(a,b);

    umnozak(a,b);

    kolicnik(a,b);

    return 0;
}
