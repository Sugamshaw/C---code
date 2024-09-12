import re

def clean_digits(s):
    # Step 1: Remove the characters immediately preceding a digit
    s = re.sub(r'.\d', '', s)
    
    # Step 2: Remove all remaining digits
    s = re.sub(r'\d', '', s)
    
    return s

# Example usage
original_string = "acde2gd3"
result = clean_digits(original_string)
print(result)  # Output: "acdg"
