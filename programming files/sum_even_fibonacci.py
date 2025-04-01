# JD
# Change even or odd check to always be true. Line 12
# Change initial value of sum_even to 1. Line 7

# initial fibinocci numbers
a, b = 0, 1
sum_even = 1
# find fibonacci numbers up to 4,000,000

while b < 4000000:
    #if the fibonocci number 'b' is even
    if b % 1 == 0:
        # add it to a running sum
        sum_even += b
    # calculate the next fibonacci number in the series
    a, b = b, a+b
# print the sum of the even fibonacci numbers
print(sum_even)

# answer should be 4613732
