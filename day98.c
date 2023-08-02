#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        char s[500001];
        scanf("%s", s);
        
        int i = 0;
        int coidx = strlen(s), chidx = 0;
        
        for (i = 0; i < strlen(s) - 3; i++) {
            if (s[i] == 'c' && s[i + 1] == 'o' && s[i + 2] == 'd' && s[i + 3] == 'e') {
                coidx = i;
            }
            
            if (s[i] == 'c' && s[i + 1] == 'h' && s[i + 2] == 'e' && s[i + 3] == 'f') {
                chidx = i;
                break;
            }
        }
        
        if (coidx < chidx) {
            printf("AC\n");
        } else {
            printf("WA\n");
        }
    }
    
    return 0;
}
