#include <stdio.h>

//Calculate discount
float calculateDiscount(float amount) {
    if (amount >= 500 && amount <= 1000) {
        return amount * 0.10;  // 10% discount
    } else if (amount > 1000) {
        return amount * 0.20;  // 20% discount
    } else {
        return 0;  // No discount
    }
}

int main() {
    float amount, discount, finalAmount;

    printf("Enter total bill amount: ₹");
    scanf("%f", &amount);
  
//Calculate discount
    discount = calculateDiscount(amount);
    finalAmount = amount - discount;

    if (discount > 0) {
        printf("Final Payable Amount: ₹%.2f (after %.0f%% discount)\n", finalAmount, (discount / amount) * 100);
    } else {
        printf("Final Payable Amount: ₹%.2f (No discount)\n", finalAmount);
    }

    return 0;
}
