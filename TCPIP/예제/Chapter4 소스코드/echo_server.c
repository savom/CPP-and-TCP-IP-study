#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <WinSock2.h>

#define BUF_SIZE 1024
void error_handling(char *message);

int main(int argc, char *argv[])
{
	WSADATA wsaData;
	SOCKET hServSock, hClntSock;
	char message[BUF_SIZE];
	int strLen, i;

	SOCKADDR_IN servAdr, clntAdr;
	int clntAdrSize;
	
	if (argc != 2) {
		printf("Usage : %s <port>\n", argv[0]);
		exit(1);
	}
	
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		error_handling("WSAStartup() error!");

	hServSock=socket(PF_INET, SOCK_STREAM, 0);   
	if(hServSock==INVALID_SOCKET)
		error_handling("socket() error");
	
	memset(&servAdr, 0, sizeof(servAdr));
	servAdr.sin_family=AF_INET;
	servAdr.sin_addr.s_addr=htonl(INADDR_ANY);
	servAdr.sin_port=htons(atoi(argv[1]));

	if(bind(hServSock, (struct SOCKADDR*)&servAdr, sizeof(servAdr))==SOCKET_ERROR)
		error_handling("bind() error");
	
	if(listen(hServSock, 5)==SOCKET_ERROR)
		error_handling("listen() error");
	
	clntAdrSize=sizeof(clntAdr);

	for(i=0; i<5; i++)
	{
		hClntSock=accept(hServSock, (SOCKADDR*)&clntAdr, &clntAdrSize);
		if(hClntSock==-1)
			error_handling("accept() error");
		else
			printf("Connected client %d \n", i+1);
	
		while ((strLen = recv(hClntSock, message, BUF_SIZE, 0)) != 0)
			send(hClntSock, message, strLen,0);

		closesocket(hClntSock);
	}

	closesocket(hServSock);
	return 0;
}

void error_handling(char *message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}