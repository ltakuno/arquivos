from flask import Flask

app = Flask(__name__)

@app.route('/')
def main_page():
    db = get_db()
    cur = db.execute("select * from order by id desc")
    entries = cur.fetchall()
    return render_template('index.html', entries=entries)
