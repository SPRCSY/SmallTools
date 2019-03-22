#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void mouse_click(){
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

int main(){
	int i;
	char act;
	printf("«Î ‰»Î◊÷ƒ∏e£∫"); 
	scanf("%d",&act);
	if (act = 'e'){
		mouse_click();
		while(1){
			mouse_click();
			sleep(rand()%60+70);
		}
	}
	return 0;
}
