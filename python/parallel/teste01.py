import asyncio
import aiohttp
import async_timeout

@asyncio.coroutine
def fetch_page(session, url, timeout=60):
    with async_timeout.timeout(timeout):
        response = session.get(url)
        return response


loop = asyncio.get_event_loop()
urls = ('http://www.google.com', 'http://www.facebook.com', 'http://www.twitter.com')

session = aiohttp.ClientSession(loop=loop)
tasks = map(lambda x: fetch_page(session, x), urls)
done, pending = loop.run_until_complete(asyncio.wait(tasks, timeout=120))
session.close()
loop.close()

for future in done:
    response = future.result()
    print(response)
    response.close()
