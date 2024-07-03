#include <stdio.h>
#include <string.h>

char s[100];
int alphabet[26], len, num;

int main(){
    // 알파벳 배열을 -1로 초기화
    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }

    // 문자열 입력 받기
    scanf("%s", s);

    // 문자열 길이 구하기
    len = strlen(s);

    // 각 문자의 첫 등장 위치 기록
    for (int i = 0; i < len; i++) {
        num = s[i] - 'a';
        if (alphabet[num] == -1) {
            alphabet[num] = i;
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }

    return 0;
}