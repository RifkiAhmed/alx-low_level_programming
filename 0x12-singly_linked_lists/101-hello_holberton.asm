section .data
    text db `Hello, Holberton\n`, 0

section .text
    global main
    extern printf

main:
    mov edi, text
    xor eax, eax
    call printf

    mov eax, 0
    ret
