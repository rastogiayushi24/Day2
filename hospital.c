#include <stdio.h>
#include <string.h>

float calculateBill(char wardType, int days);

int main() {
    char patientName[50];
    char wardType;
    int days;
    float totalBill, discountedBill;

    printf("Enter Patient Name: ");
    scanf(" %[^\n]s", patientName); 

    printf("Enter Ward Type (G/S/P): ");
    scanf(" %c", &wardType);
    printf("Enter Number of Days: ");
    scanf("%d", &days);

    totalBill = calculateBill(wardType, days);

    printf("\nPatient Name: %s\n", patientName);
    printf("Total Bill Before Discount: ₹%.2f\n", totalBill);

    if (days > 7) {
        float discount = totalBill * 0.05;
        discountedBill = totalBill - discount;
        printf("Discount Applied: ₹%.2f\n", discount);
        printf("Final Bill Amount: ₹%.2f\n", discountedBill);
    } else {
        printf("No discount applied.\n");
        discountedBill = totalBill; 
        printf("Final Bill Amount: ₹%.2f\n", discountedBill);

    }

    return 0;
}

float calculateBill(char wardType, int days) {
    float bill = 0;

    switch (wardType) {
        case 'G':
            bill = days * 1000;
            break;
        case 'S':
            bill = days * 2000;
            break;
        case 'P':
            bill = days * 5000;
            break;
        default:
            printf("Invalid ward type entered.\n");
            return 0;
    }

    return bill;
}
