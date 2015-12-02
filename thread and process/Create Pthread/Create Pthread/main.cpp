#include <WinBase.h>
#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_THREADS 10

void *printHelloWorld(void *tid)
{
	// 输出线程的标识符tid，然后退出
	printf("Hello World, Greetings from thread %d0", tid);
	
}