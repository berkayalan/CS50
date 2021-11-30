from flask import Flask, render_template, request,redirect
from cs50 import SQL
from flask_mail import Mail, Message
import re
import os

app = Flask(__name__)

USERS = {}

app = Flask(__name__)
app.config["MAIL_DEFAULT_SENDER"] = os.getenv("berkayalan14@gmail.com")
app.config["MAIL_PASSWORD"] = os.getenv("Cimbom14")
app.config["MAIL_PORT"] = 465
app.config["MAIL_SERVER"] = "smtp.gmail.com"
app.config["MAIL_USE_TLS"] = True
app.config["MAIL_USERNAME"] = os.getenv("MAIL_USERNAME")
mail = Mail(app)


SUBJETCS = [
    "Business Intelligence",
    "Data Visualisation",
    "Regression",
    "Classification",
    "Natural Language Processing",
    "Computer Vision"
]

@app.route("/")
def index():
    return render_template("index.html", subject=SUBJETCS)

@app.route("/learn", methods=["POST"])
def register():

    email = request.form.get("email")
    if not email:
        return render_template("error.html", message="Missing email")

    subject = request.form.get("subject")
    if not subject:
        return render_template("error.html", message="Missing subject")
    if subject not in SUBJETCS:
        return render_template("error.html", message="Invalid subject")


    message = Message("You are registered!", recipients =[email])
    mail.send(message)

    return redirect("/users")

@app.route("/users")
def users():
    return render_template("users.html", users=USERS)
