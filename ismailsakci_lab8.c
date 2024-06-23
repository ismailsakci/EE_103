
#include <stdio.h>

void storePattern(char coordinates[][100], int length)
{
    int i,j;
    for(i=0;i<length;i++){
        for(j=0;j<length;j++){
            if(i==0 || i==length-1){
                coordinates[i][j] = '*';
            }
            if(j==0 || j==length-1){
                coordinates[i][j] = '*';
            }
            if(i==j){
                coordinates[i][j] = '*';
            }
            if(i==length-j){
                coordinates[i][j] = '*';
            }

        }
    }
}

void printArrays(char pA[][100], int length)
{
    int i,j;
    for(i=0;i<length;i++){
        for(j=0;j<length;j++){
            printf("%c", pA[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int length,i;
    printf("\nEnter the length of the square: ");
    scanf("%d", &length);
    char coordinates[100][100];

    for(i=0;i<100;i++){
        int j;
        for(j=0;j<100;j++){
            coordinates[i][j] = ' ';
        }
    }


    storePattern(coordinates,length);
    printArrays(coordinates,length);
}
















