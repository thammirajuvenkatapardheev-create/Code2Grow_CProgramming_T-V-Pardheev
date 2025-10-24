#include<stdio.h>
int main()
{
    float units_consumed,total_bill;
    printf("enter a number::");
    scanf("%f",&units_consumed);

    if(units_consumed<=100)
    {
        total_bill=units_consumed*3.00;
    }else if(units_consumed>=101 && units_consumed<=200)
    {
        total_bill=units_consumed*4.50;
    }else if (units_consumed>=201 && units_consumed<=300)
    {
        total_bill=units_consumed*6.00;
    }else{
        total_bill=units_consumed*8.00;
    }
    total_bill+=50;
    printf("------Electricity bill -------\n");
    printf("Total Cost for the %f is:::%.2f ",units_consumed,total_bill);
    return 0;
}
