/*


#include <stdio.h>
int main(){
int i=10;
for(i=1;i<=10;i++){
	printf("%d\n",i);
}

return 0;
}               

*/


#include <stdio.h>
int main(){
int i=10;
for(i=1;i<=10;i++){
	if(i==5)
	continue;
	printf("%d\n",i);
}

return 0;
}               

