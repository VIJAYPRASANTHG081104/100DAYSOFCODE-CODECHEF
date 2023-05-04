#include <stdio.h>

int main(void) {
    int test;
    scanf("%d",&test);
    while(test--){
        char num[100];
        scanf("%s",num);
        int count = 0;
        int len = strlen(num);
        for(int i = 0;i<len;i++){
            if(num[i] == num[len-(i+1)]){
                count++;
            }
        }
        if(count==len){
            printf("wins\n");
        }
        else{
            printf("loses\n");
        }
    }
	return 0;
}

