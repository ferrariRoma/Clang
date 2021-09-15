//
//  review.cpp
//  nado_review
//
//  Created by 안동규 on 2021/09/09.
//  review

#include <stdio.h>
#include <stdlib.h>

int animal[4][5];
int check[4][5];
char *animalName[10];

void initArray();

int main()
{
    initArray();
    setAnimal();
    
    return 0;
}

void initArray()
{
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            animal[i][j]=-1;
        }
    }
}

void setAnimal()
{
    animalName[0]="토끼";
    animalName[1]="순록";
    animalName[2]="다람쥐";
    animalName[3]="두더지";
    animalName[4]="코끼리";
    animalName[5]="표범";
    animalName[6]="";
    animalName[7]="";
    animalName[8]="";
    animalName[9]="";
}
