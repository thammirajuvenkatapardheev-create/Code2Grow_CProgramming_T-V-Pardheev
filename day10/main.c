#include <stdio.h>
int main() {
    int n_cust, n_items, code, qty;
    float total, final, discount, total_revenue = 0;
    int i = 1;
    printf("Enter total number of customers: ");
    scanf("%d", &n_cust);
    if (n_cust < 1) {
        printf("No customers today. Total revenue = 0\n");
        return 0;
    }
    while (i <= n_cust) {
        printf("\n Customer %d \n", i);
        printf("Menu:\n");
        printf("1. Sandwich - ₹80\n");
        printf("2. Burger   - ₹120\n");
        printf("3. Pizza    - ₹150\n");
        printf("4. Coffee   - ₹60\n");
        printf("5. Juice    - ₹50\n");
        printf("Enter number of items: ");
        scanf("%d", &n_items);
        total = 0;
        for (int j = 1; j <= n_items; j++) {
            printf("Enter item code: ");
            scanf("%d", &code);
            printf("Enter quantity: ");
            scanf("%d", &qty);
            if (code == 1)
                total += 80 * qty;
            else if (code == 2)
                total += 120 * qty;
            else if (code == 3)
                total += 150 * qty;
            else if (code == 4)
                total += 60 * qty;
            else if (code == 5)
                total += 50 * qty;
            else
                printf("Invalid item code!\n");
        }
        if (total > 500) {
            discount = total * 0.10;
            final = total - discount;
        } else {
            discount = 0;
            final = total;
        }
        printf("\nCustomer %d Bill:\n", i);
        printf("Total: ₹%.2f\n", total);
        if (discount > 0)
            printf("Discount (10%%): ₹%.2f\n", discount);
        printf("Final Bill: ₹%.2f\n", final);
        total_revenue += final;
        i++;
    }
    printf("\n Canteen Summary\n");
    printf("Total Customers Served: %d\n", n_cust);
    printf("Total Revenue: ₹%.2f\n", total_revenue);
    printf(" \n");
    return 0;
}
