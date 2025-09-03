#include <stdio.h>

int main(){
    int level;
    printf("Enter level (1-4): ");
    scanf("%d",&level);
    
    switch (level)
    {
    case 1:(printf("Silver member: 5%% discount\n"));break;
    case 2:(printf("Gold member: 10%% discount\n"));break;
    case 3:(printf("Platinum member: 15%% discount + reward points + birtday gift\n"));break;
    case 4:(printf("Diamond member: all benefits + VIP events\n"));break;
    default:printf("Invalid level\n");break;
    }
    return 0;
}
//  switch case ใช้เมื่อเงื่อนไขมากและซับซ้อน

//ควรใช้ switch case แทน if-else if เพราะมีเงื่อนไชมากและซับซ้อน