#include <stdio.h>

struct info
{
    int roll_no;
    char name[50];
    float cgpa;
};

void display(struct info *m2);

int main()
{
    struct info m1;
    printf(" Enter the Roll Number : ");
    scanf("%d", &m1.roll_no);
    printf(" Enter the Name : ");
    scanf("%s", &m1.name);
    printf(" Enter the CGPA : ");
    scanf("%f", &m1.cgpa);
    display(&m1);
}

void display(struct info *m2)
{
    printf("\n\tSTUDENT'S DETAILS ARE : \n");
    printf(" Roll Number : %d \n", m2->roll_no);
    printf(" Name : %s \n", m2->name);
    printf(" CGPA : %f \n", m2->cgpa);
}