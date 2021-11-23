import pyttsx3

engine = pyttsx3.init()
name = str(input("What's your name?"))
engine.say("Hello, ",name)
engine.runAndWait()