



.global length

length:
    save    %sp, -96, %sp
    mov     %i0, %prt
    clr     l2
loop:
    ldub    [%l0], %l1
    cmp     %l1, 0
    beq     done
    nop
    inc     %l0
    inc     %l2
    ba      loop
    nop
done:
    mov     %l2, %i0
    ret
    restore
    
