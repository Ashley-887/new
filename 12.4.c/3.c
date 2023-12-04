#include <stdio.h>
#include <string.h>

void insertString(char s[], int pos, char t[]) {
    int s_len = strlen(s);
    int t_len = strlen(t);

    // 移动s中的字符，给t腾出空间
    for (int i = s_len; i >= pos; i--) {
        s[i + t_len] = s[i];
    }

    // 将t插入到s的指定位置
    for (int i = 0; i < t_len; i++) {
        s[pos + i] = t[i];
    }
}

int main() {
    char s[100];
    char t[100];
    int pos,i;
    scanf("%s %d %s",&s[i],&pos,&t[i]);
    insertString(s, pos, t);
    printf("%s\n", s);
    return 0;
}