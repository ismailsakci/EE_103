
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

char plotArray[21][41];
char coordinateArr[21][41];


double generateSinusWave(double time, double Amplitute, double frequency)
{
    return Amplitute * sin(0.4 * PI * (time*frequency));
}

void clearScreen(void)
{
    int i,j;
    for(i=0;i<21;i++)
    {
        for(j=0;j<41;j++)
        {
            plotArray[i][j] = ' ';
        }
    }
}

void createCoordinate()
{
    int i,j;
    for(i=0;i<21;i++)
    {
        for(j=0;j<41;j++)
        {
            if(i == 10)
            {
                if(j%5==0)
                {
                    coordinateArr[i][j] = '+';
                }
                else
                {
                    coordinateArr[i][j] = '-';
                }

            }
            if(j==20)
            {
                if(i%5 == 0)
                {
                    coordinateArr[i][j] = '+';
                }
                else{
                    coordinateArr[i][j] = '|';
                }
            }
        }
    }
}

void printPlot()
{

    int i,j;
    for(i=0;i<21;i++)
    {
        for(j=0;j<41;j++)
        {
            printf("%c ", coordinateArr[i][j]);
        }
        printf("\n");
    }
}


        int main()
{

    double magnitute, frequency;
    printf("welcome to Sine Wave Generator on Oscilloscope Screen\n");
    printf("Please enter magnitute: ");
    scanf("%lf", &magnitute);
    printf("Please enter frequency: ");
    scanf("%lf", &frequency);

    clearScreen();
    createCoordinate();
    printPlot();


    return 0;
}

