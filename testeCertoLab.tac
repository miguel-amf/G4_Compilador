.table
	int list IL0
	float list0ä_¡U FL0
	int list n1
	int i1
	int list new1
	int elem2
	char string0[] = "Digite o elemento da lista: "
	float i3
	float x4
	char string1[] = "Digite os n√∫mero de elementos da lista: "
	int n5
	float list0ä_¡U FL105
	float list0ä_¡U AUXL6
	int n6
	char string2[] = " "
	char string3[] = " "
	char string4[] = "A nova lista tem "
	char string5[] = " elementos."
	char string6[] = "A nova lista n√£o possui elementos."

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


read_list:
	mov $400, &string0
	param 28
	param $400
	call writeln_fn, 2
	scani elem2
	return 0

succ:
	add i, 1
	return 0

leq_10:
	return 0

main:
	mov $400, &string1
	param 41
	param $400
	call writeln_fn, 2
	add n, 1
	mov $400, &string2
	param 1
	param $400
	call write_fn, 2
	mov $400, &string3
	param 1
	param $400
	call writeln_fn, 2
	mov $400, &string4
	param 17
	param $400
	call write_fn, 2
	mov $400, &string5
	param 11
	param $400
	call writeln_fn, 2
	mov $400, &string6
	param 35
	param $400
	call writeln_fn, 2
