#include<stdio.h>
#include<string.h>
#include<ctype.h>
char converse(char c){
	if(c>='a'&&c<='z'){
		c-=27;
		if(c>'Z') c-=26;
	}
	else if(c>='A'&&c<='Z'){
		c+=37;
		if(c>'z') c-=26;
	}
	return c;
}
int main()
{
	char c[1000];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		if(isdigit((int)c[i])) continue;
		else printf("%c",converse(c[i]));
	}
	printf("\n");
	return 0;
}

