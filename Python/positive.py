def main():
    i = get_positive_int()
    print(i)

def get_positive_int():
    while True:
        number = int(input("What's your number?"))
        if number>0:
            return False
    return number

main()