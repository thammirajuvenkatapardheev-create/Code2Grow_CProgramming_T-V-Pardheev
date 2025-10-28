#include <stdio.h>
int main()
{
    int age, health;
    char gender;
    float premium = 0;
    printf("Enter the age: ");
    scanf("%d",&age);
    printf("Enter the  gender (M/F): ");
    scanf(" %c",&gender);
    printf("Health condition (1 = Healthy / 0 = Unhealthy): ");
    scanf("%d",&health);
    if(age < 25) {
        if(health == 1)
            premium = 5000;
    }
    else if(age >= 25 && age <= 40) {
        if(health == 1)
            premium = 7000;
        else
            premium = 9500;
    }
    else if(age >= 41 && age <= 60) {
        if(health == 1)
            premium = 10000;
        else
            premium = 13000;
    }
    else if(age > 60) {
        if(health == 1)
            premium = 15000;
        else {
            printf("\nCustomer Details: \n");
            printf("Age: %d\n", age);
            printf("Gender: %c\n", gender);
            printf("Health: Unhealthy\n");
            printf("Status: Not Eligible for Insurance\n");
            return 0;
        }
    }
    if(gender == 'F' || gender == 'f') {
        premium = premium - (premium * 0.10);
    }
    printf("\n Customer Details \n");
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Health: %s\n", (health==1) ? "Healthy" : "Unhealthy");
    printf("Final Premium: ₹%.2f\n", premium);
    return 0;
}