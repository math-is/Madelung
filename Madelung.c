
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double alpha = 0;
    double M = 10000;
    double var = 0;

    for(int i = -M; i <= M; i++){
        for(int j = -M; j <= M; j++){
            if(i == 0 && j == 0)
                continue;

            var = pow(-1, 1 + j + i) / sqrt(j*j + i*i);

            if (abs(i) == M)
                var *= 0.5;
            if (abs(j) == M)
                var *= 0.5;

            alpha += var;
        }



    }



    printf("alpha = %.9lf\n", alpha);





    return 0;
}