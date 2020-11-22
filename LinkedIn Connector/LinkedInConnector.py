from selenium import webdriver
import time 
import random


driver = webdriver.Chrome(executable_path='/home/scarlet/Projects/WebDrivers/Chromedriver/chromedriver')

driver.get('https://www.linkedin.com/mynetwork/')

number_of_scrolls = 100

sleep_between_scrolls = 2

for i in range(number_of_scrolls):
    driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
    time.sleep(sleep_between_scrolls)

# connect_buttons = driver.find_elements_by_class_name('artdeco-button__text')

# filtered_connect_buttons = []

# for i in connect_buttons:
#     if i.text == 'Connect':
#         filtered_connect_buttons.append(i)


# for i in filtered_connect_buttons:
#     i.click()
#     time.sleep(60)


connect_buttons = []

for i in driver.find_elements_by_tag_name('button'):
     if i.text == 'Connect':
            connect_buttons.append(i)


for i in connect_buttons:
    i.click()
    # print(random.randint(0, 9))
    time.sleep(random.randint(60, 70))
             


# SCROLL_PAUSE_TIME = 0.5

# # Get scroll height
# last_height = driver.execute_script("return document.body.scrollHeight")

# while True:
#     # Scroll down to bottom
#     driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")

#     # Wait to load page
#     time.sleep(SCROLL_PAUSE_TIME)

#     # Calculate new scroll height and compare with last scroll height
#     new_height = driver.execute_script("return document.body.scrollHeight")
#     if new_height == last_height:
#         break
#     last_height = new_height