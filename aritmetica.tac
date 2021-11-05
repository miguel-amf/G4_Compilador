.table
	int a1
	int b1
	int c1
	float d1

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


main:
	add a, b
	add 3.14, 4.21
