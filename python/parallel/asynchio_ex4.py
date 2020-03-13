import aiohttp
import asyncio

@asyncio.coroutine
def run():
     r = yield from aiohttp.request('GET', 'http://www.google.com')
     raw = yield from r.text()
     print(raw)
asyncio.get_event_loop().run_until_complete(run())
