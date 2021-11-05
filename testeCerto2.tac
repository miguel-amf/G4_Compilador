.table
	int i1
	int n1
	float b1
	int i2
	int n2
	int x3
	float y3
	float a3
	int m3
	int m4
	int m5
	int asd5
	int ifas6
	int list cb3
	int abc3
	char string0[] = ""
	char string1[] = "Vamo q vamo!"

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


f:
	return 0

fa:
	return 0

main:
	scani abc3
	mov $400, &string0
	param 0
	param $400
	call writeln_fn, 2
	mov $400, &string1
	param 12
	param $400
	call writeln_fn, 2
