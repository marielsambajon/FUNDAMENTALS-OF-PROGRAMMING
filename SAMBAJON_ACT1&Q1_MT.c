#include <stdio.h>

int main() {
    
    float vegetable = 54.5;
    float fruit = 130;
    float milk = 90;
    float soap = 29.45;
    float shampoo_conditioner = 140;
    
    int vq, fq, mq, sq, scq;
    float total, cash, change;
    char again;
    
    do {
        total = 0;
        
        printf("What do you want to purchase? \n");
        
        printf("Enter quantity of vegetable (54.5/k1): ");
        scanf("%d", &vq);
        
        printf("Enter quantity of fruit:");
        scanf("%d", &fq);
        
        printf("Enter quantity of milk (90/pack): ");
        scanf("%d", &mq);
        
        printf("Enter quantity of soap (29.45/bar): ");
        scanf("%d", &sq);
        
        printf("Enter quantity of shampoo and conditioner (140/bottle): ");
        scanf("%d", &scq);
        
        total = (vq*vegetable) + (fq * fruit) + (mq * milk) + (sq * soap) + (scq * shampoo_conditioner);
        printf("Total = %.2f\n", total); 
        printf("Enter cash: \n");
        scanf("%f", &cash);
        
        if (cash >= total){
            change = cash - total;
            printf("Change = %.2f\n", change);
        } else {
            printf(" Not enough money to purchase, you still need %.2f\n", total - cash);
        }
        printf ("Do you want to purchase again (Y/N)?: \n");
        scanf(" %c", &again);
    
    } while (again == 'Y' || again == 'y');
        printf("Thank you for shopping!\n");
        
        
    return 0;
}