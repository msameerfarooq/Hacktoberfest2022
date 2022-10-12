from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from time import sleep


search = input('Enter the name of reciever: ')
message = input('Enter the message: ')
photo = input('Enter the path of video/photo: ')
count = int(input('Enter the number of times the mesage should be sent: '))



class WhatsppBot:
    def __init__(self):
        self.driver = webdriver.Chrome()
        self.driver.get('https://web.whatsapp.com/')
        sleep(15)
        self.driver.find_element_by_xpath("//*[@id='side']/div[1]/div/label/div/div[2]").send_keys(search,Keys.RETURN)
        
        
    def message(self):
        messagebox = self.driver.find_element_by_xpath("//*[@id='main']/footer/div[1]/div[2]/div/div[2]")
        for n in range(count):
            messagebox.send_keys(message, Keys.RETURN)

   
    def media(self):
        
        for n in range(count):
            self.driver.find_element_by_xpath("/html/body/div[1]/div/div/div[4]/div/header/div[3]/div/div[2]/div").click()
            photo_input = self.driver.find_element_by_xpath("//*[@id='main']/header/div[3]/div/div[2]/span/div/div/ul/li[1]/button/input").send_keys(photo)
            sleep(2)
            photo_send = self.driver.find_element_by_xpath("//span[@data-icon='send-light']").click()

    print(Exception)
    
    
bot=WhatsppBot()
bot.message()
bot.media()
