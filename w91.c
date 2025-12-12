#include <stdio.h>
#include <string.h>

int main () {
	char pass[100];
	printf ("パスワードを入力してください。\n条件:英数字8文字以上、大文字、小文字、数字を含む\n");
	scanf("%s", pass);
	
	int i;
	int s=0;
	int l=0;
	int n=0;
	
	if (strlen(pass) >= 8) {
		for (i=0; pass[i] != '\0'; i++) {
			if (pass[i] >= 'a' && pass[i] <= 'z') {s++;}
			if (pass[i] >= 'A' && pass[i] <= 'Z') {l++;}
			if (pass[i] >= '0' && pass[i] <= '9') {n++;}
		}
		if (s==0 || l==0 || n==0) {
			printf("パスワードは条件を満たしていません。");
			if (s == 0) {printf ("小文字を含めてください。");}
			if (l == 0) {printf ("大文字を含めてください。");}
			if (n == 0) {printf ("数字を含めてください。");}
		}
		else {
			printf("パスワードは条件を満たしています。");
		}
	}
	
	else {
		printf ("パスワードが短すぎます。");
	}
	
	return 0;
}
