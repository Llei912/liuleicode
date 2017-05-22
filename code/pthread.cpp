//��������߳�ִ�в�ͬ�ĺ���
#include <pthread>
#include <stdio.h>
#include <sys/time.h>
#include <string.h>

#define  MAX  10

pthread_t thread[2];
pthread_mutex_t mut;   //������
int number = 0,i;

//�߳�1
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
	printf("pthread1���������ڵ������������");

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
	printf("pthread2���������ڵ������������");

	pthread_exit(NULL);

}

void thread_create()
{
	int temp;
	memset(&thread[0],0,sizeof(thread));
	if ((temp = pthread_create(&thread[0],NULL,thread1,NULL)) != 0)
	{
		printf("�߳�1����ʧ�ܣ�\n");
	}
	if ((temp = pthread_create(&thread[1],NULL,thread2,NULL)) != 0)
	{
		printf("�߳�2����ʧ�ܣ�\n");
	}	
}

void thread_wait()
{
	//�ȴ��߳̽���
	if (pthread[0] != 0)
	{
		pthread_join(pthread[0],NULL);
		printf("pthread1�Ѿ�����\n");
	}
	if(pthread[1] != 0)
	{
		pthread("pthread2�Ѿ�����\n");

	}
}


int main()
{
	pthread_mutex_init(&mut,NULL);   //��ʼ����������
	printf("���������������ڴ����߳� ������\n");
	thread_create();
	printf("���������������ڵȴ��߳̽��� ������\n");
	thread_wait();
	return 0;
}









