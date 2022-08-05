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
    return 0;
}