 /*
    Glenn Ahearne
    Exercise 1
    Celsius to Fahreinheit Conversion
  */

/**preprocessive directives*/
#include <iostream>


using namespace std;

/**Function declarations*/
int main()
{
    /**Variable Declaration*/
    double Tf, Tc;

    /**Read out Temp in Celsius to user*/
    cout<< "Enter Temperature in Degrees Celsius"<<endl;
    /**Read in Temp in Celsius*/
    cin >> Tc;

    /**Calculation for Temp in Fahreinheit*/
    Tf = (9.0/5.0 * Tc ) + 32;

    /**Read out value for Temp in Fahreinheit*/
    cout << "Temperature in Fahreinheit = \t "<< Tf << endl;

    return 0;
}
