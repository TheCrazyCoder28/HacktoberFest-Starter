from selenium import webdriver
import time
from selenium.webdriver.support.ui import WebDriverWait 

browser =  webdriver.Chrome()
#open instagram
browser.get("https://www.instagram.com")  

#wait for 3 sec to fully load the page
time.sleep (3)

#identify user field and send username
username_input = browser.find_element_by_css_selector("input[name='username']").send_keys("your username")
#identify password field and send password
password_input = browser.find_element_by_css_selector("input[name='password']").send_keys("your password")
#find and click submit
login_button = browser.find_element_by_xpath("//button[@type='submit']")
login_button.click()
#click on notNow button

for i in range(2):
    time.sleep(2)
    notNowButton = WebDriverWait(browser, 15).until(
        lambda d: d.find_element_by_xpath('//button[text()="Not Now"]'))
    notNowButton.click()

#loop
for i in range (5):
    browser.find_element_by_xpath('//*[@id="react-root"]/section/main/section/div[3]/div[2]/div[2]/div/div/div/div[1]/div[3]/button').click()
    browser.refresh()
    time.sleep(5)

