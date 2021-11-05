.table
	int x1
	int xa1
	int i1
	float y1
	int i2
	int i3
	int i4
	int i5
	float r2
	float fu2
	char string0[] = " "
	char string1[] = "eh igual o pi!"
	char string2[] = "eh menor que o pi!"
	char string3[] = "eh igual o pi!"
	char string4[] = "eh menor que o pi!"

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
	scani i3
	scani i4
	scani i5
	scanf r2
 $0, $0, 3.14
	mov $400, &string0
	param 1
	param $400
	call writeln_fn, 2
	mov $400, &string1
	param 14
	param $400
	call write_fn, 2
	mov $400, &string2
	param 18
	param $400
	call writeln_fn, 2
	mov $400, &string4
	param 18
	param $400
	call writeln_fn, 2
	mov $400, &string3
	param 14
	param $400
	call writeln_fn, 2
