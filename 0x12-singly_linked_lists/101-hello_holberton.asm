section.dat; Data section, initialiazed varaibles
msg: db "Hello, Holberton", 0; C string needs 0
fmt: db "%s", 10, 0; the printf format, "\n", '0'

section.text; Code section.

global main; the standard gcc entry point
main:; the program label for the entry point
push rbp ; ste up stack frame, must be alligned

mov rdi,fmt
mov rsi,msg
mov rax,0; or can be xor rax, rax
call printf; call C function

pop rbp; restore stack

mov rax,0; normal, no error, return value
ret; return
