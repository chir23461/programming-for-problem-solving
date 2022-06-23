// if the marks obtained by a student in five different subjects are input through the keyboard, write a problem to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include <stdio.h>

int main()
{
    int em2, ep, ee, ete, pps;
    printf("enter a marks of engineering maths 2 : ");
    scanf("%d", &em2);

    printf("enter a marks of engineering physics : ");
    scanf("%d", &ep);

    printf("enter a marks of electrical engineering :");
    scanf("%d", &ee);

    printf("enter a marks of emerging technology for engineering : ");
    scanf("%d", &ete);

    printf("enter a marks of programming for problem solving : ");
    scanf("%d", &pps);

    int aggregate;
    aggregate = em2 + ep + ee + ete + pps;
    float percentage;
    percentage = aggregate / 5;
    printf("aggregate : %d \n", aggregate);
    printf("percentage : %f", percentage);
}