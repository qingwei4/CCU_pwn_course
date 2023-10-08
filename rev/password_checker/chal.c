#include <stdio.h>
#include <stdlib.h>

int main(){
	char password[0x40];
	scanf("%s", password);
	if (!strcmp(password, "CCU_1337_aaa")){
		puts("CCU{3z_passw0rd_ch3ck3r!}");
	}else {
		puts("QAQ");
	}
	return 0;
}
