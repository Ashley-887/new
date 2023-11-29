
    #include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;



    // 读取用户输入
    scanf("%d", &num);

    // 判断是否是回文数并输出结果
    if (isPalindrome(num)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}