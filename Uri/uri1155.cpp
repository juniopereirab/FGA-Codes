#include <stdio.h>

int main() {

    double S = 0.00;

    for(double i = 1.00; i <= 100.00; i++){
        S += 1.00/i;
    }
        printf("%.2lf\n", S);
    return 0;
}
