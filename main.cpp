#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {

    system("TITLE Newton's Law of Cooling");
    float TE, T0, T1, T2, t1, t2, k;
    cout<<"Digit the external temperature.\n\n";
    cin>>TE;
    cout<<"\nDigit the initial body's temperature.\n\n";
    cin>>T0;
    cout<<"\nDigit the amount of time (in minutes) when you will measure the new body's temperature.\n\n";
    cin>>t1;
    cout<<"\nDigit the new body's temperature that you have measured after the amount of time you digited before.\n\n";
    cin>>T1;
    cout<<"\nDigit the final temperature you want that the body reaches.\n\n";
    cin>>T2;

    T1 = (T0-TE)/(T1-TE); /*This is the solution to the differential equation y′= k(TE − y) (that was states by Newton),
    which fully is T1 = TE + (T0 − TE)e−kt1*/
    T2 = (T0-TE)/(T2-TE);
    k = log(T1)/t1; //k is a constant which depends on the natural phenomenon which we are studying and observing.
    t2 = log(T2)/k;

    cout<<"\nThe body will reach the final temperature in "<<t2<<" minutes.\n\n";

    /*That is the same differential equation which is used for estimate time of people's death. Police has tables that they consult in order to understand
    since when he is dead. They change a lot, it depends where the body has been found, for example in a refrigerating room, in a lake, or just on the street.
    These tables have been already created and filled out, but this is the maths that lies behind these events.*/

    system("pause");
    return 0;

}
