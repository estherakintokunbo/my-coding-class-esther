#################################################################
#Homework
#Read more about conditional statements
#Implement for option P
#Implement for AP so it calculates area and perimeter
#Implement for anything that's not A,P, AP... this should end the program
#Create a Square2.py and do the assignment there
    
##################################################################

>>> #Ask the user for username
username = input("Enter your Username: ")
>>> #Display a welcome page
print ("Welcome ", username)
>>> #Ask the user to enter age
age = input("Enter Your Age: ")
>>> #Ask user for length of the square
length = float(input("Please enter the length of the square: "))
>>> #Ask user to select A or B for area or perimeter
option = input("Enter A to calculate Area or P to calculate Perimeter: ")
>>> #Calculate the area (A) or perimeter (P) using the given length
if option == "A":
    area = length * length
    print("Area: ",area)
else if option =="P":
    perimeter = 4 * length
    print ("Perimeter: ",perimeter)
else if option == "AP":
    area = length * length
    print ("Area: ", area)
    perimeter = 4 * length
    print ("Perimeter: ", perimeter)
else:
    print ("This is an invalid option for this program. Check your input and try again, thank you.")

###############################################################################

num = int(input("Please Enter a number: "))  
factorial = 1  
if num < 0:  
   print("Sorry, this program does not generate factorial for negative numbers")  
else if num == 0:  
   print("The factorial of 0 is 1")  
else:  
   for i in range(1,num + 1):  
       factorial = factorial*i  
   print("The factorial of ",num," is: ",factorial)

##############################################################################

lower = int(input("Please Enter a lower boundary value: ")
upper = int(input("Please Enter a higher boundary value: ")

print("Prime numbers between", lower, "and", upper, "are:")

for num in range(lower, upper + 1):
   # all prime numbers are greater than 1
   if num > 1:
       for i in range(2, num):
           if (num % i) == 0:
               break
       else:
           print(num)
##############################################################################

