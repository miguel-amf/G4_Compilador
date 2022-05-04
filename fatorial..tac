.table
	int number1
	int result1
	int number3
	int teste3
	int deu_bom3

.code

write_fn:
	mov $500, 0
proximo:
	mov $499, #1
	mov $499, $499[$500]
	add $500, $500, 1
	print $499
	sub $499, $500, #0
	brnz proximo, $499
	return
writeln_fn:
	call write_fn, 2
	println
	return


fatorial:
	add number, 1
	return 0

main:
