#include <WinBase.h>
#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_THREADS 10

void *printHelloWorld(void *tid)
{
	// ����̵߳ı�ʶ��tid��Ȼ���˳�
	printf("Hello World, Greetings from thread %d0", tid);
	
}