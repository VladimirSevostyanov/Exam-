#include <iostream>
#include "factorial.h"

using namespace std;

int main()
{
    unsigned long n, f;
    cout << "input n: ";
    cin >> n;
    f = factorial(n);
    cout << "factorial: " << f << endl;
    return 0;
}

/*
input: 5
output: 120
*/

/*
input: 10
output: 3628800
*/