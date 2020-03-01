.section ".data"
solveEquation: .asciz "For input of x =  %d , output y = %d \n"
maxValue: .asciz "The maximum output value is y =  %d , when input x = %d \n"

define(a1, 3)
define(a2, 10)
define(a3, 15)

define(x_r, l0)
define(y_r, l1)
define(max_Y, l2)
define(max_X, l4)

  .align 4
  .section ".text"
  .global main

main:
  save  %sp, -96, %sp
  clr   %x_r
  mov	-4, %x_r
  mov	%x_r, %o0
  .global loop

loop:

        call    .mul
        mov     %x_r, %o1
        call    .mul
        mov     %x_r, %o1
        call    .mul
        mov     %x_r, %o1		!(x^4)
        call    .mul			!(x^4 *3)
        mov     a1, %o1		          
        mov     %o0, %y_r		! Moves the answer to y to subtract 

        mov     %x_r, %o0
        call    .mul
        mov     %x_r, %o1		!(x^2)
        call    .mul			!(x^2 *3)
        mov     a2, %o1	
        sub	%y_r, %o0, %y_r		! Subtracts the from the previous answer

        mov     %x_r, %o0
        call    .mul			!(x * 15) 
        mov     a3, %o1
        sub     %y_r, %o0, %y_r		!Subtracts (3x^4 - 10x^2) and 15x	
	
findMax:
	cmp	%max_Y, %y_r		! Compares Y values to find the greatest occurance
	bg	print			! if condidtion not met go to print
	mov	%y_r, %max_Y		! Stores greatest Y in max_Y
	mov	%x_r, %max_X		! Stores the corresponding X in max_	

print:	
        set     solveEquation, %o0
        mov     %x_r, %o1
	mov	%y_r, %o2
        call    printf
      
        add     %x_r, 1, %x_r		!Increments then checks to see if value is in the range
        cmp     %x_r, 7
        bl,a    loop			!If still in desired range the continue the loop	
	mov	%x_r, %o0
	set	maxValue, %o0
	mov	%max_Y, %o1
	mov	%max_X, %o2
	call	printf
	nop	


  ret
  restore
