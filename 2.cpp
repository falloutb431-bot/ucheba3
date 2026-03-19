#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "VVEDI 1 CHISLO: ";
    cin >> a;
    cout << "VVEDI 2 CHISLO: ";
    cin >> b;
    cout << "VVEDI 3 CHISLO: ";
    cin >> c;
    int first, second, third;
    if (a >= b && a >= c)
    {
        first = a;
       
        if (b >= c)
        {
            second = b;
            third = c;
        }
        else 
        {
            second = c;
            third = b;
        }
    }
    else if (b >= a && b >= c) {
        first = b;
       
        if (a >= c)
        {
            second = a;
            third = c;
        }
        else 
        {
            second = c;
            third = a;
        }
    }
    else 
    { 
        first = c;
        
        if (a >= b) 
        {
            second = a;
            third = b;
        }
        else 
        {
            second = b;
            third = a;
        }
    }

    
    cout << "CHISLA V PORYADKE UBIVANIA " << first << ", " << second << ", " << third << endl;

    return 0;
}