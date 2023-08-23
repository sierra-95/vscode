import smtplib
server = smtplib.SMTP('127.0.0.1')

subject = "reference"
message = """\
Subject: Late reply

I will act as soon as possible.
Thank you
""".format(subject)

server.sendmail('michaelmachohi@gmail.com', 'office@dekut.ac.ke', message)
server.quit()
