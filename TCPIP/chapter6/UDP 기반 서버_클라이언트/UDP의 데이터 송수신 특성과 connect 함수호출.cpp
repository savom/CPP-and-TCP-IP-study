�������� ��谡 �����ϴ� UDP ����

	UDP�� �������� ��谡 �����ϴ� ���������̹Ƿ�, ������ �ۼ��� �������� ȣ���ϴ� ������Լ��� ȣ��Ƚ���� ū �ǹ̸� ������.
	������ �Է��Լ��� ȣ��Ƚ���� ����Լ��� ȣ��Ƚ���� �Ϻ��� ��ġ�ؾ� �۽ŵ� �����͸� ���� ������ �� �ִ�.

		if (bind(sock, (struct sockaddr*)&my_adr, sizeof(my_adr)) == -1)
			error_handling("bind() error");

		for (i = 0; i < 3; i++)
		{
			sleep(5);	// delay 5 sec.
			adr_sz = sizeof(your_adr);
			str_len = recvfrom(sock, message, BUF_SIZE, 0,
				(struct sockaddr*)&your_adr, &adr_sz);

			printf("Message %d: %s \n", i + 1, message);
		}

		�������� ��谡 �����ϱ� ������ 5�ʰ��� delay�� �����ص� �� 3���� �޽����� 3���� recvfrom �Լ�ȣ���� ���ؼ� �����Ѵ�.

		sendto(sock, msg1, sizeof(msg1), 0,
			(struct sockaddr*)&your_adr, sizeof(your_adr));
		sendto(sock, msg2, sizeof(msg2), 0,
			(struct sockaddr*)&your_adr, sizeof(your_adr));
		sendto(sock, msg3, sizeof(msg3), 0,
			(struct sockaddr*)&your_adr, sizeof(your_adr));

			�������� ���ۿ� �־ TCP���� ������ �������� ����ϴ� �Լ��� �ٸ��� ������ ������ ������ �� ȣ�� �ø��� �����Ѵٴ� ���̴�.


connected UDP ����, unconnected UDP ����

	sendto �Լ�ȣ���� ���� �������� ���۰����� ũ�� �� �ܰ��.
		- UDP ���Ͽ� �������� IP�� PORT��ȣ ���
		- ������ ����
		- UDP ���Ͽ� ��ϵ� ������ ���� ����

	connected UDP ������ ���� 1�ܰ�� 3�ܰ��� ������ ��ȸ ��ġ�� �ʴ´�.

connected UDP ���� ����

	sock = socket(PF_INET, SOCK_DGRAM, 0);
	if (sock == -1)
		error_handling("socket() error");

	memset(&serv_adr, 0, sizeof(serv_adr));
	serv_adr.sin_family = AF_INET;
	serv_adr.sin_addr.s_addr = inet_addr(argv[1]);
	serv_adr.sin_port = htons(atoi(argv[2]));

	connect(sock, (struct sockaddr*)&serv_adr, sizeof(serv_adr));

		connected UDP ������ TCP�� ���� ��� ���ϰ��� ������ �ǹ����� �ʴ´�.
		�׷��� ���Ͽ� �������� ���� ������ ����� �ȴ�.
		�׸��� connected UDP ������ ������δ� read, write �Լ�ȣ���� �����ϴ�.

