#include <iostream>
#include <cmath>

using namespace std;

bool jeParan(int a){
if(a%2==0) cout << "broj je paran" << endl;
else cout << "broj je neparan" << endl;
}

int apsVrijednost(int a){
    return abs(a);
}
int kvadrat(int a){
    return a*a;
}
void ispisiAnalizu(int broj){
cout << broj << endl;
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


    ispisiAnalizu(jeParan(a));

    cout << "Apsolutna vrijednost:";
    ispisiAnalizu(apsVrijednost(a));

    cout << "Kvadrat:";
    ispisiAnalizu(kvadrat(a));



    return 0;
}
