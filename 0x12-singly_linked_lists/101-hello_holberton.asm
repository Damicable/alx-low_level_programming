global 	main
	exten	printf
main:
	mov	edi, format
	xor	eax, eax
	cal	printf
	mov	eax, 0
	ret
format: db `Hello, Holberton\n`,0
