import secrets
import string

# Function to generate a random password
def generate_password(length):
    # Define the character set for the password
    characters = string.ascii_letters + string.digits + string.punctuation
    password = ''.join(secrets.choice(characters) for _ in range(length))
    return password

# Main program
print("Password Generator")
try:
    password_length = int(input("Enter the desired password length: "))
    if password_length < 1:
        print("Password length must be at least 1 character.")
    else:
        generated_password = generate_password(password_length)
        print("Generated Password:", generated_password)
except ValueError:
    print("Invalid input. Please enter a valid password length (a positive integer).")
