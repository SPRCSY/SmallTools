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
	printf("��������С��ͣʱ�䣺");
	scanf("%d",&a);
	printf("�����������ͣʱ�䣺");
	scanf("%d",&b); 
	printf("��������ĸe��������"); 
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
