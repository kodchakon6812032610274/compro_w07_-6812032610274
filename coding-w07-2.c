#include <stdio.h>

int main(){
    int x,y;
    printf("x= y=");//คำแนะนำให้กรอกค่า x,y
    scanf("%d %d",&x,&y);//รับค่าตัว x,y
    if (x>y)//ถ้า x มากกว่า y
    {
        printf("x>y\n");//แสดงผล x>y
    }
    else if (x<y)//ถ้า x น้อยกว่า y
    {
        printf("x<y\n");//แสดงผล x<y
    }
    else if (x==y)//ถ้า x เท่ากับ y
    {
        printf("x=y\n");//แสดงผล x=y
    }
    return 0;
}