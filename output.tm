Change Case 
* Standard prelude:
  0:     LD  6,0(0) 	load maxaddress from location 0
  1:     ST  0,0(0) 	clear location 0
* End of standard prelude.
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
  2:    JEQ  0,1(7) 	if: jmp to else
  3:    LDA  7,0(7) 	jmp to end
* <- if
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
  4:    JEQ  0,1(7) 	if: jmp to else
  5:    LDA  7,0(7) 	jmp to end
* <- if
* -> if
* -> if
* if: jump to else belongs here
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
  7:    JEQ  0,1(7) 	if: jmp to else
  8:    LDA  7,0(7) 	jmp to end
* <- if
* -> if
* -> if
* -> if
* -> if
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
  9:    JEQ  0,1(7) 	if: jmp to else
 10:    LDA  7,0(7) 	jmp to end
* <- if
* -> repeat
* repeat: jump after body comes back here
 11:    JEQ  0,-1(7) 	repeat: jmp back to body
* <- repeat
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
 12:    JEQ  0,1(7) 	if: jmp to else
 13:    LDA  7,0(7) 	jmp to end
* <- if
* -> assign
 14:     ST  0,-1(5) 	assign: store value
* <- assign
* if: jump to else belongs here
* if: jump to end belongs here
 15:    JEQ  0,1(7) 	if: jmp to else
 16:    LDA  7,0(7) 	jmp to end
* <- if
* -> assign
 17:     ST  0,-1(5) 	assign: store value
* <- assign
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
 18:    JEQ  0,1(7) 	if: jmp to else
 19:    LDA  7,0(7) 	jmp to end
* <- if
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
 20:    JEQ  0,1(7) 	if: jmp to else
 21:    LDA  7,0(7) 	jmp to end
* <- if
* if: jump to else belongs here
* if: jump to end belongs here
 22:    JEQ  0,1(7) 	if: jmp to else
 23:    LDA  7,0(7) 	jmp to end
* <- if
* -> assign
 24:     ST  0,-1(5) 	assign: store value
* <- assign
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
 25:    JEQ  0,1(7) 	if: jmp to else
 26:    LDA  7,0(7) 	jmp to end
* <- if
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
 27:    JEQ  0,1(7) 	if: jmp to else
 28:    LDA  7,0(7) 	jmp to end
* <- if
* if: jump to else belongs here
* if: jump to end belongs here
 29:    JEQ  0,1(7) 	if: jmp to else
 30:    LDA  7,0(7) 	jmp to end
* <- if
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
 31:    JEQ  0,1(7) 	if: jmp to else
 32:    LDA  7,0(7) 	jmp to end
* <- if
* if: jump to else belongs here
* if: jump to end belongs here
 33:    JEQ  0,1(7) 	if: jmp to else
 34:    LDA  7,0(7) 	jmp to end
* <- if
* -> if
* if: jump to else belongs here
* if: jump to end belongs here
 35:    JEQ  0,1(7) 	if: jmp to else
 36:    LDA  7,0(7) 	jmp to end
* <- if
* if: jump to end belongs here
  6:    JEQ  0,31(7) 	if: jmp to else
 37:    LDA  7,0(7) 	jmp to end
* <- if
* if: jump to else belongs here
* if: jump to end belongs here
 38:    JEQ  0,1(7) 	if: jmp to else
 39:    LDA  7,0(7) 	jmp to end
* <- if
* End of execution.
 40:   HALT  0,0,0 	
