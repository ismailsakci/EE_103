#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

float expo(float base, int power){
    int i;
    float result=1.0;
    if(power==0)
    {
        return 1;
    }
    for(i=0;i<power;i++){
        result *= base;

    }
    return result;
}

int factorial(int num){
    int i, result=1;
    if(num==0){
        return 1;
    }
    for(i=1;i<=num;i++){
        result *= i;
    }
    return result;
}

float sinXapprox(float radian, int iter){
    float result=0;
    int i, count=1, sign;

    for(i=1;i<=iter;i=i+2){
        if(count%2==0)
        {
            sign=-1;
        }else{
            sign=1;
        }

        result += (sign * expo(radian, i))/factorial(i);

        count++;
    }
    return result;
}

float cosXapprox(float radian, int iter){
    float result=0;
    int i, count=1, sign;

    for(i=0;i<iter;i=i+2){
        if(count%2==0)
        {
            sign=-1;
        }else{
            sign=1;
        }

        result += (sign * expo(radian, i))/factorial(i);

        count++;
    }
    return result;
}

int main()
{
    int iteration,i;
    float x, result=1;

    printf("Enter the value of n (max iteration number):\n");
    scanf("%d", &iteration);

    printf("Enter the value of x in radius:\n");
    scanf("%f", &x);

    float sinXexact=sin(x);
    float cosXexact=cos(x);
    printf("sinExact: %f\n", sinXexact);
    printf("cosExact: %f\n", cosXexact);
    for(i=0;i<=iteration;i++){
        result *= i;
        if(i==0){
            result = 1;
        }
        printf("%d!=%f\n", i, result);
    }

    printf("sinApprox: %f\n", sinXapprox(x,iteration));
    printf("cosApprox: %f\n", cosXapprox(x,iteration));

    float diffSin = sin(x)-sinXapprox(x,iteration);
    float diffCos = cos(x)-cosXapprox(x, iteration);
    printf("sinXexact - sinXapprox = %f\n", (float)fabs(diffSin));
    printf("cosXexact - cosXapprox = %f", (float)fabs(diffCos));




    return 0;
}



