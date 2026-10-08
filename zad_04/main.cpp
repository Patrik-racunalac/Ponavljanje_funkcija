#include <iostream>
#include <cmath>

using namespace std;

void bodovi(double a,double b){
cout << "bodovi:" << a << "/" << b << endl;
}
double postotak(double a,double b){
double rez= (a/b)*100;
cout << "postotak:" << rez << "%" << endl;
return rez;
}
void ocjena(double postotak){
cout << "ocjena:";
if(postotak<50) cout << "1";
if(postotak<65 && postotak>50) cout << "2";
if(postotak<80 && postotak>65) cout << "3";
if(postotak<90 && postotak>80) cout << "4";
else cout << "5";

}

int main()
{
    double a,b;
    cout << "Unesi ostvarene bodove:" << endl;
    cin >> a;
    cout << "Unesi maksimalan broj bodova:" << endl;
    cin >> b;

    bodovi(a,b);

    double p = postotak(a,b);
    ocjena(p);

    return 0;
}
