#include <iostream>
#include <cmath>

using namespace std;

void udaljenost(int x1, int x2, int y1, int y2){
cout << "udaljenost izmedu tocaka:" << roundl(sqrt((x2-x1)*(x2-1) + (y2-y1)*(y2-y1))) << endl;
}

int main()
{
    int x1,x2,y1,y2;
    cout<<"Unesi koordinate prve tocke:";
    cin >> x1;
    cin >> y1;
    cout<<"Unesi koordinate druge tocke:";
    cin >> x2;
    cin >> y2;

    udaljenost(x1,x2,y1,y2);


    return 0;
}
