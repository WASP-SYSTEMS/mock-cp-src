#include <stdio.h>
#include <unistd.h>

char items[3][5];

int main()
{
    char* buff;
    int i = 0;
    for(i=0;i<3;i++){
        printf("input item:");
        buff = &items[i][0];
        fgets(buff, 4, stdin);
        buff[strcspn(buff, "\n")] = 0;
    }
    
    
    int j;
    printf("display item #:");
    scanf("%d", &j);
    buff = &items[j][0];
    printf("item %d: %s\n", j, buff);


    return 0;
}
