/*

#include <stdio.h>
int main(){
int i=10;
while(i>=1){
	printf("%d\n",i);
	if(i==5)
	break;
	i--;
}

return 0;
}                */

#include <stdio.h>
int main(){
int i=0;
while(i<10){
	i++;
	if(i==5)
		continue;
	printf("%d\n",i);
	
	
}

return 0;
}                
