from PIL import Image, ImageFilter

before = Image.open("palm_trees.jpg")
after = before.filter(ImageFilter.BoxBlur(2))
after.save("output.jpg")