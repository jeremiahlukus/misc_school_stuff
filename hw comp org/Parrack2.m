.section ".data"
myString: .asciz "The answer is %d "

define(a1, 4)
define(a2, 14)
define(temp, 0)

define(x_r, l0)
define(y_r, l1)

  .align 4
  .section ".text"

  .global main
main:
  save  %sp, -96, %sp
  clr   %x_r


  .global loop

loop:

        sub     %x_r, a1, %o0	! (x-4)
        call    .mul		!(x-4) (x-14)
        sub     %x_r, a2, %o1 	
       
        mov     %o0, %y_r	! Store result in y_r

        set     myString, %o0	! The address of the string
        mov     %y_r, %o1	! y is substituted for %d
        call    printf		! Will print all the values until loop is finished
       
        add     %x_r, 1, %x_r	! increments x++
        cmp     %x_r, 11	! sets condidtion
        bl      loop	

	nop


ret 
restore 

