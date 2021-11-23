import speech_recognition

recognizer = speech_recognition.Recognizer()
with speech_recognition.Microphone() as source:
    print("Say something:")
    audio = recognizer.listen(source)

print("You said:")
print(recognizer.recognize_google(audio))

words = recognizer.recognize_google(audio)

# Respond to speech
if "hello" in words:
    print("Hello to you too!")
elif "how are you" in words:
    print("I am well, thanks!")
elif "where are you" in words:
    print("I am in Turkey, what about you?")
elif "goodbye" in words:
    print("Goodbye to you too!")
else:
    print("Huh?")