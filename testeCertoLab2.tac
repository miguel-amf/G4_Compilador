.table
	int x1
	int i1
	float y1
	int i2
	int i3
	int i4
	int i5
	float r2
	float soma2
	int j2

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


fu:
	return 0

main:
	scani i2
