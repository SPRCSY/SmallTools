#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void mouse_click(){
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

int main(){
	int i,a,b;
	char act;
	printf("请输入最小暂停时间：");
	scanf("%d",&a);
	printf("请输入最大暂停时间：");
	scanf("%d",&b); 
	printf("请输入字母e来启动："); 
	scanf("%d",&act);
	if (act = 'e'){
		mouse_click();
		for(i=0;i>=0;i++){
			mouse_click();
			sleep(rand()%a+b);
		}
	}
	return 0;
}
