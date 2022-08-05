#include <stdio.h>

int main(){

    int arr[10];
    int i,num;
    int endidx = 9;
    int startidx = 0;

    for(i=0;i<10;i++){

        printf("수 입력 : ");
        scanf("%d",&num);

        if(num%2==0){
            //짝수일때
            arr[endidx--] = num;
        }else{
            //홀수일때
            arr[startidx++] = num;
        }
        
    }

    //출력
    printf("배열 요소의 출력 : ");
    for(i=0;i<10;i++){
        printf("%d",arr[i]);
        
    }

    return 0;
}