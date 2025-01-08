#include <stdio.h>
#include <string.h>
#include <unistd.h>

char items[3][10];

void func_a(){
    char* buff;
    int i = 0;
    do{
        printf("input item:");
        buff = &items[i][0];
        i++;
        fgets(buff, 9, stdin);
        if (i==3){buff[0]= 0;}
        buff[strcspn(buff, "\n")] = 0;
    }while(strlen(buff)!=0);
    i--;
}

#ifndef ___TEST___
int main()
{

    func_a();

    char* buff;
    printf("done adding items\n");
    int j;
    printf("display item #:");
    scanf("%d", &j);
    if (j >= 0 && j <= 2){
        buff = &items[j][0];
        printf("item %d: %s\n", j, buff);
    }

    return 0;
}
#endif
