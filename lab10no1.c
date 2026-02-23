#include <stdio.h>
#include <string.h>
typedef struct
{
    char loginname[64];
    char password[64];
} account;

typedef struct
{
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;
void Check(hoststd std[], char *user, char *password, int size);
int main()
{

    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
        {"66-040626-2686-8", "MR.B", {"user2", "passwd2"}},
        {"66-040626-2686-7", "MR.C", {"user3", "passwd3"}},
        {"66-040626-2686-6", "MR.D", {"user4", "passwd4"}},
        {"66-040626-2686-5", "MR.F", {"user5", "passwd5"}}};

    char user[64] ,pass[64];
    
    printf("Input username: ");
    scanf("%63s",user);
    printf("Input password: ");
    scanf("%63s", pass);
    Check(cs,user,pass,5);
}

void Check(hoststd std[],char *user, char *password , int size){
    int found = 0;
    for(int i=0 ;i<size;i++){
        if (strcmp(std[i].stdACC.loginname, user) == 0 &&strcmp(std[i].stdACC.password, password) == 0){
            found = 1;
            break;
        }
    }

    if(found == 1){
        printf("Welcome\n");
    }
    else{
        printf("Incorrect login or password\n");
    }
}