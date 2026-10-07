#include <iostream>
#include <cmath>

using namespace std;

void jeParan(int a){
    if(a%2==0) cout << "broj je paran" << endl;
    else cout << "broj je neparan" << endl;
}
void apsVrijednost(int a){
    cout << "apsolutna vrijednost:" << abs(a) << endl;
}
void kvadrat(int a){
    cout << "kvadrat broja:" << a*a << endl;
}

int main()
{

    double a;
    cout<<"Unesi broj:";
    cin >> a;

    if(a>100 || a<-100){
        cout<<"Unesi broj:";
        cin >> a;
    }

    jeParan(a);

    apsVrijednost(a);

    kvadrat(a);



    return 0;
}
