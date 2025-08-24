#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* file;
	char data[5];
	file = fopen("helloworld.txt","r");

	while(fgets(data,sizeof(data),file)!=NULL){
		printf("%s",data);
	}

}



/*
int main(){
	FILE* file;

	file = fopen("helloworld.txt","a");

	fputs("Hello World\n",file);
	fclose(file);
	printf("File Closed\n");


	return 0;
}
*/
