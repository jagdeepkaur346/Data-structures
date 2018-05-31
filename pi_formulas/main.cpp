#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    /***** Complete this program. *****/
    double r;
    r = 4*atan(1);
    cout.precision(16);
    cout << "pi   = " << r << " = 4*arctan(1)" << endl;

    cout << endl;
    cout << "Ramanujan's pi formulas:" << endl;


    double pi15, pi16, pi18, pi22, pi31;

    pi15 = (12/sqrt(130)) * (log(((2 + sqrt(5))*(3+sqrt(13)))/sqrt(2)));
    pi16 = (24/sqrt(142)) * ( log( (sqrt((10 + (11*(sqrt(2))))/4)) + (sqrt((10+ (7 *sqrt(2)))/4)))) ;
    pi18 = (12/sqrt(190)) * ( log( ((2*sqrt(2))+ sqrt(10)) * (3 + sqrt(10))));
    pi22 = (12/ sqrt(310)) * (log (((3+ sqrt(5))*(2+sqrt(2))*((5+(2*sqrt(10)))+ sqrt(61+ (20*sqrt(10)))))/4));
    pi31 = (4/sqrt(522)) * log (pow(((5+sqrt(29))/sqrt(2)),3) * (5*sqrt(29)+11*sqrt(6)) * pow((sqrt((9+3*sqrt(6))/4) + sqrt((5 + 3*sqrt(6))/4)),6) );
    cout<< "pi15 = "<<pi15;
    cout<< "\npi16 = "<<pi16;
    cout<< "\npi18 = "<<pi18;
    cout<< "\npi22 = "<<pi22;
    cout<< "\npi31 = "<<pi31;




    float sum=1, term=1,d=1;
    int a=3,c=0;

    while (term > (pow(10,-8)))
    {
        d+=a;
        term = 1/d;
        sum+=term;
        a+=2;
        c++;
    }
    cout.precision(8);
    cout << "\n\nEuler's infinite sum for pi*pi/6 = " << sum << endl;

    cout << "                      Converged to " << sum
         << " after " << c+2 << " iterations" << endl;

    float error,pivalue;

    pivalue = sqrt(6*sum);
    error = r - pivalue;

    cout << "\nEuler's estimate for pi = " << pivalue << endl;
    cout << "                  error = " << error << endl;
    return 0;
}

