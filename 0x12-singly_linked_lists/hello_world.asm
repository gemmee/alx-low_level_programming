;-------------------------------------------------------------------
;
; A hello world program in assembly language.
; Author: Jaba
; Credit: NeuralNine Youtube channel
;
; You can use the below commands to assemble your code:
; nasm -f elf64 -o hello.o hello_world.asm
; ls 
; ld -o hello hello.o
;
;--------------------------------------------------------------------

global _start

section .text

_start:
	MOV rax, 0x1
	MOV rdi, 0x1
	MOV rsi, msg
	MOV rdx, msglength
	SYSCALL

	MOV rax, 0x3C
	MOV rdi, 0x0
	SYSCALL

section .data
	msg: DB "Hello World", 0xA
	msglength: EQU $ -msg;
