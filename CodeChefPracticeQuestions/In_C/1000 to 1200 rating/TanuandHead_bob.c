#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        
        char gestures[N + 1];
        scanf("%s", gestures);
        
        int isIndian = 0, isNotIndian = 0;
        
        for (int i = 0; i < N; i++) {
            if (gestures[i] == 'I')
                isIndian = 1;
            else if (gestures[i] == 'Y')
                isNotIndian = 1;
        }
        
        if (isIndian)
            printf("INDIAN\n");
        else if (isNotIndian)
            printf("NOT INDIAN\n");
        else
            printf("NOT SURE\n");
    }
    
    return 0;
}
