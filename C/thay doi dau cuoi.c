#include <stdio.h>
#include <string.h>
	int main(){
		char a[9];
		int x;
		scanf("%s",a);
		x=strlen(a);
		if(a[x-1]==48){
			for (int i=1;i<x-1;i++){
				printf("%c",a[i]);
			}
			printf("%c",a[0]);
		}else{
			printf("%c",a[x-1]);
			for (int i=1;i<x-1;i++){
				printf("%c",a[i]);
			}
			printf("%c",a[0]);
		}
		return 0;
}