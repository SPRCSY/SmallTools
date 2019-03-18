#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void mouse_dclick(){
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

int main(){
	int i;
	char act;
	scanf("%d",&act);
	if (act = 'e')
		for(i=0;i<=100;i++){
			mouse_dclick();
			sleep(rand()%15+8);
		}
	return 0;
}
