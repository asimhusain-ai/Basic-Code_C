#include <stdio.h>

int main() {
  char food_items[10][20] = {
    "Burger", "Pizza", "Fries", "Sandwich", "Hotdog", "Tacos", "Noodles", "Soup", "Salad", "Soda"
  };
  int food_prices[10] = { 100, 200, 50, 80, 70, 120, 90, 60, 40, 30 };

  int choice, quantity;
  float total, gst;

  printf("Welcome to the Food Ordering System!\n");
  for(int i = 0; i < 10; i++) {
    printf("%d. %-10s Rs.%d\n", i+1, food_items[i], food_prices[i]);
  }

  printf("Enter the food item number you want to order: ");
  scanf("%d", &choice);
  printf("Enter the quantity: ");
  scanf("%d", &quantity);

  total = quantity * food_prices[choice-1];

  gst = (total * 0.18);

  printf("\n\nBill\n");
  printf("====\n");
  printf("Food Item: %s\n", food_items[choice-1]);
  printf("Price per item: Rs.%d\n", food_prices[choice-1]);
  printf("Quantity: %d\n", quantity);
  printf("Total Price: Rs.%.2f\n", total);
  printf("GST (18%%): Rs.%.2f\n", gst);
  printf("Total Amount: Rs.%.2f\n", total + gst);

  return 0;
}
