import os
import qrcode

img = qrcode.make("https://www.youtube.com/watch?v=zbRVrAMefzs&ab_channel=Balthazar")
img.save("qr.png", "PNG")
os.system("open qr.png")