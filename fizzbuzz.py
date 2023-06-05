div_by_both = 0
div_by_three = 0
div_by_five = 0
div_by_neither = 0

for i in range(101):
    if i % 3 ==0 and i % 5 ==0:
        print("Fizzbuzz")
        div_by_both +=1
        if i % 5 == 0:
            div_by_five +=1
        else:
            dive_by_three +=1
    elif i % 3 == 0:
        print("Fizz")
        div_by_three +=1
    elif i % 5 == 0:
        print("Buzz")
        div_by_five +=1
    else:
        div_by_neither += 1
total = div_by_five + div_by_three + div_by_neither
print(f"""
    Divisible by three and five: {div_by_both}
    Divisible by three: {div_by_three}
    Divisible by five: {div_by_five}
    Not Divisible by either: {div_by_neither}
    total: {total}
""")