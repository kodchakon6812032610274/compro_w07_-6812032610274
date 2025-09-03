#include <stdio.h>
int main(){
    int level;
    printf("Enter level (1-4): ");
    scanf("%d",&level);

    if (level<=0)
    {
        printf("the level below 1 is not allowed\n");
    }
    else if (level>4)
    {
        printf("the level above 4 is not allowed\n");
    }
    else if (level)
    {
    switch (level){
    
    case 1:printf("Beginner\n");break;
    case 2:printf("Intermediate\n");break;
    case 3:printf("Advanced\n");break;
    case 4:printf("Expert\n");break;
    default:printf("Invalid level\n");break;
    }
    }
    
    return 0;
}
//ถ้ากรณี level น้อยกว่า 0 จะแสดงผล the level below 1 is not allowed
//ถ้ากรณี level มากกว่า 4 จะแสดงผล the level above 4 is not allowed
//ถ้ากรณี level อยู่ในช่วง 1-4 จะแสดงผล Beginner, Intermediate, Advanced, Expert
//default จะไม่ถูกใช้งานเพราะเงื่อนไขครบทุกกรณีแล้ว
//ถ้าขาด break จะทำให้โปรแกรมทำงานผิดพลาดได้ และแสดงผลทุกเหตุการณ์ของ switch case

//ถ้ากรณี level -4 จะแสดงผล the level below 1 is not allowed
//ถ้ากรณี level 0 จะแสดงผล the level below 1 is not allowed
//ถ้ากรณี level 1 จะแสดงผล Beginner
//ถ้ากรณี level 2 จะแสดงผล Intermediate
//ถ้ากรณี level 3 จะแสดงผล Advanced
//ถ้ากรณี level 4 จะแสดงผล Expert
//ถ้ากรณี level 100 จะแสดงผล the level above 4 is not allowed