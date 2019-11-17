#include <iostream>
#include"Time.h"
using namespace std;

int main()
{
    int i, a, b, c, d;
    cin >> a >> b >> c >> d;;
    Time time(b,c,d);
    cout<<endl;
    time.printUniversal();
    cout<<endl;

    for(i=0;i<a;i++)
    {
        time.tick();
        time.printUniversal();
        cout<<endl;
    }
    cout<<endl;
    time.incometime(54681);
    cout<<endl;
    time.printUniversal();
    cout<<endl<<endl;

    return 0;

}
