#include <stdio.h>
#include <string.h>
#include <unistd.h>

char items[3][5];

void func_a(){
    char* buff;
    int i = 0;
    for(i=0;i<3;i++){
        printf("input item:");
        buff = &items[i][0];
        fgets(buff, 4, stdin);
        buff[strcspn(buff, "\n")] = 0;
    }
}

void func_b(){
    int j;
    printf("display item #:");
    scanf("%d", &j);
    if (j==0){
        printf("item 0: apple\n");
    }else{
        printf("item 0: bicycle\n");
    }

}

#ifndef ___TEST___
int main()
{

    func_a();

    func_b();


    return 0;
}
#endif
