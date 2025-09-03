#include <stdio.h>

int main(){
    int age;
    int VIP;
    float amount;
    int discount=0;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter level (1-5): ");
    scanf("%d",&VIP);
    printf("Enter purchase amount: ");
    scanf("%f",&amount);

    if (age>60||VIP >=3&& VIP <=4)
    {
        discount =20;
    }
    else if (age>=30&& age <=40 && amount >2000)
    {
        discount =15;
    }
    else if (age >=18&& age<=25 && amount >1000)
    {
        discount =10;
    }
    else if (VIP ==5 || amount >50000)
    {
        discount =25;
    }
    else
    {
        discount =0;
    }
    printf("--- Customer Info ---\n");
    printf("Age: %d | VIP lever: %d | Amount: %.2f THB\n", age,VIP,amount);
    if (discount>0)
    {
        printf("Discount: %d%%\n",discount);
    }
    else 
    {
       printf("No discount applied\n");
    }
    printf("Thank you for shopping with us!\n");
    
    return 0;
}