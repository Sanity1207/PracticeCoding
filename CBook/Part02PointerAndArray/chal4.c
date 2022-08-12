#include <stdio.h>
#include <string.h>

int main(){
    //회문인지 체크하는 것.
    char word[30];
    int i = 0;
    int length = 0;
    int flag = 1;
    scanf("%s",word);
    length = strlen(word);
    length -= 1;
    //printf("length : %d\n",length);
    printf("입력하신 단어는 %s 입니다. \n",word);

    for(i=0;i<(length/2);i++){
        //printf("\nword[i] = %c , word[length-i] = %c\n", word[i],word[length-i]);
        if(word[i] == word[length-i]){
            continue;
        }else{
            flag = 0;
            
            break;
        }
        
    }

    if(flag==1){
        printf("입력하신 단어는 회문입니다.");
        
    }else{
        printf("입력하신 단어는 회문이 아닙니다.");

    }
    return 0;

    



    
}