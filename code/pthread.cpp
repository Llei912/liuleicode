//创建多个线程执行不同的函数
#include <pthread>
#include <stdio.h>
#include <sys/time.h>
#include <string.h>

#define  MAX  10

pthread_t thread[2];
pthread_mutex_t mut;   //互斥量
int number = 0,i;

//线程1
void* thread1()
{
	printf("thread1::I'm thread 1\n");
	for (i = 0;i < MAX;i++)
	{
		printf("thread1: number = %d\n",number);
		pthread_mutex_lock(&mut);
		number++;
		pthread_mutex_unlock(&mut);
		sleep(2);
	}
	printf("pthread1：主函数在等我完成任务吗？");

	pthread_exit(NULL);
	 
}

void* thread2()
{
	printf("thread2::I'm thread 1\n");
	for (i = 0;i < MAX;i++)
	{
		printf("thread2: number = %d\n",number);
		pthread_mutex_lock(&mut);
		number++;
		pthread_mutex_unlock(&mut);
		sleep(2);
	}
	printf("pthread2：主函数在等我完成任务吗？");

	pthread_exit(NULL);

}

void thread_create()
{
	int temp;
	memset(&thread[0],0,sizeof(thread));
	if ((temp = pthread_create(&thread[0],NULL,thread1,NULL)) != 0)
	{
		printf("线程1创建失败！\n");
	}
	if ((temp = pthread_create(&thread[1],NULL,thread2,NULL)) != 0)
	{
		printf("线程2创建失败！\n");
	}	
}

void thread_wait()
{
	//等待线程结束
	if (pthread[0] != 0)
	{
		pthread_join(pthread[0],NULL);
		printf("pthread1已经结束\n");
	}
	if(pthread[1] != 0)
	{
		pthread("pthread2已经结束\n");

	}
}


int main()
{
	pthread_mutex_init(&mut,NULL);   //初始化条件变量
	printf("我是主函数我正在创建线程 哈哈！\n");
	thread_create();
	printf("我是主函数我正在等待线程结束 哈哈！\n");
	thread_wait();
	return 0;
}









