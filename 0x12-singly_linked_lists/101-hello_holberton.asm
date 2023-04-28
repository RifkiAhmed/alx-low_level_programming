global main
extern printf

main:
    mov edi, text
    mov eax, 0
    call printf

section .data
    text db `Hello, Holberton\n`, 0

section .bss
