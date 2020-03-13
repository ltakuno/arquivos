import asyncio

@asyncio.coroutine
def hello():
    print('hello')
    yield from asyncio.sleep(1)
    print('world!')



event_loop = asyncio.get_event_loop()
event_loop.run_until_complete(hello())
event_loop.close()
