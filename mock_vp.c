#include <stdio.h>
#include <unistd.h>

char items[3][10];

int main()
{
    char* buff;
    int i = 0;
    do{
        printf("input item:");
        buff = &items[i][0];
        i++;
        fgets(buff, 40, stdin);
        buff[strcspn(buff, "\n")] = 0;
    }while(strlen(buff)!=0);
    i--;

    
    printf("done adding items\n");
    int j;
    printf("display item #:");
    scanf("%d", &j);
    buff = &items[j][0];
    printf("item %d: %s\n", j, buff);


    return 0;
}
