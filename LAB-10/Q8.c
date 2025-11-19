#include <stdio.h>
#include <string.h>

int main(){
    char categories[3][20] = {"Appetizers","Main Course","Desserts"};
    char items[3][3][30] = {
        {"Spring Rolls", "Garlic Bread", "Bruschetta"},
        {"Grilled Chicken", "Pasta Alfredo", "Veg Burger"},
        {"Ice Cream", "Chocolate Cake", "Fruit Salad"}
    };
    
    float prices[3][3] = {{5.50, 4.00, 6.00},
        				{12.00, 10.50, 8.50},
        				{3.50, 7.00, 4.50}
    };

    int i, j;

    printf("====== Welcome to Our Restaurant ======\n\n");
    for(i = 0; i < 3; i++) {
        printf("---- %s ----\n", categories[i]);
        for(j = 0; j < 3; j++) {
            printf("%-20s $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }
    printf("------ Budget-Friendly Options (under $10) ------\n\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(prices[i][j] < 10) {
                printf("%-20s %-15s $%.2f\n", items[i][j], categories[i], prices[i][j]);
            }
        }
    }

    return 0;
}

