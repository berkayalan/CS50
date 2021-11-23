decision = str(input("Do you aggree? "))

accepted = ["Y","y","Yes","yes"]

if decision in accepted:
    print("Agreed!")

else:
    print("Not agreed!")