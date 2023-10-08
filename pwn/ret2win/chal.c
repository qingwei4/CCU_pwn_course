#include <stdio.h>
#include <stdlib.h>

void win(void){
	execve("/bin/sh\x00", 0, 0);
}

int main(){
	char s[0x10];
	gets(s);
	return 0;
}
