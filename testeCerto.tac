.table
	int x1
	int xa1
	int i1
	float y1
	int i2
	int i3
	char string0[] = "lendo i dentro do escopo: "
	int i4
	char string1[] = "lendo i dentro do escopo: "
	int i5
	char string2[] = "lendo i dentro do escopo: "
	float r2
	char string3[] = "lendo r: "
	float fu2
	char string4[] = " "
	char string5[] = "eh igual o pi!"
	char string6[] = "eh menor que o pi!"
	char string7[] = "eh igual o pi!"
	char string8[] = "eh menor que o pi!"

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
	mov $400, &string0
	param 26
	param $400
	call writeln_fn, 2
	scani i3
	mov $400, &string1
	param 26
	param $400
	call writeln_fn, 2
	scani i4
	mov $400, &string2
	param 26
	param $400
	call writeln_fn, 2
	scani i5
	mov $400, &string3
	param 9
	param $400
	call writeln_fn, 2
	scanf r2
	mov $400, &string4
	param 1
	param $400
	call writeln_fn, 2
	mov $400, &string5
	param 14
	param $400
	call write_fn, 2
	mov $400, &string6
	param 18
	param $400
	call writeln_fn, 2
	mov $400, &string8
	param 18
	param $400
	call writeln_fn, 2
	mov $400, &string7
	param 14
	param $400
	call writeln_fn, 2
