#include <stdio.h>
void printodd(int arr[]);
void printeven(int* arr);
int main(){
    int i;
    int arr1[10];
    int arr2[10];
    int arr3[10];
    int* arr4;
    int* arr5;
    for (i = 0; i < 10; i++)
    {
        printf("%d번째 정수를 입력하세요 : ",i+1);
        scanf("%d",arr1+i);
        //배열에 숫자 10개 채움.

    }
    printeven(arr1);
    printodd(arr1);
    
    
    

}

void printeven(int arr[]){
    int size = 10; //얘가 포인터의 크기를 반환한다. 원래 이런건가?
    int i = 0;
    // printf("\nsize 중간점검 : %d\n",size);
    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("짝수 출력 : %d\n",arr[i]);
        }else{
            continue;
        }
    }
    
    
}

void printodd(int arr[]){
    int size = 10;
    int i = 0;

    for (i = 0; i < size; i++){
        if(arr[i]%2 !=0){
            printf("홀수 출력 : %d\n",arr[i]);
        }else{
            continue;
        }
    }
    
    
}