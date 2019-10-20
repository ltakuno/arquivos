from locust import HttpLocust, TaskSet, task

class UserBehavior(TaskSet):
    def on_start(self):
        self.client.post('/login', {
                'username': 'admin', 
                'password': 'senha123'
            })

    @task(3)
    def index(self):
        self.client.get('/')


    @task(1)
    def new_todo(self):
        self.client.post('/new/', {
                'titulo': 'Locust test', 
                'texto' : 'Locust test'
            })
class WebsiteUser(HttpLocust):
    task_set = UserBehavior
    min_wait = 2000
    max_wait = 5000
    host = 'http://localhost:5000' 
