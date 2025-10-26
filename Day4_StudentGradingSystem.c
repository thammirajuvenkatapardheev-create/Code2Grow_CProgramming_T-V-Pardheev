#include <stdio.h>
int main() {
    float mp, atd;
    char grade[3];     
    char remarks[20];
    int s1,s2,s3,s4,s5;
    printf("Enter the Marks of 5 subject markes ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1>100 || s2>100 || s3>100 || s4>100 || s5>100)
    {
        printf("---- invalid input---");
    }
    mp=(s1+s2+s3+s4+s5)/5;
    printf("Enter the Attendance percentage: ");
    scanf("%f", &atd);
    if (atd < 75) {
        printf("---- Failed due to low attendance ----\n");
        return 0;
    } 
    else if (atd > 90) {
        if (mp >= 45 && mp <= 49) {
            mp += 5;
            if (mp > 100) mp = 100; 
        }
    }
    if (mp >= 90) {
        sprintf(grade, "A+");
        sprintf(remarks, "Excellent");
    } else if (mp<=89 && mp >= 80) {
        sprintf(grade, "A");
        sprintf(remarks, "Very Good");
    } else if (mp<=79 && mp >= 70) {
        sprintf(grade, "B");
        sprintf(remarks, "Good");
    } else if (mp<=69 && mp >= 60) {
        sprintf(grade, "C");
        sprintf(remarks, "Average");
    } else if (mp<=59 && mp >= 50) {
        sprintf(grade, "D");
        sprintf(remarks, "Pass");
    } else {
        sprintf(grade, "F");
        sprintf(remarks, "Fail");
    }
    printf("\n=============================\n");
    printf("Marks Percentage   : %.2f\n", mp);
    printf("Attendance          : %.2f\n", atd);
    printf("Grade               : %s\n", grade);
    printf("Remarks             : %s\n", remarks);
    printf("=============================\n");
    return 0;
}
