#include <stdio.h>

int main() {

    double S = 0.00;
    double aux2 = 1.00;
    for(double i = 1.00, two = 2.00; i <= 39.00; i++){
        S += i/aux2;
        aux2 *= two;
        i++;

    }
        printf("%.2lf\n", S);
    return 0;
}
