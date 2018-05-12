from django.http import HttpResponse
import datetime
from django.shortcuts import render

def index(request):
    return HttpResponse("Hello world!")


#  def today_is(request):
#     now = datetime.datetime.now()
#     html = "<html><body>Current date and time: {0}</body></html>".format(now)
#     return HttpResponse(html)

# def today_is(request):
#     now = datetime.datetime.now()
#     t = template.Template("<html><body>Current date and time: {{ now }}</body></html>")
#     c = template.Context({'now' : now })
#     html = t.render(c)
#     return HttpResponse(html)


# def today_is(request):
#     now = datetime.datetime.now()
#     t = template.loader.get_template('blog/datetime.html')
#     c = template.Context({'now': now})
#     html = t.render(c)
#     return HttpResponse(html)


def today_is(request):
    now = datetime.datetime.now()
    return render(request, 'blog/datetime.html', {'now': now })