#include <string.h>
#include <stdio.h>

int str_length(char*);  //??? ?? ??
void str_split(char*);  //???? ?? ??? ?? (??? ????)
int main() {
    char answer[80];

    printf("input string : ");
    gets_s(answer, 80);

    printf("length = %d\n", str_length(answer));
    printf("=== ??? ?? ===\n");
    str_split(answer);
    return 0;
}
int str_length(char* answer) {
      int i;
      int a = 0;
    for (i = 0;answer[i] == '\0';i++) {
        a = a + 1;
   }
    return a;
}
void str_split(char* answer) {

    int i;
    for (i = 0;answer[i] == '\0';i++) {
        printf("%c", answer[i]);
        if (answer[i] == ' ') {
            printf("\n");
        }
    }
}
