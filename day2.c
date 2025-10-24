#include <stdio.h>
int main()
{
    float mc,t_bill,p1_share,p2_share,p3_share;
    float tax=0.05,tip=0.1;

    printf("Enter the mealcost");
    scanf("%f",&mc);

    t_bill = mc+(mc*tax)+(mc*tip);
    printf("Total Bill is %2f\n",t_bill);

    p1_share = t_bill/2;
    p2_share = t_bill/2;
    p3_share = 0;

    printf("Bill Splitin amoung the 3 people\n");
    printf("person1_share is %.2f\n",p1_share);
    printf("person2_share is %.2f\n",p2_share);
    printf("person3_share is %.2f\n",p3_share);

    return 0;
}