	extern 	printf
	global	main
main:
	mov		edi, text
	mov		eax, 0
	call		printf

	text db `Hello, Holberton\n`,0
