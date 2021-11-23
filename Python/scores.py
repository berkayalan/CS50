scores =[]

def get_average(list):
    return (sum(list)/len(list))

scores.append(int(input("What's the first score?")))

scores.append(int(input("What's the second score?")))

scores.append(int(input("What's the third score?")))


print(f"Average Score is {get_average(scores)}")