#include <stdio.h>

int main(){
    float score=50;//ให้คะแนนเท่ากับ 50

    if (score >=50)//ถ้าคะแนนมากกว่าหรือเท่ากับ 50
    {
        printf("midterm score=%.1f\n",score+2.5);//ให้คะแนนพิเศษบวก 5%
    }
    else if (score >=0)//ถ้าคะแนนมากกว่าหรือเท่ากับ 0
    {
        printf("midterm score=%.1f\n",score);//ให้คะแนนเท่าเดิม
    }
    
    printf("end of eveluation\n");
    return 0;
}