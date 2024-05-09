#include <stdio.h>
#include <string.h>

void sort_strings(char str[][51], int compare);

int main(void) {
    //책 권 수
    int book_num;
    scanf("%d", &book_num);
    
    //책 제목 입력 받기
    char title[1000][51];
    
    for (int i = 0; i < book_num; i++) {
        scanf("%s", title[i]); 
    }
    
    a(title, book_num);
    
    int cnt[1000] = { 0 }; 
    
    //제일 많이 팔린 책
    for (int i = 0; i < book_num; i++) {
        for (int j = i; j <= book_num; j++) {
            if (strcmp(title[i], title[j]) == 0) { 
                cnt[i]++;
            }
        }
    }

    int best = 0;
    for (int i = 1; i < book_num; i++) {
        if (cnt[i] > cnt[best]) {
            best = i;
        }
    }

    printf("%s", title[best]);
    return 0;
}

void sort_strings(char str[][51], int n) {
    char temp[51];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}