# Function to perform arithmetic operations
def perform_operation(num1, num2, operation):
    if operation == '1':
        return num1 + num2
    elif operation == '2':
        return num1 - num2
    elif operation == '3':
        return num1 * num2
    elif operation == '4':
        if num2 != 0:
            return num1 / num2
        else:
            return "Error: Division by zero"
    else:
        return "Invalid operation"

# Main program
print("Simple Calculator")
while True:
    print("Operations:")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Quit")

# Get user input
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    operation = input("Enter the operation (1/2/3/4): ")

# Perform the calculation
    if operation == 1 or operation == 2 or operation == 3 or operation == 4:
        result = perform_operation(num1, num2, operation)
        print("Result:", result)

    elif operation == 5:
        break
