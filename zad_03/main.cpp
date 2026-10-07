#include <iostream>
#include <cmath>

using namespace std;

void udaljenost(double x1, double x2, double y1, double y2){
cout << "udaljenost izmedu tocaka:" << sqrt((x2-x1)^2 + (y2-y1)^2) << endl;
}

int main()
{
    double x1,x2,y1,y2;
    cout<<"Unesi koordinate prve tocke:";
    cin >> x1;
    cin >> y1;
    cout<<"Unesi koordinate druge tocke:";
    cin >> x2;
    cin >> y2;


    return 0;
}
