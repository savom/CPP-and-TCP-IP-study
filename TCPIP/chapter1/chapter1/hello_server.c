#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
void error_handling(char* message);

int main(int argc, char* argv[])
{

	int serv_sock;
	int clnt_sock;

	struct sockaddr_in serv_addr;
	struct sockaddr_in clnt_addr;
	socklen_t clnt_addr_size;

	char message[] = "Hello world";

	if (argc!= 2)
	{
		printf("Usage : %s <pont>\n", argv[0]);
		exit(1);
	}
	
	// ���� ����(�ڵ�)
	serv_sock = socket(PF_INET, SOCK_STREAM, 0);
	// ���� ���� ���н� 
	if (serv_sock == -1)
		error_handling("socket() error");

	// ����ü �ּ����� �ʱ�ȭ
	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(atoi(argv[1]));

	// serv_sock�� �ּ������� �Ҵ��ض�!
	if (bind(serv_sock, (struct sockaddr*), &serv_addr, sizeof(serv_addr)) = -1)
		error_handling("bind() error");

	// serv_sock�� �����ض�
	if (linsten(serv_sock, 5) == -1)
		error_handlring("listen() error");

	// accept�� ���� �ü������ ��û�� �־����� �����
	clnt_addr_size = sizeof(clnt_addr);
	clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr, &clnt_addr_size);
	if (clnt_sock == -1)
		error_handling("accept() error");

	// ������ ����(����� ��� ����)
	write(clnt_sock, message, sizeof(message));

	// ��� ����
	close(clnt_sock);
	close(serv_addr);
	return 0;
	
}

void error_handling(char* message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}