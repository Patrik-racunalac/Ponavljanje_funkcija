#include <iostream>
#include <cmath>

using namespace std;

double zbroj(double a, double b){
    return a+b;
}
double razlika(double a, double b){
    return a-b;
}
double umnozak(double a, double b){
    return a*b;
}
double kolicnik(double a, double b){
    return a/b;
}

void ispisRezultata(double rezultat){
    cout << rezultat << endl;
}

int main()
{
    double a,b;
    cout<<"Unesi dva broja:";
    cin >> a;
    cin >> b;

    cout << "Zbroj:";
    ispisRezultata(zbroj(a,b));
    cout << "Razlika:";
    ispisRezultata(razlika(a,b));
    cout << "Umnozak:";
    ispisRezultata(umnozak(a,b));

    if(a==0 || b==0){
    cout << "Ne dijeli se sa nulom!!!";
    }

        else {
        cout << "Kolicnik:";
    ispisRezultata(kolicnik(a,b));
    }
    return 0;
}
