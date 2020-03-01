.section ".data"
  enterStr: .asciz "\nPlease enter in a string of a maximum of 30 letters: "
  enterChar: .asciz "\nPlease enter a letter: "

  lowCaseStr: .asciz "\nThe string in lowercase is: %s "
  lengthStr: .asciz  "\nThe length of the string is %d character\n"
  appear: .asciz "\nThe letter %c appears %d times" 
  revisedStr: .asciz "\nThe revised string is: %s "
  
  newStr: .asciz "\nWould you like to enter another string? (y/n)? " 
  lowerCaseStr: .asciz "\nGoodbye.\n"
  upperCaseStr: .asciz "\nGoodbye.\n"

  format: .asciz "%s "
  format2: .asciz "%c "

  newLine: .asciz "\n1"
  newLine2: .asciz "\n"

.align 4

  define(ptrLen, 10)
  define(byteLen, 11)
  define(len, 12)
  strInput: .word 0 
  charInput: .byte 0
  yesNoInput: .byte 0

  .align 4
  .global main
  .section ".text"

main:
   save  %sp, -96, %sp

getStringInput:

    set     enterStr, %o0
    call    printf
    nop
    set     org, %o0
    set     strInput, %o1
    call    scanf
    nop 
    

getCharInput:

    set     enterChar, %o0
    call    prinf 
    nop
    set     org2, %o0
    set     charInput, %o1
    call    scanf


.global length
findLength:
    mov     


makeLowerCase:
    mov 

ret 
return

