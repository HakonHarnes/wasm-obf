import time

from selenium import webdriver
from selenium.webdriver.chrome.options import Options

chrome_options = Options()
chrome_options.add_argument('--headless')
driver = webdriver.Chrome(options=chrome_options)

driver.get('http://localhost:8080')

time.sleep(15)

driver.save_screenshot('screenshot.png')

driver.quit()
