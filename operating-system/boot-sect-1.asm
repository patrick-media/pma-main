mov al, 0x0e
mov ah, 'H'
int 10h
mov ah, 'e'
int 10h
mov ah, 'l'
int 10h
int 10h
mov ah, 'o'
int 10h

times 510-($-$$) db 0
dw 0xAA55
