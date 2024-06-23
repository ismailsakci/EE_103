#include <stdio.h>

int main() {
    int model;
    float grade;
    float avg;
    int mid1,mid2,final;
    int midterm1,final1;
    printf("enter the exam model\n");
    scanf("%d",&model);


if(model==1){

    printf("enter the midterm1");
    scanf("%d",&mid1);

    printf("enter the midterm2");
    scanf("%d",&mid2);

    printf("enter the final");
    scanf("%d",&final);
    grade=mid1*0.3+mid2*0.3+final*0.4;
    printf("%f",grade);
}
else if (model=2) {
    printf("enter the midterm1");
    scanf("%d", &midterm1);
    printf("enter the final");
    scanf("%d", &final1);
    grade=midterm1*0.4+final1*0.6;
    printf("%f",grade);
}

    return 0;
}
