#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SOCIAL 0;

struct student
{
    int age;
    int grade;
    int failedCredits;
};

void nextGrade(int *grade, int *age)
{
    (*grade)++;
    (*age)++;
}

void repeatYear(int *grade, int *age)
{
    (*age)++;
}

int main(int argc, char *argv[]){
    struct student you;
    you.age = 16;
    you.grade = 1;
    srand(time(NULL));
    while(you.grade <= 5){
        you.failedCredits = rand() % 10;
        if(you.failedCredits >= 5){
            repeatYear(&you.grade, &you.age);
        }else{
            nextGrade(&you.grade, &you.age);
        }
    }
    printf("You are graduated as %d years old.\n", you.age);

    return SOCIAL;
}