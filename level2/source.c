# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

void no(){
    printf("Nope.\n");
    exit(1);
}

void ok(){
    printf("Good Job!\n");
    exit(0);
}


int main(){
    char user_secret[24];
    char buffer1[10];
    char buffer2[4];
    bool break_condition;
    size_t var;
    int scanf_ret;
    int i, j;

    printf("Enter the key:");

    scanf_ret = scanf("%23s", &user_secret);
    if (scanf_ret != 1){
        no();
    }
    if (user_secret[0] != '0'){
        no();
    }
    if (user_secret[1] != '0'){
        no();
    }

    fflush(0);

    memset(buffer1, 0, 9);
    buffer1[0] = 'd';
    i = 1;
    j = 2;

    while (true){
        break_condition = false;
        if (strlen(buffer1) < 8){
            var = j;
            break_condition = var < strlen(user_secret);
        }
        if (!break_condition)
            break;

        buffer2[0] = user_secret[j];
        buffer2[1] = user_secret[j + 1];
        buffer2[2] = user_secret[j + 2];
        buffer2[3] = '\0';

        buffer1[i] = atoi(buffer2);
        j += 3;
        i++;
    }
    buffer1[i] = '\0';
    
    if (!strcmp(buffer1, "delabere")){
        ok();
    }else {
        no();
    }
    return 0;
}