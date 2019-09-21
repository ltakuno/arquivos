from selenium import webdriver
from selenium.webdriver.firefox.firefox_binary import FirefoxBinary

from time import sleep

binary = FirefoxBinary('/usr/lib/firefox/firefox')
ff = webdriver.Firefox(firefox_binary=binary)
ff.get('http://google.com')
sleep(5)
ff.quit()
