#include <stdio.h>
#include <math.h>
int main() {
    int side;
    int perimeter;
    int areasquare;
int a=2;
int radius;
char shape;
double area;
float circumference;
float pi=3.14159;
    printf("please select a shape");
    scanf("%c",&shape);
    if('c'==shape) {
        printf("enter the radius");
        scanf("%d",&radius);
      area = pi * radius * radius;
        circumference = a * pi * radius;
        printf("%09.4f\n", area);
        printf("%f\n", circumference);
    }
    else if('s'==shape) {
        int side;
        int b=4;
        int perimeter;
        int areasquare;
        printf("enter the side of square");
        scanf("%d",&side);
        areasquare = side*side;
        perimeter = b*side;
        printf("%d\nperimeter\n",perimeter);
        printf("%d",areasquare);
    }
    else if('t'==shape){

        int side;
         double area;
        float equilateraltriangle;
        printf("enter the  side ");
        scanf("%f",&side);
       area=((sqrt(3))/4)*(side*side);
        equilateraltriangle=4*side;
        printf("%09.4f triangle area",area);
        printf("%09.4f\nequilaterel",equilateraltriangle);

    }


        return 0;

      }


