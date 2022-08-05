#include <stdio.h>
#include <math.h>
int main(){
    int i;
    int origin;
    int arr[10];
    int index = 0;
    int remainder; //나머지 저장
    int val; //몫 저장
    printf("10진수 하나를 입력하세요 : ");
    scanf("%d",&origin);

    while(1){
        //몫과 나머지를 먼저 구하자.
        
        val = origin / 2;
        remainder = origin % 2;

        arr[index++] = remainder;

        if(val == 0 || val == 1){
            arr[index] = val;
            break;
        }

        origin = val;

        
    }

    for(i = index;i>=0;i--){
        printf("%d",arr[i]);

    }
    printf("\n");
    return 0;
    
}