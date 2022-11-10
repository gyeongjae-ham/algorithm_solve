def ibm_subtract(string):
    computer_name = ""
    
    for char in string:
        if char == "Z":
            computer_name += "A"
        else:
            computer_name += chr(ord(char) + 1)
    return computer_name

if __name__ == "__main__":
    for i in range(int(input())):
        string = input()
        
        computer_name = ibm_subtract(string)
        
        print(f"String #{i+1}")
        print(computer_name)
        print()