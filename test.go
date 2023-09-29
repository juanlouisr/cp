package main

import (
	"fmt"
)

var units = []string{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}
var teens = []string{"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}
var tens = [...]string{"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}

func IntegerToWords(num int) string {
	if num < 0 {
		return "minus " + IntegerToWords(-num)
	}

	if num < 10 {
		return units[num]
	}

	if num < 20 {
		return teens[num-10]
	}

	if num < 100 {
		return tens[num/10] + checkUnits(num%10)
	}

	if num < 1000 {
		return units[num/100] + " hundred" + checkTens(num%100)
	}

	if num < 1000000 {
		return IntegerToWords(num/1000) + " thousand" + checkHundreds(num%1000)
	}

	if num < 1000000000 {
		return IntegerToWords(num/1000000) + " million" + checkThousands(num%1000000)
	}

	if num < 1000000000000 {
		return IntegerToWords(num/1000000000) + " billion" + checkMillions(num%1000000000)
	}

	if num < 1000000000000000 {
		return IntegerToWords(num/1000000000000) + " trillion" + checkBillions(num%1000000000000)
	}

	return "number out of range"
}

func checkUnits(num int) string {
	if num == 0 {
		return ""
	}
	return " " + units[num]
}

func checkTens(num int) string {
	if num == 0 {
		return ""
	}
	return " " + IntegerToWords(num)
}

func checkHundreds(num int) string {
	if num == 0 {
		return ""
	}
	return " " + IntegerToWords(num)
}

func checkThousands(num int) string {
	if num == 0 {
		return ""
	}
	return " " + IntegerToWords(num)
}

func checkMillions(num int) string {
	if num == 0 {
		return ""
	}
	return " " + IntegerToWords(num)
}

func checkBillions(num int) string {
	if num == 0 {
		return ""
	}
	return " " + IntegerToWords(num)
}

func main() {
	fmt.Println(IntegerToWords(1))
	fmt.Println(IntegerToWords(2000))
	fmt.Println(IntegerToWords(953210))
}
