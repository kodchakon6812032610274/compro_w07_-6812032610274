#include <stdio.h>

int main(){
    int level;
    printf("enter membership level (1-4): ");
    scanf("%d",&level);

    if (level==1)
    {
        printf("Silver member: 5%% discount\n");
    }
    else if (level==2)
    {
        printf("Gold member: 10%% discount\n");
    }
    else if (level==3)
    {
        printf("Platinum member: 15%% discount + reward points + birtday gift\n");
    }
    else if (level==4)
    {
        printf("Diamond member: all benefits + VIP events\n");
    }
    else     
    {
        printf("invalid membership level\n");
    }
    
    return 0;
}
//if-else if ใช้เมื่อเงื่อนไขไม่มากและไม่ซับซ้อน