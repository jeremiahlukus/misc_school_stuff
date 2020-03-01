define(ptr, l0)
define(byte, l1)
define(len, l2)

.global length

length:
    save    %sp, -96, %sp
    mov     %i0, %prt
    clr     len
loop:
    ldub    [%ptr], %byte
    cmp     %byte, 0
    beq     done
    nop
    inc     %ptr
    inc     %len
    ba      loop
    nop
done:
    mov     %len, %i0
    ret
    restore
    
