#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <WinSock2.h>

#define BUF_SIZE 1024
void error_handling(char *message);

int main(int argc, char *argv[])
{
	WSADATA wsaData;
	SOCKET hSocket;
	char message[BUF_SIZE];
	int strLen;
	SOCKADDR_IN servAdr;


	if(argc!=3) {
		printf("Usage : %s <IP> <port>\n", argv[0]);
		exit(1);
	}

	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		error_handling("WSAStartup() error");
		

	hSocket=socket(PF_INET, SOCK_STREAM, 0);   
	if(hSocket==INVALID_SOCKET)
		error_handling("socket() error");
	
	memset(&servAdr, 0, sizeof(servAdr));
	servAdr.sin_family=AF_INET;
	servAdr.sin_addr.s_addr=inet_pton(argv[1]);
	servAdr.sin_port=htons(atoi(argv[2]));
	
	if(connect(hSocket, (SOCKADDR*)&servAdr, sizeof(servAdr))==SOCKET_ERROR)
		error_handling("connect() error!");
	else
		puts("Connected...........");
	
	while(1) 
	{
		fputs("Input message(Q to quit): ", stdout);
		fgets(message, BUF_SIZE, stdin);
		
		if(!strcmp(message,"q\n") || !strcmp(message,"Q\n"))
			break;

		send(hSocket, message, strlen(message), 0);
		strLen = recv(hSocket, message, BUF_SIZE - 1, 0);
		message[strLen]=0;
		printf("Message from server: %s", message);
	}
	
	closesocket(hSocket);
	return 0;
}

void error_handling(char *message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}