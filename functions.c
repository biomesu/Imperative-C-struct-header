#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "functions.h"

struct trip{
    double sideA;
    double sideB;
    double hyp;
} new[3];

void inputTwoSides(double sideAIn, double sideBIn, int rowIndex){
    new[rowIndex].sideA = sideAIn;
    new[rowIndex].sideB = sideBIn;
    new[rowIndex].hyp = sqrt(pow(sideAIn,2)+pow(sideBIn,2));


}
void inputOneSideAndHyp(double sideAIn, double hypIn, int rowIndex){
    new[rowIndex].sideA = sideAIn;
    new[rowIndex].hyp = hypIn;
    new[rowIndex].sideB = sqrt(pow(hypIn,2)-pow(sideAIn,2));
}
void printArray(){
    for (int i = 0; i < 3; i++)
{
    printf("PythTriple [ ");
    printf("sideA = %.2f ",new[i].sideA);
    printf("sideB = %.2f ",new[i].sideB);
    printf("hyp = %.2f ",new[i].hyp);
    printf(" ] \n");

    }
}