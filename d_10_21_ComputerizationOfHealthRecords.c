/// Computerization of Health Records
#include<stdio.h>
#include<string.h>
#define SIZE 2

int user_age(int);
int max_rate(int);
int bmi(int);

struct dob
{
    int day;
    int month;
    int year;
};

struct HealthProfile
{
    char first[10];
    char last[10];
    char gender[2];
    struct dob d;
    int height;
    int weight;

    int v_age;
    int v_max_rate;
    int v_bmi;
};

int main()
{
    struct HealthProfile hp[SIZE];
    int i;

    printf("\nWelcome to computerized data of your profile\n");
    for (i = 0; i<SIZE; i++)
    {
        printf("Person = #%d ", i+1);
        printf("\nEnter your first name = ");
        gets(hp[i]. first);

        printf("\nEnter last name = ");
        gets(hp[i]. last);

        printf("\nGender = ");
        scanf("%c", &hp[i]. gender);

        printf("\nEnter dob = ");
        puts("Day = ");
        scanf("%d", &hp[i]. d. day);

        puts("  Month = ")
        scanf("%d", &hp[i]. d. month);

        puts("  Year = ")
        scanf("%d", &hp[i]. d. year);

        printf("\nEnter height in cm's = ");
        scanf("%f", &hp[i]. height);

        printf("\nEnter weight in kg's = ");
        scanf("%f", &hp[i]. weight);

        hp[i]. v_age = age(hp[i]. d. year);
        hp[i]. v_max_rate = max_rate(hp[i]. d. year);
        hp[i]. v_bmi = bmi(hp[i]. height, hp[i]. weight);
    }

    for(i=0 ; i<SIZE; i++)
    {
    printf("\nPrinting user data");
    printf("\nName = %s %s", hp[i]. first, hp[i]. last);
    printf("\nGender = %s", hp[i]. gender);
    printf("\nDOB = %d : %d : %d", hp[i].d. day, hp[i].d. month, hp[i].d. year);
    printf("\nHeight = %d", hp[i]. height);
    printf("\nWeight = %d", hp[i]. weight);
    printf("\nAge = ", hp[i]. v_age);
    printf("\nMax Heart Rate = %d", hp[i]. max_rate);
    printf("\nBMI = %d", hp[i]. bmi);
    }

    return 0;
}

int user_age(int year)
{
    int age;
    int present = 2017;

    age = present - year;
    return (age);
}


int max_rate(int year)
{

}


int bmi(int height,k int hp[i]. weight)
{

}
