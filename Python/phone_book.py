import csv

file = open("phonebook.csv","a")

name = str(input("Name: "))
number = str(input("Number: "))

writer = csv.writer(file)

writer.writerow([name,number])

file.close()