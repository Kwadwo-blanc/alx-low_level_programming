section .data
hello db "Hello, Holberton",10,0 ; The string to be printed, 10 is the newline character
format db "%s",0               ; Format specifier for printf

section .text
global main
extern printf

main:
; Prepare arguments for printf
mov rdi, format
mov rsi, hello

; Call printf
call printf

; Exit program
mov rax, 60                  ; Syscall number for sys_exit
xor rdi, rdi                 ; Return code 0
syscall
