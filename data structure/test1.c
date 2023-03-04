#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[100];
    scanf("%[^\n]",line);
    printf("Hello,World\n");
    printf("%s",line);
    return 0;
}
