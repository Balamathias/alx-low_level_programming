section .data
    hello db 'Hello Hoolerton',0
    hello_len equ $ - hello

section .text
    global _start

_start:
    ; Prepare the parameters for the write system call
    mov rax, 1         ; syscall number for sys_write
    mov rdi, 1         ; file descriptor (1 = stdout)
    mov rsi, hello     ; pointer to the string to be printed
    mov rdx, hello_len ; length of the string

    ; Make the system call
    syscall

    ; Exit the program
    mov rax, 60        ; syscall number for sys_exit
    xor rdi, rdi       ; exit status
    syscall

