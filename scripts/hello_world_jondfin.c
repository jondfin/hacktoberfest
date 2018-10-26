/*Language: C
 Author: Jon Cobi Delfin
 Github: https://github.com/jondfin
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv){
	/*Two string literals. They are immutable!*/
	char *hello = "Hello ";
	char *world = "World!";
	
	/*To concatenate the two, we must allocate enough bytes to hold the entire string. Remebmer that strings are simply char arrays terminated with the null byte '/0'*/
	char *helloworld = (char *)malloc(13*sizeof(char));
	strcpy(helloworld, hello);
	helloworld = strcat(helloworld, world);
	helloworld[12] = '\0';
	printf("%s\n", helloworld);

	/*Don't forget to free your allocated memory!*/
	free(helloworld);
	return 0;
}
