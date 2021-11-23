people = {"Berkay":"+16-743-324-543",
          "James":"+74-53-31-433",
          "Clue":"+88-4354-43-12"}

name = str(input("What's your name?"))
if name in people:
    number = people[name]
    print("Number of person is ", number)