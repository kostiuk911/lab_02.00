#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;
int main() {
    double a;
    // double z1;
    double z2;
    cout << "a= "; cin >> a; cout << endl;
    // z1 = sin((M_PI / 2.) + (3 * a)) / (1 - sin(3 * a - M_PI));
    z2 = (cos(1.25 * M_PI + 1.5 * a)) / (sin(1.25 * M_PI + 1.5 * a));
    // cout << "z1= " << z1 << endl;
    cout << "z2= " << z2 << endl;

    return 0;
}
