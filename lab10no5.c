#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC; 
} hoststd;

int main() {
    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.Golf", {"Golfza111", "1111"}},
        {"66-040626-0000-1", "MR.Mon", {"Maxkung222", "2222"}},
        {"66-040626-0000-2", "MR.Jab", {"Monfemboy333", "3333"}},
        {"66-040626-0000-3", "MR.Max", {"Jabchan444", "4444"}},
        {"66-040626-0000-4", "MR.Tin", {"Tinthegooner555", "5555"}}
    };

    char inputUser[64];
    char inputPass[64];
    int found = 0;
    int i;

    printf("Enter Login Name: ");
    scanf("%s", inputUser);
    printf("Enter Password: ");
    scanf("%s", inputPass);

    for (i = 0; i < 5; i++) { 
        if (strcmp(inputUser, cs[i].stdACC.loginname) == 0 && 
            strcmp(inputPass, cs[i].stdACC.password) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    return 0;
}
